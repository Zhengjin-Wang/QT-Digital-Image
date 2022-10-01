#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myimage.h"

#include <QMouseEvent>
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

protected:
    void mousePressEvent(QMouseEvent* event);

private slots:

    void on_basic_geo_trans_triggered();

    void on_reloc_rotation_center_triggered();

    void on_save_file_btn_pressed();

    void on_read_file_btn_pressed();

private:

    Ui::MainWindow *ui;
    MyImage* image; //原始图像
};
#endif // MAINWINDOW_H
