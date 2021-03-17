#ifndef USERAVATER_H
#define USERAVATER_H

#include <QWidget>

namespace Ui {
class UserAvater;
}

class UserAvater : public QWidget
{
    Q_OBJECT

public:
    explicit UserAvater(QWidget *parent = 0);
    ~UserAvater();

private:
    Ui::UserAvater *ui;
};

#endif // USERAVATER_H
