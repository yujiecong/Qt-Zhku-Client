#ifndef CHOOSINGRESULT_UI_H
#define CHOOSINGRESULT_UI_H

#include "ImgLabel.h"
#include "widgetwithhtml.h"

#include <QWidget>

namespace Ui {
class ChoosingResult_Ui;
}

class ChoosingResult_Ui : public WidgetWithHtml
{
    Q_OBJECT

public:
    explicit ChoosingResult_Ui(QWidget *parent = nullptr);
    ~ChoosingResult_Ui();
    void setHtml(QString url) override;
     void insertImg(ImgLabel *img);
private:
    Ui::ChoosingResult_Ui *ui;
};

#endif // CHOOSINGRESULT_UI_H
