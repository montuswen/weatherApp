/********************************************************************************
** Form generated from reading UI file 'inputwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWINDOW_H
#define UI_INPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inputwindow
{
public:

    void setupUi(QWidget *Inputwindow)
    {
        if (Inputwindow->objectName().isEmpty())
            Inputwindow->setObjectName("Inputwindow");
        Inputwindow->resize(400, 300);

        retranslateUi(Inputwindow);

        QMetaObject::connectSlotsByName(Inputwindow);
    } // setupUi

    void retranslateUi(QWidget *Inputwindow)
    {
        Inputwindow->setWindowTitle(QCoreApplication::translate("Inputwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inputwindow: public Ui_Inputwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWINDOW_H
