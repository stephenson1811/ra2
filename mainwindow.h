#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFrame>
#include "src/gui/EventListView.h"
#include "src/gui/GameScene.h"
#include "src/gui/GiantMapView.h"
#include "src/gui/MiniMapView.h"
#include "src/gui/UnitTreeView.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(GameScene&,QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    GameScene* m_GameScene;
    EventListView* m_EventListView;
    GiantMapView* m_GiantMapView;
    MiniMapView* m_MiniMapView;
    UnitTreeView* m_UnitTreeView;
};

#endif // MAINWINDOW_H
