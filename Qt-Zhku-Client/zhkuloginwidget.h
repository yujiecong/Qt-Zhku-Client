#ifndef ZHKULOGINWIDGET_H
#define ZHKULOGINWIDGET_H

#include <QWidget>

namespace Ui {
class ZhkuLoginWidget;
}

class ZhkuLoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ZhkuLoginWidget(QWidget *parent = 0);
    ~ZhkuLoginWidget();

private:
    Ui::ZhkuLoginWidget *ui;
};

#endif // ZHKULOGINWIDGET_H
