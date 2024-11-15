#include "homewindow.h"
#include "weather.h"
#include "star.h"
#include "system.h"
#include "setting.h"

#include <QApplication>
#include <QDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Setting setting;
    System sys;
    homeWindow window(setting,sys);
    window.show();

    return app.exec();
}
