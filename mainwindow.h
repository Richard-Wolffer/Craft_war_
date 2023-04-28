#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QObject>
#include<QPushButton>
#include<QWidget>
#include<QFrame>
#include<QPoint>
#include<QMouseEvent>
#include<QRect>
#include<QLayout>
#include<QCursor>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mouseMoveEvent(QMouseEvent *event);
    void ButtonsetCenter();
    void CraftfollowCursor();
    void setMystyleSheet();
    void Anemyflying();
public slots:
    void GameStart();
signals:
    void MouseMove(QMouseEvent *event);
private:
    Ui::MainWindow *ui;
    QPushButton *btn;
    QFrame *myFrame;
    QLayout *myLayout;
    QTimer *myTime;
    QFrame *enemyframe;
};
#endif // MAINWINDOW_H
