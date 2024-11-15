#ifndef CITY_H
#define CITY_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QEventLoop>
#include <QDateTime>

#include <weather.h>
#include <system.h>
#include <functioncity.h>
#include <simpleweather.h>

class SimpleWeather;
class System;
class FunctionCity;


class CityWeatherItem : public QObject {
    Q_OBJECT
public:
    explicit CityWeatherItem(System&sys,QString &city,QObject *parent = nullptr)
        : QObject(parent) {
        this->city=city;
        this->getLat(sys.getAPIKEY());
        QEventLoop loop;
        QObject::connect(this, &CityWeatherItem::LatGeted,&loop, &QEventLoop::quit);
        loop.exec();
        this->weather=new SimpleWeather(sys,city,this->lat,this->lon);
    }
    friend class FunctionCity;
    void getLat(QString api_key);
    QString getCity(){return city;}
public slots:
    void HandleLatReply();
signals:
    void LatGeted();
private:
    QNetworkAccessManager* manager;

    QString city;
    double lat;
    double lon;

    SimpleWeather* weather;
};

#endif // CITY_H
