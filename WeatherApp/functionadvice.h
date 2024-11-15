#ifndef FUNCTIONADVICE_H
#define FUNCTIONADVICE_H

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

#include <homewindow.h>

QString getAdvice(Weather*weather);
class homeWindow;

namespace Ui {
class FunctionAdvice;
}

class FunctionAdvice : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionAdvice(Setting &setting,System &sys,Weather*weather,QWidget *parent = nullptr);
    ~FunctionAdvice();

    friend class homeWindow;

private:
    Ui::FunctionAdvice *ui;

    QPixmap* background;
    QPalette* palette;
    QColor* color;

    QFont* buttonfont;
    QPalette* buttonpalette;
    QPushButton* backbutton;

    QFont* labelfont;
    QPalette* labelpalette;
    QLabel* labeladvice;
    QString advice;
};

#endif // FUNCTIONADVICE_H
