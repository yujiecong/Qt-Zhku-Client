/********************************************************************************
** Form generated from reading UI file 'closedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
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
        CloseDialog->resize(316, 240);
        CloseDialog->setWindowOpacity(0.9);
        CloseDialog->setStyleSheet(QStringLiteral(""));
        CloseDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(CloseDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(CloseDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(64, 64));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\350\255\246\345\221\212.svg")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        horizontalLayout->addWidget(label_3, 0, Qt::AlignTop);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(CloseDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(CloseDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        label_2->setFont(font1);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        widget = new QWidget(CloseDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CloseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CloseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CloseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CloseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CloseDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog)
    {
        CloseDialog->setWindowTitle(QApplication::translate("CloseDialog", "\351\200\200\345\207\272zhku\345\256\242\346\210\267\347\253\257", Q_NULLPTR));
        label_3->setText(QString());
        label->setText(QApplication::translate("CloseDialog", "\347\241\256\345\256\232\350\246\201\351\200\200\345\207\272\345\220\227?", Q_NULLPTR));
        label_2->setText(QApplication::translate("CloseDialog", "<html><head/><body><p>- \344\275\240\347\241\256\345\256\232\350\246\201\347\246\273\345\274\200\345\217\257\347\210\261\344\271\210\344\271\210\345\223\222\347\232\204\344\273\262\346\201\272\345\260\217\345\256\235\350\264\235\345\256\242\346\210\267\347\253\257\345\220\227?</p><p>- \345\246\202\346\236\234\344\275\240\350\256\276\347\275\256\344\272\206\350\207\252\345\212\250\347\231\273\345\275\225\357\274\214\345\256\242\346\210\267\347\253\257\345\260\206\344\274\232\345\234\250\344\270\213\344\270\200\346\254\241\345\220\257\345\212\250\346\227\266\350\207\252\345\212\250\347\231\273\345\275\225</p></body></html>", Q_NULLPTR));
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
