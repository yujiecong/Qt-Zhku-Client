#ifndef ZHKULOGINWIDGETBYANDROID_H
#define ZHKULOGINWIDGETBYANDROID_H

#include <QWidget>

namespace Ui {
class ZhkuLoginWidgetByAndroid;
}

class ZhkuLoginWidgetByAndroid : public QWidget
{
    Q_OBJECT

public:
    explicit ZhkuLoginWidgetByAndroid(QWidget *parent = nullptr);
    ~ZhkuLoginWidgetByAndroid();

private:
    Ui::ZhkuLoginWidgetByAndroid *ui;
    QScreen *screen;
};

#endif // ZHKULOGINWIDGETBYANDROID_H
