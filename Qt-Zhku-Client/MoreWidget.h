#ifndef MOREWIDGET_H
#define MOREWIDGET_H

#include <QWidget>

namespace Ui {
class MoreWidget;
}

class MoreWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MoreWidget(QWidget *parent = 0);
    ~MoreWidget();

private:
    Ui::MoreWidget *ui;
};

#endif // MOREWIDGET_H
