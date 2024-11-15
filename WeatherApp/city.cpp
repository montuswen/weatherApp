#include "city.h"

void CityWeatherItem::getLat(QString api_key)
{
    manager=new QNetworkAccessManager(this);
    QUrl url(QString("http://api.openweathermap.org/geo/1.0/direct?q=%1&limit=1&appid=%2").arg(this->city).arg(api_key));
    QNetworkRequest request(url);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this,&CityWeatherItem::HandleLatReply);
}

void CityWeatherItem::HandleLatReply()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonArray jsonArray = jsonDoc.array();

        if (!jsonArray.isEmpty()) {
            QJsonObject cityInfo = jsonArray[0].toObject();
            this->lat = cityInfo["lat"].toDouble();
            this->lon = cityInfo["lon"].toDouble();
            emit this->LatGeted();
        }
    }
    else {
        qDebug() << "Error:" << reply->errorString();
    }
    reply->deleteLater();
    delete manager;
}
