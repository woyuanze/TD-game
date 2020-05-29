#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMouseEvent>
#include "tower.h"
#include "health.h"
#include <QTimer>
#include <firsttowericon.h>

class Game: public QGraphicsView{
    Q_OBJECT
public:
    //member functions
    Game();
    void setCursor(QString filename);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void createEnemies(int numberofEnemies);
    void createRoad();


    //member attributes
    QGraphicsScene *scene;
    QGraphicsPixmapItem *cursor;
    Tower* build;
    QTimer* spawnTimer;
    Health *health;
    BuildFirstTowerIcon *ft;
    int enemySpawned;
    int maxNumberOfEnemies;
    QList<QPointF> pointsToFollow;
    QList<QPointF> pointsToFollow2;
public slots:
    void spawnEnemy();
};

#endif // GAME_H
