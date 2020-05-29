#include "firsttowericon.h"
#include "game.h"
#include "firsttower.h"

extern Game *game;

BuildFirstTowerIcon::BuildFirstTowerIcon(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/resourses/pic/tower.png"));

}

void BuildFirstTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    count - 0;
    if(!game->build){
        game->build =  new FirstTower();
        game->setCursor(QString(":/resourses/pic/tower.png"));
    }
    count++;
}
