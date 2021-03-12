#ifndef FUNCTABLE_H
#define FUNCTABLE_H

#include <QWidget>

namespace Ui {
class FuncTable;
}

class FuncTable : public QWidget
{
    Q_OBJECT

public:
    explicit FuncTable(QWidget *parent = 0);
    ~FuncTable();

private:
    Ui::FuncTable *ui;
};

#endif // FUNCTABLE_H
