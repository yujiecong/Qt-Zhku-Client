#ifndef CLOSED_404_UI_H
#define CLOSED_404_UI_H

#include <QWidget>

namespace Ui {
class Closed_404_Ui;
}

class Closed_404_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit Closed_404_Ui(QWidget *parent = nullptr);
    ~Closed_404_Ui();

private:
    Ui::Closed_404_Ui *ui;
};

#endif // CLOSED_404_UI_H
