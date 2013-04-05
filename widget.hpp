#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "customscene.hpp"

class QPushButton;
class QLineEdit;
class QTextEdit;

class Widget : public QWidget{

    Q_OBJECT
    
public:

    Widget(QWidget *parent = 0);
    ~Widget();

public slots:

    void text();

private:

    QGraphicsView *view;
    QGraphicsScene *scene;
    QLineEdit *playerName;
    QLineEdit *serverAddress;
    QLineEdit *textSend;
    QLineEdit *thing;
    QPushButton *connectButton;
    QTextEdit *chatBox;
};

#endif // WIDGET_H
