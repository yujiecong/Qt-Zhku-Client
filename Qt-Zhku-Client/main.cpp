#include "ZhkuClientMain.h"
#include <QApplication>
#include "QDebug"
#include "global.h"
int main(int argc, char *argv[])
{



#if defined(Q_OS_ANDROID)
    #if (QT_VERSION > QT_VERSION_CHECK(5,6,0))
        QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    #endif
#endif

        QApplication a(argc, argv);
        ZhkuClientMain w;
        return a.exec();


}
