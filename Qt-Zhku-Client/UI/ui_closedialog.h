/********************************************************************************
** Form generated from reading UI file 'closedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_H
#define UI_CLOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *toBottom;
    QRadioButton *closed;
    QCheckBox *memory;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CloseDialog)
    {
        if (CloseDialog->objectName().isEmpty())
            CloseDialog->setObjectName(QStringLiteral("CloseDialog"));
        CloseDialog->resize(186, 197);
        CloseDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(CloseDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(CloseDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        widget = new QWidget(CloseDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toBottom = new QRadioButton(widget);
        toBottom->setObjectName(QStringLiteral("toBottom"));
        toBottom->setChecked(true);

        verticalLayout->addWidget(toBottom);

        closed = new QRadioButton(widget);
        closed->setObjectName(QStringLiteral("closed"));

        verticalLayout->addWidget(closed);


        verticalLayout_2->addWidget(widget);

        memory = new QCheckBox(CloseDialog);
        memory->setObjectName(QStringLiteral("memory"));

        verticalLayout_2->addWidget(memory);

        buttonBox = new QDialogButtonBox(CloseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CloseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CloseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CloseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CloseDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog)
    {
        CloseDialog->setWindowTitle(QApplication::translate("CloseDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CloseDialog", "\347\241\256\345\256\232\350\246\201\351\200\200\345\207\272\345\220\227?", Q_NULLPTR));
        toBottom->setText(QApplication::translate("CloseDialog", "\346\234\200\345\260\217\345\214\226\345\210\260\346\211\230\347\233\230", Q_NULLPTR));
        closed->setText(QApplication::translate("CloseDialog", "\347\233\264\346\216\245\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
        memory->setText(QApplication::translate("CloseDialog", "\350\256\260\344\275\217\346\210\221\347\232\204\351\200\211\346\213\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog: public Ui_CloseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_H
