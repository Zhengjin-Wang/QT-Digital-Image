#include "geotransdialog.h"
#include "ui_geotransdialog.h"


GeoTransDialog::GeoTransDialog(bool* flag, double* rot_angle, double* scale_ratio, int rot_center_x, int rot_center_y,  QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeoTransDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("基本几何变换");
    this->flag = flag;
    this->rot_angle = rot_angle;
    this->scale_ratio = scale_ratio;
    this->ui->rot_center_label->setText("旋转中心为("+ QString::number(rot_center_x) + ", " + QString::number(rot_center_y) +  ")");
}

GeoTransDialog::~GeoTransDialog()
{
    delete ui;
}

void GeoTransDialog::on_ok_button_pressed()
{
    *flag = true;
    *rot_angle = ui->rot_spin_box->value();
    *scale_ratio = ui->scale_spin_box->value();
    this->close();
}

void GeoTransDialog::on_cancel_button_pressed()
{
    *flag = false;
    this->close();
}
