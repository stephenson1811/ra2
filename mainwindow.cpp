#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplitter>
#include <QWidget>
#include <QFrame>
#include <QHBoxLayout>
MainWindow::MainWindow(GameScene& ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_GameScene;
    QHBoxLayout* hl = new QHBoxLayout(this);
    QSplitter* h = new QSplitter();
    QSplitter* v = new QSplitter();
    //QFrame*w1 = ;
    QFrame*w2 = new MiniMapView(m_GameScene,this);
    QFrame*w3 = new UnitTreeView(this);
    QFrame*w = new GiantMapView(m_GameScene,this);
    v->addWidget(new EventListView(this));
    v->addWidget(w2);
    v->addWidget(w3);
    h->addWidget(w);
    h->addWidget(v);
    hl->addWidget(v);
    setLayout(hl);
}

MainWindow::~MainWindow()
{
    delete ui;
}
