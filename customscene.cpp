#include "customscene.hpp"

void CustomScene::mousePressEvent(QGraphicsSceneMouseEvent *event){

    if(event->button() == Qt::LeftButton){

        p1 = event->scenePos();
    }
}

void CustomScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event){

    p2 = event->scenePos();
    line.setPoints(p1,p2);
    addLine(line);
    p1 = p2;
}
