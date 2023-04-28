#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QDebug>
#include<QBitmap>
#include<QTimerEvent>
#include<QTimer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mycraft->setParent(this);
    this->maximumSize();

    btn=ui->pushButton;
    btn->setParent(this);
    btn->resize(290,170);

    MainWindow::setMystyleSheet();

    MainWindow::ButtonsetCenter();

    connect(btn,&QPushButton::clicked,this,&MainWindow::GameStart);//游戏开始，界面开始按钮消失

    this->setMouseTracking(true);
    ui->centralwidget->setMouseTracking(true);
    MainWindow::CraftfollowCursor();

    MainWindow::Anemyflying();
}

MainWindow::~MainWindow()

{
    delete ui;
}
void MainWindow::GameStart()
{
    delete btn;
    myFrame->setGeometry(0,670,102,126);
    myFrame->setStyleSheet("background:url(:/elements_war_aircraft/images/me2.png)");
    this->setCursor(Qt::BlankCursor);
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    int x=event->x();
    int y=event->y();
    myFrame->move(x,y);
}
void MainWindow::MouseMove(QMouseEvent *event)
{
}
void MainWindow::ButtonsetCenter()
{
    ui->horizontalLayout->setParent(this);
    myLayout=ui->horizontalLayout;
    myLayout->addWidget(btn);
    myLayout->setAlignment(this,Qt::AlignHCenter);
}
void MainWindow::CraftfollowCursor()
{
    myFrame=ui->mycraft;
    connect(this,&MainWindow::MouseMove,this,&MainWindow::mouseMoveEvent);
}
void MainWindow::setMystyleSheet()
{
    //this->setStyleSheet("background-image: url(:/elements_war_aircraft/images/background.png);");
    btn->setStyleSheet("QPushButton:hover{color:red};");

}
void MainWindow::Anemyflying()
{
    for(int i=1;i<=5;i++)
    {
        enemyframe=new QFrame;
        enemyframe->setParent(this);
        enemyframe->setGeometry(100,100,200,200);
        enemyframe->setStyleSheet(("background:url(:/elements_war_aircraft/images/enemy1.png"));
    }
}
