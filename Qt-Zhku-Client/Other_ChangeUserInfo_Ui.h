#ifndef OTHER_CHANGEUSERINFO_UI_H
#define OTHER_CHANGEUSERINFO_UI_H

#include <QWidget>

namespace Ui {
class Other_ChangeUserInfo_Ui;
}

class Other_ChangeUserInfo_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit Other_ChangeUserInfo_Ui(QWidget *parent = nullptr);
    ~Other_ChangeUserInfo_Ui();

private:
    Ui::Other_ChangeUserInfo_Ui *ui;
};

#endif // OTHER_CHANGEUSERINFO_UI_H
