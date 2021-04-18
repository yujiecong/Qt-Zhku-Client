#ifndef WIDGETWITHHTML_H
#define WIDGETWITHHTML_H

#include "ImgLabel.h"

#include <QWidget>

class WidgetWithHtml : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetWithHtml(QWidget *parent = nullptr);
    virtual void setHtml(QString html)=0;
    virtual void insertImg(ImgLabel *l);
signals:

};

#endif // WIDGETWITHHTML_H
