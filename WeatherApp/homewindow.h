#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QPalette>
#include <QPixmap>
#include <QFont>
#include <QColor>
#include <QTimer>
#include <QtMath>

#include <setting.h>
#include <system.h>
#include <weather.h>
#include <advice.h>
#include <functionadvice.h>
#include <functioncity.h>

class Setting;
class System;
class Weather;
QString getAdvice(Weather*weather);
class FunctionCalendar;
class FunctionAdvice;
class FunctionCity;

namespace Ui {
class homeWindow;
}

class homeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit homeWindow(Setting &setting,System &sys,QWidget *parent = nullptr);
    ~homeWindow();

    void setHomepage(Setting &setting,System &sys);

public slots:
    void clickFunctionAdvice(Setting &setting,System &sys,Weather* weather);
    void clickFunctionCity(Setting &setting,System &sys);
    void backfromFunctionAdvice();
    void backfromFunctionCity();

private:
    Ui::homeWindow *ui;

    QNetworkAccessManager* manager;

    QPixmap* background;
    QPalette* palette;
    QColor* color;

    QFont* buttonfont;
    QPalette* buttonpalette;
    QPushButton* calendar;
    QPushButton* city;
    QPushButton* advice;
    QPushButton* starinfo;
    QPushButton* plugservice;
    QPushButton* vipservice;
    QPushButton* systemsettings;

    Weather* weather;
    QLabel *icon;

    QFont* labelfont;
    QPalette* labelpalette;
    QLabel* today;

    FunctionAdvice* functionadvice;
    FunctionCity* functioncity;
};

#endif // HOMEWINDOW_H
