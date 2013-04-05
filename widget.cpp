#include "widget.hpp"

Widget::Widget(QWidget *parent): QWidget(parent){

    scene = new CustomScene;
    view = new QGraphicsView(this);
    connectButton = new QPushButton(tr("&Connect"));
    playerName = new QLineEdit;
    serverAddress = new QLineEdit;;
    textSend = new QLineEdit;;
    thing = new QLineEdit;
    chatBox = new QTextEdit;

    scene->setSceneRect(0,0,500,500);
    view->setScene(scene);

    connect(textSend,SIGNAL(returnPressed()),this,SLOT(text()));

    QHBoxLayout *serverLayout = new QHBoxLayout;
    serverLayout->addWidget(connectButton);
    serverLayout->addWidget(serverAddress);

    QVBoxLayout *paintingLayout = new QVBoxLayout;
    paintingLayout->addWidget(view);
    paintingLayout->addWidget(thing);

    QVBoxLayout *usageLayout = new QVBoxLayout;
    usageLayout->addWidget(playerName);
    usageLayout->addLayout(serverLayout);
    usageLayout->addWidget(chatBox);
    usageLayout->addWidget(textSend);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addLayout(paintingLayout, 0, 0);
    mainLayout->addLayout(usageLayout, 0, 1);

    setLayout(mainLayout);
    setWindowTitle(tr("Kalambury"));

    chatBox->setReadOnly(true);
    chatBox->setOverwriteMode(true);
    connectButton->setEnabled(true);

}

Widget::~Widget(){


    
}

void Widget::text(){


    chatBox->setText(textSend->text());
    textSend->clear();

}
