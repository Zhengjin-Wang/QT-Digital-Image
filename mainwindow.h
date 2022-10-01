#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myimage.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_pressed();

    void on_geo_trans_triggered();

    void on_pushButton_2_pressed();

private:
    Ui::MainWindow *ui;
    MyImage* image; //原始图像
};
#endif // MAINWINDOW_H
