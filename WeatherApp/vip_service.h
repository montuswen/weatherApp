#ifndef VIP_SERVICE_H
#define VIP_SERVICE_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QEventLoop>

class VIP_service:public QObject
{
    Q_OBJECT
public:
    explicit VIP_service(QObject *parent = nullptr)
        : QObject(parent) {
        this->vip_service=false;
        this->money_per_month=6;
    }
    void buy_vip();
    void print_vip_info();
private:
    bool vip_service;
    int money_per_month;
};

#endif // VIP_SERVICE_H
