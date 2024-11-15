#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QDateTime>
#include <QTimeZone>
#include <QEventLoop>

#include <weather.h>

class System: public QObject {
    Q_OBJECT
    Q_PROPERTY(QString api_key MEMBER api_key)
    Q_PROPERTY(QDateTime select_time MEMBER select_time)
    Q_PROPERTY(QString format_time MEMBER format_time)
    Q_PROPERTY(QString select_city MEMBER select_city)
    Q_PROPERTY(QTimeZone timezone MEMBER timezone)
    Q_PROPERTY(double lat MEMBER lat)
    Q_PROPERTY(double lon MEMBER lon)

public:
    System(QObject *parent = nullptr)
        : QObject(parent){
        this->setAPIKEY("0");
        this->resetTime();
        this->resetPosition();
        QEventLoop loop;
        QObject::connect(this, &System::cityUpdated,&loop,&QEventLoop::quit);
        loop.exec();
    }
    System(System &other,QObject *parent = nullptr)
        : QObject(parent){
        this->setAPIKEY(other.getAPIKEY());
        this->updateTime(other.getTime());
        this->updatePosition(other.getCity());
        this->setLat(other.getLat());
        this->setLon(other.getLon());
        this->setTimezone(other.getTimezone());
    }

    void resetTime();
    void resetPosition();

    void setLat(double other){this->lat=other;}
    void setLon(double other){this->lon=other;}
    void setTimezone(QTimeZone other){this->timezone=other;}

    QString getAPIKEY(){return this->api_key;}
    QDateTime getTime(){return this->select_time;}
    QTimeZone getTimezone(){return this->timezone;}
    QString getCity(){return this->select_city;}
    double getLat(){return this->lat;}
    double getLon(){return this->lon;}

signals:
    void cityUpdated();

public slots:
    void setAPIKEY(QString api_key);
    void updateTime(QDateTime other);
    void updatePosition(QString other);
    void getPositionReply();

private:
    QNetworkAccessManager* manager;
    QString api_key;
    QDateTime select_time;
    QTimeZone timezone;
    QString format_time;
    QString select_city;
    double lat;
    double lon;
};

#endif // SYSTEM_H
