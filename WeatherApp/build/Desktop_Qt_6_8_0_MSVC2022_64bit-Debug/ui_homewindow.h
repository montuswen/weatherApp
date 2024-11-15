/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homeWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *homeWindow)
    {
        if (homeWindow->objectName().isEmpty())
            homeWindow->setObjectName("homeWindow");
        homeWindow->resize(800, 600);
        centralwidget = new QWidget(homeWindow);
        centralwidget->setObjectName("centralwidget");
        homeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(homeWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        homeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(homeWindow);
        statusbar->setObjectName("statusbar");
        homeWindow->setStatusBar(statusbar);

        retranslateUi(homeWindow);

        QMetaObject::connectSlotsByName(homeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *homeWindow)
    {
        homeWindow->setWindowTitle(QCoreApplication::translate("homeWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homeWindow: public Ui_homeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
