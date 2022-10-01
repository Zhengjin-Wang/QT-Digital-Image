#ifndef MYIMAGE_H
#define MYIMAGE_H

#include <QImage>
#include <QString>

class MyImage
{

    uchar *data;
    int w;
    int h;

public:
    MyImage();
    ~MyImage();
    MyImage(const QString& filename);
    MyImage(uchar *data, int w, int h);

    bool load(const QString &fileName);
    bool save(const QString &fileName);

    int witdh();
    int height();

    QImage toQImage();
    QImage covertColor();
    //MyImage geoTrans(int arg);
};

#endif // MYIMAGE_H
