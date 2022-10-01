#ifndef GEOTRANSDIALOG_H
#define GEOTRANSDIALOG_H

#include <QDialog>

namespace Ui {
class GeoTransDialog;
}

class GeoTransDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GeoTransDialog(bool* flag, double* rot_angle, double* scale_ratio, int rot_center_x, int rot_center_y, QWidget *parent = nullptr);
    ~GeoTransDialog();

private slots:
    void on_ok_button_pressed();

    void on_cancel_button_pressed();

private:
    Ui::GeoTransDialog *ui;
    double* rot_angle;
    double* scale_ratio;
    bool* flag;
};

#endif // GEOTRANSDIALOG_H
