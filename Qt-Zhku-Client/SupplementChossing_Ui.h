#ifndef SUPPLEMENTCHOSSING_UI_H
#define SUPPLEMENTCHOSSING_UI_H

#include <QWidget>

namespace Ui {
class SupplementChossing_Ui;
}

class SupplementChossing_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit SupplementChossing_Ui(QWidget *parent = nullptr);
    ~SupplementChossing_Ui();

private:
    Ui::SupplementChossing_Ui *ui;
};

#endif // SUPPLEMENTCHOSSING_UI_H
