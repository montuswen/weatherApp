#ifndef STAR_H
#define STAR_H

#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDateTime>
#include <QUrlQuery>
#include <iostream>

#include <system.h>

class System;

class Star: public QObject {
    Q_OBJECT
    Q_PROPERTY(QString api_key MEMBER api_key)
    Q_PROPERTY(QDateTime select_time MEMBER select_time)
    Q_PROPERTY(QString select_city MEMBER select_city)
    Q_PROPERTY(QString sunrise MEMBER sunrise)
    Q_PROPERTY(QString sunset MEMBER sunset)
    Q_PROPERTY(QString solarNoon MEMBER solarNoon)
    Q_PROPERTY(double lat MEMBER lat)
    Q_PROPERTY(double lon MEMBER lon)

public:
    Star(System &sys,QObject *parent = nullptr) : QObject(parent) {
        this->select_city=sys.getCity();
        this->lat=sys.getLat();
        this->lon=sys.getLon();
        this->select_time=sys.getTime();
        this->timezone=sys.getTimezone();
        this->api_key=sys.getAPIKEY();
        this->manager= new QNetworkAccessManager(this);
    }

    void fetchSunsetSunrise();
    void fetchMooninfo();
    QString getSunrise(){return this->sunrise;}
    QString getSunset(){return this->sunset;}
    QString getSolarNoon(){return this->solarNoon;}
    QString getMoonrise(){return this->moonrise;}
    QString getMoonset(){return this->moonset;}
    QString getMoonphase(){return this->moonphase;}
    int getMoonillumination(){return this->moonillumination;}

signals:
    void suninfoUpdate();
    void mooninfoUpdate();

private slots:
    void getSuninfo();
    void getMooninfo();

private:
    QNetworkAccessManager* manager;
    QString api_key;
    QDateTime select_time;
    QTimeZone timezone;
    QString select_city;
    double lat;
    double lon;

    QString sunrise;
    QString sunset;
    QString solarNoon;

    QString moonrise;
    QString moonset;
    QString moonphase;
    int moonillumination;
};

#endif // STAR_H
