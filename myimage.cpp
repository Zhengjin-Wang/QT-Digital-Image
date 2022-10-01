#include "myimage.h"
#include<QDebug>

MyImage::MyImage()
{

}

MyImage::~MyImage()
{
    delete [] data;
}

MyImage::MyImage(const QString &filename)
{

}


MyImage::MyImage(uchar *data, int w, int h)
{
    this->data = new uchar[w * h];
    memmove(this->data, data, w * h);
}

bool MyImage::load(const QString &fileName)
{
    return false;
}

bool MyImage::save(const QString &fileName)
{
    return false;
}

int MyImage::witdh()
{
    return w;
}

int MyImage::height()
{
    return h;
}

QImage MyImage::toQImage()
{

}

QImage MyImage::covertColor()
{
    uchar* tmp_data = new uchar[w*h];
    memmove(tmp_data, this->data, w * h);
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            tmp_data[i*w + j] = 255 - tmp_data[i*w + j];
        }
    }
    QImage img = QImage(tmp_data, w, h, QImage::Format_Indexed8);
    qDebug() << img;
    //delete [] tmp_data;
    return img;
}


