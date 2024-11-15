#include "functionadvice.h"
#include "ui_functionadvice.h"

FunctionAdvice::FunctionAdvice(Setting &setting,System &sys,Weather*weather,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionAdvice)
{
    ui->setupUi(this);

    this->resize(1200,800);

    this->background=new QPixmap(":/back/image/backup.png");
    this->palette=new QPalette();
    this->palette->setBrush(QPalette::Window, *background);
    this->setPalette(*palette);
    this->color=new QColor(setting.getFontcolor());

    this->buttonfont=new QFont(setting.getFontdesign(),setting.getFontsize());
    this->buttonpalette=new QPalette();
    this->buttonpalette->setColor(QPalette::ButtonText,*color);

    this->labelfont=new QFont(setting.getFontdesign(),setting.getFontsize()+2);
    this->labelpalette=new QPalette();
    this->labelpalette->setColor(QPalette::ButtonText,*color);

    this->backbutton=new QPushButton("Back",this);
    this->backbutton->setFont(*buttonfont);
    this->backbutton->setPalette(*buttonpalette);
    this->backbutton->resize(200,50);
    this->backbutton->move(0,700);

    this->labeladvice=new QLabel(this);
    this->labeladvice->setFont(*labelfont);
    this->labeladvice->setPalette(*labelpalette);
    this->labeladvice->resize(800,400);
    this->labeladvice->move(200,200);
    this->labeladvice->setAlignment(Qt::AlignCenter|Qt::AlignTop);
    this->advice=getAdvice(weather);
    this->labeladvice->setText(this->advice);
}

FunctionAdvice::~FunctionAdvice()
{
    delete ui;
}
