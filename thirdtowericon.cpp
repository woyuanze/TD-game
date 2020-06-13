#include "thirdtowericon.h"
#include "game.h"
#include "thirdtower.h"

extern Game *game;

BuildThirdTowerIcon::BuildThirdTowerIcon(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/resourses/pic/thirdtower.png"));

}

void BuildThirdTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    count = 0;
    if(!game->build){
        game->build =  new ThirdTower();
        game->setCursor(QString(":/resourses/pic/thirdtower.png"));
        count++;
    }
}
