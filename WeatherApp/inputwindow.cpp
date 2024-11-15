#include <inputwindow.h>
#include <QHBoxLayout>
#include <QVBoxLayout>

InputDialog::InputDialog(QWidget *parent) : QDialog(parent), inputText("") {
    inputField = new QLineEdit(this);
    confirmButton = new QPushButton("confirm", this);
    cancelButton = new QPushButton("cancel", this);

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(confirmButton);
    buttonLayout->addWidget(cancelButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(inputField);
    mainLayout->addLayout(buttonLayout);

    mainLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    setLayout(mainLayout);

    setWindowTitle("Please enter city name");

    this->resize(400,300);

    connect(confirmButton, &QPushButton::clicked, this, &InputDialog::onConfirmClicked);
    connect(cancelButton, &QPushButton::clicked, this, &InputDialog::onCancelClicked);
}

QString InputDialog::getInputText() const {
    return inputText;
}

void InputDialog::onConfirmClicked() {
    inputText = inputField->text();
    accept();
}

void InputDialog::onCancelClicked() {
    reject();
}
