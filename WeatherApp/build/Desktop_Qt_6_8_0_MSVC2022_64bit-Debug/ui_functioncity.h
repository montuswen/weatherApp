/********************************************************************************
** Form generated from reading UI file 'functioncity.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONCITY_H
#define UI_FUNCTIONCITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionCity
{
public:

    void setupUi(QWidget *FunctionCity)
    {
        if (FunctionCity->objectName().isEmpty())
            FunctionCity->setObjectName("FunctionCity");
        FunctionCity->resize(400, 300);

        retranslateUi(FunctionCity);

        QMetaObject::connectSlotsByName(FunctionCity);
    } // setupUi

    void retranslateUi(QWidget *FunctionCity)
    {
        FunctionCity->setWindowTitle(QCoreApplication::translate("FunctionCity", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionCity: public Ui_FunctionCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONCITY_H
