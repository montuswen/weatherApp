
#include "star.h"

void Star::fetchSunsetSunrise() {
    // qDebug() << "here" <<this->select_time.toString("yyyy-MM-dd");
    //qDebug() << QString("https://api.sunrise-sunset.org/json?date=%1&lat=%2&lng=%3").arg(this->select_time.toString("yyyy-MM-dd")).arg(this->lat).arg(this->lon);
    //qDebug()<<QString("http://api.weatherapi.com/v1/astronomy.json?key=%1&q=%2&dt=%3").arg(this->api_key).arg(this->select_city).arg(this->select_time.toString("yyyy-MM-dd"));
    QUrl url(QString("https://api.sunrise-sunset.org/json?date=%1&lat=%2&lng=%3").arg(this->select_time.toString("yyyy-MM-dd")).arg(this->lat).arg(this->lon));
    QNetworkRequest request(url);
    QNetworkReply* reply=manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &Star::getSuninfo);
}

void Star::getSuninfo() {
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError) {
        auto json = QJsonDocument::fromJson(reply->readAll()).object();
        auto results = json["results"].toObject();

        QDateTime utcsunrise = QDateTime::fromString(results["sunrise"].toString(),"h:mm:ss AP");
        utcsunrise.setTimeZone(QTimeZone("UTC"));
        utcsunrise.setDate(this->select_time.date());
        QDateTime utcsunset = QDateTime::fromString(results["sunset"].toString(),"h:mm:ss AP");
        utcsunset.setTimeZone(QTimeZone("UTC"));
        utcsunset.setDate(this->select_time.date());
        QDateTime utcsolarnoon = QDateTime::fromString(results["solar_noon"].toString(),"h:mm:ss AP");
        utcsolarnoon.setTimeZone(QTimeZone("UTC"));
        utcsolarnoon.setDate(this->select_time.date());

        utcsunrise.toTimeZone(this->timezone);
        this->sunrise=utcsunrise.toLocalTime().toString("HH:mm:ss");
        utcsunset.toTimeZone(this->timezone);
        this->sunset=utcsunset.toLocalTime().toString("HH:mm:ss");
        utcsolarnoon.toTimeZone(this->timezone);
        this->solarNoon=utcsolarnoon.toLocalTime().toString("HH:mm:ss");

        emit this->suninfoUpdate();
    } else {
    }
    reply->deleteLater();
}

void Star::fetchMooninfo()
{
    // qDebug() << "here" <<this->select_time.toString("yyyy-MM-dd");
    //qDebug() << QString("https://api.sunrise-sunset.org/json?date=%1&lat=%2&lng=%3").arg(this->select_time.toString("yyyy-MM-dd")).arg(this->lat).arg(this->lon);
    //qDebug()<<QString("http://api.weatherapi.com/v1/astronomy.json?key=%1&q=%2&dt=%3").arg(this->api_key).arg(this->select_city).arg(this->select_time.toString("yyyy-MM-dd"));
    QUrl url(QString("http://api.weatherapi.com/v1/astronomy.json?key=%1&q=%2&dt=%3").arg(this->api_key).arg(this->select_city).arg(this->select_time.toString("yyyy-MM-dd")));
    QNetworkRequest request(url);
    QNetworkReply* reply=manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &Star::getMooninfo);
}

void Star::getMooninfo() {
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError) {
        auto json = QJsonDocument::fromJson(reply->readAll()).object();
        auto results = json["astronomy"].toObject();
        results=results["astro"].toObject();

        QDateTime moonrise = QDateTime::fromString(results["moonrise"].toString(),"h:mm:ss AP");
        this->moonrise=moonrise.toString("HH:mm:ss");
        QDateTime moonset = QDateTime::fromString(results["moonset"].toString(),"h:mm:ss AP");
        this->moonset=moonset.toString("HH:mm:ss");

        this->moonphase=results["moon_phase"].toString();
        this->moonillumination=results["moon_illumination"].toInt();

        emit this->mooninfoUpdate();
    } else {
    }
    reply->deleteLater();
}
