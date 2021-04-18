#ifndef REMOVECHOOSING_UI_H
#define REMOVECHOOSING_UI_H

#include "widgetwithhtml.h"

#include <QWidget>

namespace Ui {
class RemoveChoosing_Ui;
}

class RemoveChoosing_Ui : public WidgetWithHtml
{
    Q_OBJECT

public:
    explicit RemoveChoosing_Ui(QWidget *parent = nullptr);
    ~RemoveChoosing_Ui();
    void setHtml( QString html) override;
    void insertImg(ImgLabel *l) override;

private:
    Ui::RemoveChoosing_Ui *ui;
};

#endif // REMOVECHOOSING_UI_H
