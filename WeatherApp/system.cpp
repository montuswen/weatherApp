#include "system.h"

void System::setAPIKEY(QString api_key)
{
    this->api_key=api_key;
    this->api_key="ff4d8c7cb1f3856a004e4ea44b641696";
}

void System::resetTime()
{
    this->select_time=QDateTime::currentDateTime();
    this->format_time=this->select_time.toString("yyyy-MM-dd");
}

void System::resetPosition()
{
    manager= new QNetworkAccessManager(this);
    QUrl ipApiUrl("http://ip-api.com/json");
    QNetworkRequest request(ipApiUrl);
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &System::getPositionReply);
}

void System::updateTime(QDateTime other)
{
    this->select_time=other;
    this->format_time=this->select_time.toString("yyyy-MM-dd");
}

void System::updatePosition(QString other)
{
    this->select_city=other;
}

void System::getPositionReply()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply) {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response = reply->readAll();
            // qDebug()<<"here"<<response;
            QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
            QJsonObject jsonObj = jsonDoc.object();

            this->select_city = jsonObj["city"].toString();
            this->lat = jsonObj["lat"].toDouble();
            this->lon = jsonObj["lon"].toDouble();
            QTimeZone timezone(jsonObj["timezone"].toString().toUtf8());
            this->timezone=timezone;
            // qDebug()<<this->select_city;

            emit cityUpdated();
        }
        else {
            qDebug() << "Error in Location Request:" << reply->errorString();
        }
        reply->deleteLater();
    }
}
