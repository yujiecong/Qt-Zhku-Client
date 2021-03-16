#ifndef CLOSEDIALOG_H
#define CLOSEDIALOG_H

#include <QDialog>

namespace Ui {
class CloseDialog;
}

class CloseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CloseDialog(QWidget *parent = 0);
    ~CloseDialog();
        Ui::CloseDialog *ui;
protected:
    void paintEvent(QPaintEvent *e);

private:

};

#endif // CLOSEDIALOG_H
