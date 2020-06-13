#include "secondtowericon.h"
#include "game.h"
#include "secondtower.h"

extern Game *game;

BuildSecondTowerIcon::BuildSecondTowerIcon(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/resourses/pic/secondtower.png"));

}

void BuildSecondTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    count = 0;
    if(!game->build){
        game->build =  new SecondTower();
        game->setCursor(QString(":/resourses/pic/secondtower.png"));
        count++;

    }
}
