#pragma once
#include <QGraphicsView>


class MiniMapView : public QGraphicsView{
    Q_OBJECT
public:
    MiniMapView(QWidget *parent = 0);
    MiniMapView(QGraphicsScene *scene, QWidget *parent = 0);
};
