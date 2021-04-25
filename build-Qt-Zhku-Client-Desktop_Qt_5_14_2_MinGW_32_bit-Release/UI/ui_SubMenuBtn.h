/********************************************************************************
** Form generated from reading UI file 'SubMenuBtn.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMENUBTN_H
#define UI_SUBMENUBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubMenuBtn
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *SubMenuBtn)
    {
        if (SubMenuBtn->objectName().isEmpty())
            SubMenuBtn->setObjectName(QString::fromUtf8("SubMenuBtn"));
        SubMenuBtn->resize(120, 37);
        horizontalLayout = new QHBoxLayout(SubMenuBtn);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SubMenuBtn);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(15, 15));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/login/user.svg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(SubMenuBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(SubMenuBtn);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(15, 15));
        label_3->setMaximumSize(QSize(15, 15));
        label_3->setLineWidth(2);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle up 2 - 24px.svg")));
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);


        retranslateUi(SubMenuBtn);

        QMetaObject::connectSlotsByName(SubMenuBtn);
    } // setupUi

    void retranslateUi(QWidget *SubMenuBtn)
    {
        SubMenuBtn->setWindowTitle(QCoreApplication::translate("SubMenuBtn", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("SubMenuBtn", "TextLabel", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubMenuBtn: public Ui_SubMenuBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMENUBTN_H
