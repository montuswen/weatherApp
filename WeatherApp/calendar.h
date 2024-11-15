#ifndef CALENDAR_H
#define CALENDAR_H

#include <QObject>

class CalendarWeatherItem : public QObject {
    Q_OBJECT

 public:
    explicit CalendarWeatherItem(QObject *parent = nullptr)
        : QObject(parent) {
    }

 private:
};


#endif // CALENDAR_H
