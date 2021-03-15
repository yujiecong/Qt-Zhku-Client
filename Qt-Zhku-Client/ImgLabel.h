#ifndef IMGLABEL_H
#define IMGLABEL_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QMenu>
class ImgLabel : public QLabel
{

public:
    ImgLabel(QWidget *parent=nullptr);
    ~ImgLabel();
    QMenu *menu;
protected:
    void mousePressEvent(QMouseEvent *ev);
public slots:
    void saveImg(QString);
};

#endif // IMGLABEL_H
