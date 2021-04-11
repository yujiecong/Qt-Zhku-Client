#include "ZhkuClientMain.h"
#include <QApplication>
#include "QDebug"
#include "global.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setFont(QFont("Droid Sans Fallback",24));
    ZhkuClientMain w;
    //                  w=1083&h=80&xn=2020&xq=1&zfx=0&type=xzxjg

    return a.exec();
}
