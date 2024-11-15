#ifndef PLUG_H
#define PLUG_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QEventLoop>

extern QString default_plug_theme;

class Plug:public QObject
{
    Q_OBJECT
public:
    explicit Plug(QObject *parent = nullptr)
        : QObject(parent) {
            this->reset();
    }
    void reset();
    void setPlug();
private:
    bool is_plug;
    QString theme;
};

#endif // PLUG_H
