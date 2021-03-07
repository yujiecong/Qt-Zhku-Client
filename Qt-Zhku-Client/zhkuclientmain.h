#ifndef ZHKUCLIENTMAIN_H
#define ZHKUCLIENTMAIN_H

#include <QMainWindow>

namespace Ui {
class ZhkuClientMain;
}

class ZhkuClientMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZhkuClientMain(QWidget *parent = 0);
    ~ZhkuClientMain();

private:
    Ui::ZhkuClientMain *ui;
};

#endif // ZHKUCLIENTMAIN_H
