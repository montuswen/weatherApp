#ifndef ADVICE_H
#define ADVICE_H

#include <QString>
#include <QDebug>
#include <weather.h>

class Weather;

QString getAdvice(Weather*weather);

#endif // ADVICE_H
