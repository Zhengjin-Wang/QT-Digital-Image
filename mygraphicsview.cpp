#include "mygraphicsview.h"
#include <QDebug>
#include <QMessageBox>

MyGraphicsView::MyGraphicsView(QWidget *parent)
    :QGraphicsView(parent)
{

}

int MyGraphicsView::getRotCenterX()
{
    return this->rot_center_x;
}

int MyGraphicsView::getRotCenterY()
{
    return this->rot_center_y;
}

void MyGraphicsView::setChangeAble(bool flag)
{
    this->change_able = flag;
}

void MyGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if(!change_able){
        return;
    }
    QPoint viewPoint = event->pos();

    if(!this->itemAt(viewPoint)){
        qDebug() << "没有图片";
        return;
    }

    QPoint scenePoint = mapToScene(viewPoint).toPoint();
    qDebug() << scenePoint.x() << ", " << scenePoint.y();
    int x = scenePoint.x();
    int y =  scenePoint.y();
    this->rot_center_x = x;
    this->rot_center_y = y;

    QMessageBox::information(NULL, "提示", "更改旋转中心为"+QString::number(x)+", " + QString::number(y), QMessageBox::Yes, QMessageBox::Yes);

    setChangeAble(false);
    return;
}
