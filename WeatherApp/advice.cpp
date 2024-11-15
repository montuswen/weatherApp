#include "advice.h"

QString getAdvice(Weather* weather) {
    QString ans = "";

    if (weather->getTemperature() >= 30.0 || weather->getFutureOne() >= 30.0 ||
        weather->getFutureTwo() >= 30.0) {
        ans += "It's quite hot outside. Stay hydrated and wear sunscreen.\n";
    } else if (weather->getTemperature() >= 25.0 || weather->getFutureOne() >= 25.0 ||
               weather->getFutureTwo() >= 25.0) {
        ans += "It's a little hot outside. Don't wear too much.\n";
    } else if (weather->getTemperature() <= 5.0 || weather->getFutureOne() <= 5.0 ||
               weather->getFutureTwo() <= 5.0) {
        ans += "It's a little cold outside. Don't wear too little.\n";
    } else if (weather->getTemperature() <= 0.0 || weather->getFutureOne() <= 0.0 ||
               weather->getFutureTwo() <= 0.0) {
        ans += "It's very cold outside. Make sure to dress warmly.\n";
    }

    if (weather->getPrecip() >= 1.0 || weather->getDescription() == "Rain") {
        ans += "It's rainy outside. Remember to bring your umbrella.\n";
    }

    if (weather->getHumidity() > 80) {
        ans += "High humidity detected. You might feel sticky. Stay cool and hydrated.\n";
    }

    if (weather->getUltravioletRay() > 7) {
        ans += "UV levels are high. Wear sunglasses and use sunscreen if going out.\n";
    }

    if (weather->getWindKph() > 20) {
        ans += "It's windy outside. Be careful if driving or cycling.\n";
    }

    if (ans.isEmpty()) {
        ans = "The weather is mild.";
    }

    ans += " Have a nice day!";
    return ans;
}
