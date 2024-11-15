#include "simpleweather.h"

void SimpleWeather::get_weather(QString api_key)
{
    manager=new QNetworkAccessManager(this);
    QUrl weatherApiUrl(QString("https://api.openweathermap.org/data/3.0/onecall?lat=%1&lon=%2&appid=%3").arg(this->lat).arg(this->lon).arg(api_key));
    QNetworkRequest request(weatherApiUrl);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &SimpleWeather::WeatherReplyGeted);
}

void SimpleWeather::WeatherReplyGeted()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray response = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
        QJsonObject jsonObj = jsonDoc.object();

        QJsonObject currentWeather = jsonObj["current"].toObject();
        QJsonObject weather = currentWeather["weather"].toArray().at(0).toObject();
        this->description=weather["main"].toString();
        this->icon="https://openweathermap.org/img/wn/"+weather["icon"].toString()+".png";

        this->temperature=currentWeather["temp"].toDouble()-273.15;

        QJsonArray dailyArray = jsonObj["daily"].toArray();
        if (!dailyArray.isEmpty()) {
            QJsonObject today = dailyArray.at(0).toObject();
            QJsonObject temp=today["temp"].toObject();
            this->temperature_high=temp["max"].toDouble()-273.15;
            this->temperature_low=temp["min"].toDouble()-273.15;
        }
    }
    else {
        qDebug() << "Error:" << reply->errorString();
    }
    emit this->WeatherGeted();
    reply->deleteLater();
    delete manager;
}

void SimpleWeather::get_icon()
{
    manager=new QNetworkAccessManager(this);
    qDebug()<<this->icon;
    QUrl url(this->icon);
    QNetworkRequest request(url);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &SimpleWeather::IconReplyGeted);
    qDebug()<<"that";
}

void SimpleWeather::IconReplyGeted()
{
    qDebug()<<"that2";
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError) {
        this->image=new QPixmap();
        this->image->loadFromData(reply->readAll());
        emit this->IconGeted();
    }
    else {
        qDebug() << "Error in Icon Request:" << reply->errorString();
    }
    qDebug()<<"that3";
    reply->deleteLater();
    delete manager;
}

void SimpleWeather::get_all(QString api_key)
{
    qDebug()<<"this1";
    this->get_weather(api_key);
    QEventLoop loop1;
    QObject::connect(this, &SimpleWeather::WeatherGeted,&loop1, &QEventLoop::quit);
    loop1.exec();
    qDebug()<<"this2";
    this->get_icon();
    QEventLoop loop2;
    QObject::connect(this, &SimpleWeather::IconGeted,&loop2, &QEventLoop::quit);
    loop2.exec();
    qDebug()<<"this3";
}
