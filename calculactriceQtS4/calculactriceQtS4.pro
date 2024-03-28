QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp

HEADERS += \
    headers/mainwindow.h \
    headers/muparser/include/muParser.h


FORMS += \
    ui/mainwindow.ui

TRANSLATIONS += \
    calculactriceQtS4_fr_FR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/resources.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/headers/muparser/release/ -lmuparser
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/headers/muparser/debug/ -lmuparser
else:unix:!macx: LIBS += -L$$PWD/headers/muparser/ -lmuparser

INCLUDEPATH += $$PWD/headers/muparser
DEPENDPATH += $$PWD/headers/muparser
