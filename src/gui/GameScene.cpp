#include "GameScene.h"

GameScene::GameScene(Game&,QObject *parent ):QGraphicsScene(parent){}
GameScene::GameScene(const QRectF &sceneRect, QObject *parent):QGraphicsScene(sceneRect,parent){}
GameScene::GameScene(qreal x, qreal y, qreal width, qreal height, QObject *parent):QGraphicsScene(x,y,width,height,parent){}
