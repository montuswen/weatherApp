#ifndef SIMPLEWEATHER_H
#define SIMPLEWEATHER_H

#include <QObject>
#include <QString>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>

#include <system.h>

class System;
class CalendarWeatherItem;
class CityWeatherItem;

class SimpleWeather:public QObject{
    Q_OBJECT
public:
    friend class CalendarWeatherItem;
    friend class CityWeatherItem;
    explicit SimpleWeather(System &sys,QString city,double lat,double lon,QObject *parent = nullptr)
        : QObject(parent){
        this->current=sys.getTime();
        this->date=sys.getTime().date();
        this->city=city;
        this->lat=lat;
        this->lon=lon;
    }

    void get_all(QString api_key);
    void get_weather(QString api_key);
    void get_icon();

    QPixmap* getimage(){return this->image;}
    QString getdescription(){return this->description;}
    double gettemperature(){return this->temperature;}
    double gettemperature_high(){return this->temperature_high;}
    double gettemperature_low(){return this->temperature_low;}
    QString getcity(){return this->city;}

signals:
    void WeatherGeted();
    void IconGeted();

private slots:
    void WeatherReplyGeted();
    void IconReplyGeted();

private:
    QNetworkAccessManager* manager;

    QDateTime current;
    QDate date;
    QString city;
    double lat;
    double lon;

    QString description;
    double temperature;
    double temperature_high;
    double temperature_low;

    QString icon;
    QPixmap* image;
};
#endif // SIMPLEWEATHER_H
