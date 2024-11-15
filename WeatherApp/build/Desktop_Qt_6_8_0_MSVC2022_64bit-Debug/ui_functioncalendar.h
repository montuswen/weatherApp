/********************************************************************************
** Form generated from reading UI file 'functioncalendar.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONCALENDAR_H
#define UI_FUNCTIONCALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionCalendar
{
public:

    void setupUi(QWidget *FunctionCalendar)
    {
        if (FunctionCalendar->objectName().isEmpty())
            FunctionCalendar->setObjectName("FunctionCalendar");
        FunctionCalendar->resize(400, 300);

        retranslateUi(FunctionCalendar);

        QMetaObject::connectSlotsByName(FunctionCalendar);
    } // setupUi

    void retranslateUi(QWidget *FunctionCalendar)
    {
        FunctionCalendar->setWindowTitle(QCoreApplication::translate("FunctionCalendar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionCalendar: public Ui_FunctionCalendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONCALENDAR_H
