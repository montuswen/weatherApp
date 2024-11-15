#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

class InputDialog : public QDialog {
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = nullptr);
    QString getInputText() const;

private slots:
    void onConfirmClicked();
    void onCancelClicked();

private:
    QLineEdit *inputField;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QString inputText;
};

#endif // INPUTDIALOG_H
