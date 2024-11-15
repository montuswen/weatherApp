#ifndef FUNCTIONCITY_H
#define FUNCTIONCITY_H

#include <QWidget>
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
#include <QLineEdit>

#include <setting.h>
#include <system.h>
#include <city.h>
#include <homewindow.h>
#include <weather.h>
#include <inputwindow.h>

class homeWindow;
class CityWeatherItem;

namespace Ui {
class FunctionCity;
}

class FunctionCity : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionCity(Setting &setting,System &sys,QWidget *parent = nullptr);
    ~FunctionCity();
    friend class homeWindow;

public slots:
    void updateShow(System &sys);
    void addcityclicked(Setting &setting,System &sys);

private:
    Ui::FunctionCity *ui;

    QPixmap* background;
    QPalette* palette;
    QColor* color;

    QFont* buttonfont;
    QPalette* buttonpalette;
    QPushButton* backbutton;
    QPushButton* addcity;

    int num;
    int max_num;
    QVector<CityWeatherItem*> itemlist;

    QFont* labelfont;
    QPalette* labelpalette;
    QVector<QLabel*> weather_list;
    QVector<QLabel*> icon_list;
};

#endif // FUNCTIONCITY_H
