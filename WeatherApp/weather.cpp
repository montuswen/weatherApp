#include "weather.h"

void Weather::get_weather(System &sys)
{
    qDebug()<<QString("https://api.openweathermap.org/data/3.0/onecall?lat=%1&lon=%2&appid=%3").arg(sys.getLat()).arg(sys.getLon()).arg(sys.getAPIKEY());
    QUrl weatherApiUrl(QString("https://api.openweathermap.org/data/3.0/onecall?lat=%1&lon=%2&appid=%3").arg(sys.getLat()).arg(sys.getLon()).arg(sys.getAPIKEY()));
    QNetworkRequest request(weatherApiUrl);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &Weather::handleWeatherResponse);
}

void Weather::handleWeatherResponse()
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
        this->feelslike_temp=currentWeather["feels_like"].toDouble()-273.15;
        this->humidity=currentWeather["humidity"].toInt();
        this->airPressure=currentWeather["pressure"].toInt();
        this->windKph=currentWeather["wind_speed"].toDouble();
        this->windDirection=currentWeather["wind_deg"].toInt();
        this->ultravioletRay=currentWeather["uvi"].toDouble();
        this->cloud=currentWeather["clouds"].toInt();

        QJsonArray dailyArray = jsonObj["daily"].toArray();
        if (!dailyArray.isEmpty()) {
            QJsonObject today = dailyArray.at(0).toObject();
            QJsonObject temp=today["temp"].toObject();
            this->temperature_high=temp["max"].toDouble()-273.15;
            this->temperature_low=temp["min"].toDouble()-273.15;

            this->precip=today["rain"].toDouble();
        }

        QJsonArray hourlyArray = jsonObj["hourly"].toArray();
        if (!hourlyArray.isEmpty()) {
            QJsonObject firstHourForecast = hourlyArray.at(0).toObject();
            this->temperature_onehour = firstHourForecast["temp"].toDouble()-273.15;
            this->description_onehour = firstHourForecast["weather"].toArray().at(0).toObject()["main"].toString();
            QJsonObject twoHourForecast = hourlyArray.at(1).toObject();
            this->temperature_twohour = twoHourForecast["temp"].toDouble()-273.15;
            this->description_twohour = twoHourForecast["weather"].toArray().at(0).toObject()["main"].toString();
        }
    }
    else {
        qDebug() << "Error:" << reply->errorString();
    }
    emit this->WeatherGeted();
    reply->deleteLater();
}

void Weather::get_icon()
{
    QUrl url(this->icon);
    QNetworkRequest request(url);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &Weather::handleIconResponse);
}

void Weather::handleIconResponse()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError) {
            this->image->loadFromData(reply->readAll());
            emit this->IconGeted();
        }
    else {
        qDebug() << "Error in Icon Request:" << reply->errorString();
    }
    reply->deleteLater();
}

void Weather::get_all(System &sys)
{
    this->get_weather(sys);
    QEventLoop loop1;
    QObject::connect(this, &Weather::WeatherGeted,&loop1, &QEventLoop::quit);
    loop1.exec();
    this->get_icon();
    QEventLoop loop2;
    QObject::connect(this, &Weather::IconGeted,&loop2, &QEventLoop::quit);
    loop2.exec();
}
