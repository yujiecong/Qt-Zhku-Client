#ifndef REMOVECHOOSING_UI_H
#define REMOVECHOOSING_UI_H

#include <QWidget>

namespace Ui {
class RemoveChoosing_Ui;
}

class RemoveChoosing_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit RemoveChoosing_Ui(QWidget *parent = nullptr);
    ~RemoveChoosing_Ui();

private:
    Ui::RemoveChoosing_Ui *ui;
};

#endif // REMOVECHOOSING_UI_H
