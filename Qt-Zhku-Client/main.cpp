#include "ZhkuClientMain.h"
#include <QApplication>
#include "QDebug"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setFont(QFont("Droid Sans Fallback",24));
    ZhkuClientMain w;
    return a.exec();
}
