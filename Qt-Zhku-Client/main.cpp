#include "ZhkuClientMain.h"
#include <QApplication>
#include "QDebug"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    ZhkuClientMain w;
    int aa=8;
    int *p=&aa;
    aa=(*p)++;
    qDebug()<<aa;

    return a.exec();
}
