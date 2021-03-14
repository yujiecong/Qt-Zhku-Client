#ifndef SUBMENUWIDGET_H
#define SUBMENUWIDGET_H

#include <QWidget>
#include "submenubtn.h"
namespace Ui {
class SubMenuWidget;
}

class SubMenuBtn;
class SubMenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SubMenuWidget(QWidget *parent = 0);
    ~SubMenuWidget();
    Ui::SubMenuWidget *ui;
    QVector<SubMenuBtn*> v;
public slots:
    void changeSubBg(int pos);

private:
        int curPos=-1;
private slots:


};

#endif // SUBMENUWIDGET_H
