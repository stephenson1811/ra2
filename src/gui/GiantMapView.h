#pragma once
#include <QGraphicsView>

class GiantMapView : public QGraphicsView{
    Q_OBJECT
public:
    GiantMapView(QWidget *parent = 0);
    GiantMapView(QGraphicsScene *scene, QWidget *parent = 0);
};

