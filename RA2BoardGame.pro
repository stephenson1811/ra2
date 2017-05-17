#-------------------------------------------------
#
# Project created by QtCreator 2017-05-10T01:38:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RA2BoardGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    src/gui/EventListView.cpp \
    src/gui/GiantMapView.cpp \
    src/gui/MiniMapView.cpp \
    src/gui/UnitTreeView.cpp \
    src/gui/GameScene.cpp \
    src/core/dbitf.cpp \
    src/core/json.cpp \
    src/path/asteriska.cpp \
    src/core/game.cpp

HEADERS  += mainwindow.h \
    src/gui/EventListView.h \
    src/gui/GiantMapView.h \
    src/gui/MiniMapView.h \
    src/gui/UnitTreeView.h \
    src/gui/GameScene.h \
    src/core/dbitf.h \
    src/core/json.h \
    src/path/asteriska.h \
    src/core/game.h

FORMS    += mainwindow.ui

RESOURCES += \
    ra2.qrc
