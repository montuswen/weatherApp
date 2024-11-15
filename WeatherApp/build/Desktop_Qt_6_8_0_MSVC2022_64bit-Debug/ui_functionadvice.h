/********************************************************************************
** Form generated from reading UI file 'functionadvice.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONADVICE_H
#define UI_FUNCTIONADVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionAdvice
{
public:

    void setupUi(QWidget *FunctionAdvice)
    {
        if (FunctionAdvice->objectName().isEmpty())
            FunctionAdvice->setObjectName("FunctionAdvice");
        FunctionAdvice->resize(400, 300);

        retranslateUi(FunctionAdvice);

        QMetaObject::connectSlotsByName(FunctionAdvice);
    } // setupUi

    void retranslateUi(QWidget *FunctionAdvice)
    {
        FunctionAdvice->setWindowTitle(QCoreApplication::translate("FunctionAdvice", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionAdvice: public Ui_FunctionAdvice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONADVICE_H
