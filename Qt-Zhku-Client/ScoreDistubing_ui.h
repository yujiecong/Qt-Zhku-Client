#ifndef SCOREDISTUBING_UI_H
#define SCOREDISTUBING_UI_H

#include <QWidget>

namespace Ui {
class ScoreDistubing_Ui;
}

class ScoreDistubing_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit ScoreDistubing_Ui(QWidget *parent = 0);
    ~ScoreDistubing_Ui();

private:
    Ui::ScoreDistubing_Ui *ui;
};

#endif // SCOREDISTUBING_UI_H
