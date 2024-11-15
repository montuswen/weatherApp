#include "functioncity.h"
#include "ui_functioncity.h"

FunctionCity::FunctionCity(Setting &setting,System &sys,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionCity)
{
    ui->setupUi(this);

    this->resize(1200,800);
    this->num=0;
    this->max_num=5;

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

    this->addcity=new QPushButton("Add city",this);
    this->addcity->setFont(*buttonfont);
    this->addcity->setPalette(*buttonpalette);
    this->addcity->resize(200,50);
    this->addcity->move(900,50);

    connect(this->addcity, &QPushButton::clicked, this, [this, &setting, &sys]() {
        this->addcityclicked(setting, sys);
    });
}

FunctionCity::~FunctionCity()
{
    delete ui;
}
void FunctionCity::addcityclicked(Setting &setting,System &sys)
{
    InputDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString newcity = dialog.getInputText();
        for(int i=0;i<this->num;i++){
            if(itemlist[i]->getCity()==newcity){
                this->updateShow(sys);
                return;
            }
        }
        CityWeatherItem* newcityweather=new CityWeatherItem(sys,newcity);
        QLabel* weather_label=new QLabel(this);
        weather_label->setFont(*labelfont);
        weather_label->setPalette(*labelpalette);
        weather_label->setAlignment(Qt::AlignCenter|Qt::AlignTop);
        weather_label->resize(150,200);
        QLabel* icon_label=new QLabel(this);
        if (this->num>=this->max_num){
            delete this->itemlist[this->num-1];
            this->itemlist.pop_back();
            delete this->weather_list[this->num-1];
            this->weather_list.pop_back();
            delete this->icon_list[this->num-1];
            this->icon_list.pop_back();
            this->num--;
        }
        this->itemlist.prepend(newcityweather);
        this->weather_list.prepend(weather_label);
        this->icon_list.prepend(icon_label);
        this->num++;
    }
    this->updateShow(sys);
}

void FunctionCity::updateShow(System &sys)
{
    qDebug()<<"here3";
    qDebug()<<this->num;
    for(int i=0;i<this->num;i++){
        this->itemlist[i]->weather->get_all(sys.getAPIKEY());
    }
    qDebug()<<"here4";
    for(int i=0;i<this->num;i++){
        icon_list[i]->hide();
        weather_list[i]->hide();
    }
    for(int i=0;i<this->num;i++){
        QPixmap image=itemlist[i]->weather->getimage()->scaled(200,200);
        icon_list[i]->setPixmap(image);
        icon_list[i]->resize(150,150);
        icon_list[i]->move(150+160*i,250);

        weather_list[i]->move(150+160*i,350);
        weather_list[i]->setText(itemlist[i]->weather->getcity()+"\n"
                                 +itemlist[i]->weather->getdescription()+" "+QString::number(itemlist[i]->weather->gettemperature())+"C\n"
                                 +QString::number(itemlist[i]->weather->gettemperature_low())+"C~"+QString::number(itemlist[i]->weather->gettemperature_high())+"C\n"
                                 );
    }
    for(int i=0;i<this->num;i++){
        icon_list[i]->show();
        weather_list[i]->show();
    }
    qDebug()<<"here5";
}
