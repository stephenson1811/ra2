#pragma once
#include <QGraphicsScene>
#include "src/core/game.h"
class GameScene : public QGraphicsScene{
    Q_OBJECT
public:
    GameScene(Game&,QObject *parent = 0);
    GameScene(const QRectF &sceneRect, QObject *parent = 0);
    GameScene(qreal x, qreal y, qreal width, qreal height, QObject *parent = 0);
};
