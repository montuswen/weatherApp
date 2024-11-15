QT       += core gui
QT +=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    advice.cpp \
    calendar.cpp \
    city.cpp \
    functionadvice.cpp \
    functioncity.cpp \
    homewindow.cpp \
    inputwindow.cpp \
    main.cpp \
    plug.cpp \
    setting.cpp \
    simpleweather.cpp \
    star.cpp \
    system.cpp \
    vip_service.cpp \
    weather.cpp

HEADERS += \
    advice.h \
    calendar.h \
    city.h \
    functionadvice.h \
    functioncity.h \
    homewindow.h \
    inputwindow.h \
    plug.h \
    setting.h \
    simpleweather.h \
    star.h \
    system.h \
    vip_service.h \
    weather.h

FORMS += \
    functionadvice.ui \
    functioncity.ui \
    homewindow.ui \
    inputwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
