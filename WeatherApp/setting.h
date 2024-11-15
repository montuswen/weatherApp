#ifndef SETTING_H
#define SETTING_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QEventLoop>

extern int default_font_size;
extern QString default_font_color;
extern QString default_font_design;
extern QString default_theme;

class Setting:public QObject
{
    Q_OBJECT
public:
    explicit Setting(QObject *parent = nullptr)
        : QObject(parent) {
        this->resetSetting();
    }
    void resetSetting();
    void updateSetting(int font_size=default_font_size,QString font_color=default_font_color,QString font_design=default_font_design,QString theme=default_theme);
    int getFontsize(){return this->font_size;}
    QString getFontdesign(){return this->font_design;}
    QString getFontcolor(){return this->font_color;}
    QString getTheme(){return this->theme;}
private:
    int font_size;
    QString font_color;
    QString font_design;
    QString theme;
};

#endif // SETTING_H
