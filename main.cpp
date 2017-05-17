#include "mainwindow.h"
#include <QApplication>
#include "src/core/game.h"
#include "src/gui/GameScene.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game game;
    GameScene gameScene(game);
    MainWindow w(gameScene);
    w.show();

    return a.exec();
}
