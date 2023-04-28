#ifndef USERCRAFT_H
#define USERCRAFT_H

#include <QObject>
#include <QWidget>
#include <QFrame>
class userCraft:public::QWidget
{
public:
    userCraft();
   void CraftShow();
private:
   QFrame *myFrame;
};

#endif // USERCRAFT_H
