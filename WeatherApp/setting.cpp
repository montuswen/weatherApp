#include "setting.h"

int default_font_size=12;
QString default_font_color="black";
QString default_font_design="Microsoft YaHei";
QString default_theme="blue";

void Setting::resetSetting()
{
    this->font_color=default_font_color;
    this->font_size=default_font_size;
    this->font_design=default_font_design;
    this->theme=default_theme;
}

void Setting::updateSetting(int font_size,QString font_color,QString font_design,QString theme)
{
    this->font_size=font_size;
    this->font_color=font_color;
    this->font_design=font_design;
    this->theme=theme;
}
