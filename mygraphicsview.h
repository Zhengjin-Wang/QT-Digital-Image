#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include<QGraphicsView>
#include<QMouseEvent>

class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    MyGraphicsView(QWidget *parent = nullptr);
    int getRotCenterX();
    int getRotCenterY();
    void setChangeAble(bool flag);

protected:
    void mousePressEvent(QMouseEvent* event);

private:
    int rot_center_x = 0;
    int rot_center_y = 0;
    bool change_able;

};

#endif // MYGRAPHICSVIEW_H
