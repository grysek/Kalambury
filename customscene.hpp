#ifndef CUSTOMSCENE_H
#define CUSTOMSCENE_H

#include <QGraphicsScene>
#include <QtGui>

class CustomScene : public QGraphicsScene{

private:

    QPointF p1,p2;
    QLineF line;

protected:

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif // CUSTOMSCENE_H
