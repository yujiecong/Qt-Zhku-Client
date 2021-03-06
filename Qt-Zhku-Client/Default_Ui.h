#ifndef DEFAULT_UI_H
#define DEFAULT_UI_H

#include "widgetwithhtml.h"

#include <QWidget>

namespace Ui {
class Default_Ui;
}

class Default_Ui : public WidgetWithHtml
{
    Q_OBJECT

public:
    explicit Default_Ui(QWidget *parent = nullptr);
    ~Default_Ui();
    void setHtml(QString url);
private:
    Ui::Default_Ui *ui;
};

#endif // DEFAULT_UI_H
