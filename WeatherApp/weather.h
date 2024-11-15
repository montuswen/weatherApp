#ifndef WEATHER_H
#define WEATHER_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QPixmap>


#include <advice.h>
#include <system.h>

class System;

class Weather : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString description MEMBER description)
    Q_PROPERTY(int temperature MEMBER temperature)
    Q_PROPERTY(int humidity MEMBER humidity)
    Q_PROPERTY(int airPressure MEMBER airPressure)
    Q_PROPERTY(int windKph MEMBER windKph)
    Q_PROPERTY(int ultravioletRay MEMBER ultravioletRay)

    friend class CalendarWeatherItem;
    friend class CityWeatherItem;

public:
    explicit Weather(QObject *parent = nullptr) : QObject(parent) {
        manager= new QNetworkAccessManager(this);
        iconmanager= new QNetworkAccessManager(this);
        image=new QPixmap();
    }

    QString getDescription() const { return description; }
    double getTemperature() const { return temperature; }
    double getFeelslike() const {return this->feelslike_temp;}
    double getFutureOne() const {return this->temperature_onehour;}
    double getFutureTwo() const {return this->temperature_twohour;}
    double getHigh() const {return this->temperature_high;}
    double getLow() const {return this->temperature_low;}
    QString getFutureOnedes() const {return this->description_onehour;}
    QString getFutureTwodes() const {return this->description_twohour;}
    int getHumidity() const { return humidity; }
    int getAirPressure() const { return airPressure; }
    int getWindKph() const { return windKph; }
    int getWindDirection() const { return windDirection; }
    int getUltravioletRay() const { return ultravioletRay; }
    double getPrecip() const {return this->precip;}
    int getCloud() const {return this->cloud;}
    QPixmap* getimage(){return this->image;}

    void get_all(System &sys);
    void get_weather(System &sys);
    void get_icon();

private slots:
    void handleWeatherResponse();
    void handleIconResponse();

signals:
    void WeatherGeted();
    void IconGeted();

private:
    QString description;
    double temperature;
    double temperature_onehour;
    QString description_onehour;
    double temperature_twohour;
    QString description_twohour;
    double feelslike_temp;
    int humidity;
    int airPressure;
    double windKph;
    int windDirection;
    double ultravioletRay;
    double precip;
    int cloud;
    double temperature_high;
    double temperature_low;

    QString icon;
    QPixmap* image;

    QNetworkAccessManager* manager;
    QNetworkAccessManager* iconmanager;
};

#endif // WEATHER_H
