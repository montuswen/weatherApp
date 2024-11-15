#include "weather_get.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrl>
#include <QNetworkRequest>
#include <iostream>

Weather::Weather() {
    manager = new QNetworkAccessManager(this);

    // Step 1: 获取位置
    QUrl ipApiUrl("http://ip-api.com/json");
    QNetworkRequest request(ipApiUrl);
    request.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/130.0.0.0 Safari/537.36");  // 设置用户代理
    connect(manager, &QNetworkAccessManager::finished, this, &Weather::handleLocationResponse);
    manager->get(request);
}

void Weather::handleLocationResponse(QNetworkReply* reply) {
    if (reply->error() == QNetworkReply::NoError) {
        auto response = reply->readAll();
        auto jsonResponse = QJsonDocument::fromJson(response).object();
        double lat = jsonResponse["lat"].toDouble();
        double lon = jsonResponse["lon"].toDouble();
        std::cout << "Latitude: " << lat << ", Longitude: " << lon << std::endl;

        // Step 2: 使用位置调用天气 API
        QString apiKey = "f659b028e23401876040a979d8b7b092";  // 替换为你的 OpenWeatherMap API 密钥
        QString urlStr = QString("https://api.openweathermap.org/data/2.5/weather?lat=%1&lon=%2&appid=%3")
                                    .arg(lat)
                                    .arg(lon)
                                    .arg(apiKey);
        QUrl weatherUrl(urlStr);
        QNetworkRequest weatherRequest(weatherUrl);
        connect(manager, &QNetworkAccessManager::finished, this, &Weather::handleWeatherResponse);
        manager->get(weatherRequest);
    } else {
        std::cerr << "Error in location request: " << reply->errorString().toStdString() << std::endl;
    }
    reply->deleteLater();
}

void Weather::handleWeatherResponse(QNetworkReply* reply) {
    if (reply->error() == QNetworkReply::NoError) {
        auto response = reply->readAll();
        auto jsonResponse = QJsonDocument::fromJson(response).object();
        QString description = jsonResponse["weather"].toArray().first().toObject()["description"].toString();
        std::cout << "Current Weather: " << description.toStdString() << std::endl;
    } else {
        std::cerr << "Error in weather request: " << reply->errorString().toStdString() << std::endl;
    }
    reply->deleteLater();
}
