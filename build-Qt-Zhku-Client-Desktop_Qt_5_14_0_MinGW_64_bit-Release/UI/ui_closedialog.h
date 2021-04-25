/********************************************************************************
** Form generated from reading UI file 'CloseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_H
#define UI_CLOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
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
            CloseDialog->setObjectName(QString::fromUtf8("CloseDialog"));
        CloseDialog->resize(316, 240);
        CloseDialog->setWindowOpacity(0.900000000000000);
        CloseDialog->setStyleSheet(QString::fromUtf8(""));
        CloseDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(CloseDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(CloseDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(64, 64));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/assets/user_img/wenhao.png")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        horizontalLayout->addWidget(label_3, 0, Qt::AlignTop);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(CloseDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(CloseDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        label_2->setFont(font1);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        widget = new QWidget(CloseDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toBottom = new QRadioButton(widget);
        toBottom->setObjectName(QString::fromUtf8("toBottom"));
        toBottom->setChecked(true);

        verticalLayout->addWidget(toBottom);

        closed = new QRadioButton(widget);
        closed->setObjectName(QString::fromUtf8("closed"));

        verticalLayout->addWidget(closed);


        verticalLayout_2->addWidget(widget);

        memory = new QCheckBox(CloseDialog);
        memory->setObjectName(QString::fromUtf8("memory"));

        verticalLayout_2->addWidget(memory);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CloseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        CloseDialog->setWindowTitle(QCoreApplication::translate("CloseDialog", "\351\200\200\345\207\272zhku\345\256\242\346\210\267\347\253\257", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("CloseDialog", "\347\241\256\345\256\232\350\246\201\351\200\200\345\207\272\345\220\227?", nullptr));
        label_2->setText(QCoreApplication::translate("CloseDialog", "<html><head/><body><p>- \344\275\240\347\241\256\345\256\232\350\246\201\347\246\273\345\274\200\345\217\257\347\210\261\344\271\210\344\271\210\345\223\222\347\232\204\344\273\262\346\201\272\345\260\217\345\256\235\350\264\235\345\256\242\346\210\267\347\253\257\345\220\227?</p><p>- \345\246\202\346\236\234\344\275\240\350\256\276\347\275\256\344\272\206\350\207\252\345\212\250\347\231\273\345\275\225\357\274\214\345\256\242\346\210\267\347\253\257\345\260\206\344\274\232\345\234\250\344\270\213\344\270\200\346\254\241\345\220\257\345\212\250\346\227\266\350\207\252\345\212\250\347\231\273\345\275\225</p></body></html>", nullptr));
        toBottom->setText(QCoreApplication::translate("CloseDialog", "\346\234\200\345\260\217\345\214\226\345\210\260\346\211\230\347\233\230", nullptr));
        closed->setText(QCoreApplication::translate("CloseDialog", "\347\233\264\346\216\245\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        memory->setText(QCoreApplication::translate("CloseDialog", "\350\256\260\344\275\217\346\210\221\347\232\204\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog: public Ui_CloseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_H
