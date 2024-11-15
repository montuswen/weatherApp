#include "homewindow.h"
#include "ui_homewindow.h"

homeWindow::homeWindow(Setting &setting,System &sys,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homeWindow)
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

    calendar=new QPushButton("WeatherCalendar",this);
    calendar->setFont(*buttonfont);
    calendar->setPalette(*buttonpalette);
    calendar->resize(200,60);
    calendar->move(100,100);
    city=new QPushButton("WeatherCity",this);
    city->setFont(*buttonfont);
    city->setPalette(*buttonpalette);
    city->resize(200,60);
    city->move(100,180);
    advice=new QPushButton("Advice",this);
    advice->setFont(*buttonfont);
    advice->setPalette(*buttonpalette);
    advice->resize(200,60);
    advice->move(100,260);
    starinfo=new QPushButton("Starinfo",this);
    starinfo->setFont(*buttonfont);
    starinfo->setPalette(*buttonpalette);
    starinfo->resize(200,60);
    starinfo->move(100,340);
    plugservice=new QPushButton("Plugservice",this);
    plugservice->setFont(*buttonfont);
    plugservice->setPalette(*buttonpalette);
    plugservice->resize(200,60);
    plugservice->move(100,420);
    vipservice=new QPushButton("Vipservice",this);
    vipservice->setFont(*buttonfont);
    vipservice->setPalette(*buttonpalette);
    vipservice->resize(200,60);
    vipservice->move(100,500);
    systemsettings=new QPushButton("Systemsettings",this);
    systemsettings->setFont(*buttonfont);
    systemsettings->setPalette(*buttonpalette);
    systemsettings->resize(200,60);
    systemsettings->move(100,580);

    weather=new Weather();
    icon=new QLabel(this);
    icon->resize(200,200);
    icon->move(600,50);

    today=new QLabel(this);
    today->setFont(*labelfont);
    today->setPalette(*labelpalette);
    today->setAlignment(Qt::AlignCenter|Qt::AlignTop);
    today->resize(400,400);
    today->move(500,200);

    this->functionadvice=NULL;
    this->functioncity=NULL;

    connect(this->advice, &QPushButton::clicked, this, [this, &setting, &sys]() {
        this->clickFunctionAdvice(setting, sys, this->weather);
    });
    connect(this->city, &QPushButton::clicked, this, [this, &setting, &sys]() {
        this->clickFunctionCity(setting, sys);
    });
    this->setHomepage(setting,sys);
}

homeWindow::~homeWindow()
{
    delete ui;
}

void homeWindow::setHomepage(Setting &setting,System &sys)
{
    sys.resetTime();

    weather->get_all(sys);
    QPixmap image=weather->getimage()->scaled(200,200);
    icon->setPixmap(image);

    today->setText(sys.getTime().toString("yyyy-MM-dd hh:mm")+"\n"
                          +sys.getCity()+" "+QString::number(weather->getLow())+"~"+QString::number(weather->getHigh())+"\n"
                          +weather->getDescription()+" "+QString::number(weather->getTemperature())+"\n"
                          +"Future onehour "+QString::number(weather->getFutureOne())+" "+weather->getFutureOnedes()+"\n"
                          +"Future twohour "+QString::number(weather->getFutureTwo())+" "+weather->getFutureTwodes()+"\n"
                          +"Feelslike temperature "+QString::number(weather->getFeelslike())+"\n"
                          +"Humidity "+QString::number(weather->getHumidity())+"\n"
                          +"Airpressure "+QString::number(weather->getAirPressure())+"\n"
                          +"WindKph "+QString::number(weather->getWindKph())+"\n"
                          +"Wind direction "+QString::number(weather->getWindDirection())+"\n"
                          +"UltravioletRay "+QString::number(weather->getUltravioletRay())+"\n"
                          +"Precip(mm) "+QString::number(weather->getPrecip())+"\n"
                          +"Cloud "+QString::number(weather->getCloud()));

    sys.resetTime();
    QTimer::singleShot((60 - sys.getTime().time().second()) * 1000, [&]() {
        this->setHomepage(setting, sys);
    });

}

void homeWindow::clickFunctionAdvice(Setting &setting,System &sys,Weather* weather)
{
    this->hide();
    functionadvice=new FunctionAdvice(setting,sys,weather);
    connect(functionadvice->backbutton,&QPushButton::clicked,this,&homeWindow::backfromFunctionAdvice);
    functionadvice->show();
}

void homeWindow::clickFunctionCity(Setting &setting,System &sys)
{
    this->hide();
    if(functioncity==NULL){
        functioncity=new FunctionCity(setting,sys);
        connect(functioncity->backbutton,&QPushButton::clicked,this,&homeWindow::backfromFunctionCity);
    }
    functioncity->show();
}

void homeWindow::backfromFunctionAdvice()
{
    functionadvice->hide();
    delete functionadvice;
    this->show();
}

void homeWindow::backfromFunctionCity()
{
    functioncity->hide();
    this->show();
}
