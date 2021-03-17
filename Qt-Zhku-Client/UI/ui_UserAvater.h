/********************************************************************************
** Form generated from reading UI file 'UserAvater.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERAVATER_H
#define UI_USERAVATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserAvater
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *UserAvater)
    {
        if (UserAvater->objectName().isEmpty())
            UserAvater->setObjectName(QStringLiteral("UserAvater"));
        UserAvater->resize(118, 190);
        UserAvater->setMaximumSize(QSize(218, 290));
        verticalLayout = new QVBoxLayout(UserAvater);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(UserAvater);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/user_img/\351\227\256\345\217\267.svg")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(UserAvater);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(UserAvater);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(UserAvater);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(UserAvater);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        retranslateUi(UserAvater);

        QMetaObject::connectSlotsByName(UserAvater);
    } // setupUi

    void retranslateUi(QWidget *UserAvater)
    {
        UserAvater->setWindowTitle(QApplication::translate("UserAvater", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("UserAvater", "\344\272\262\347\210\261\347\232\204", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserAvater", "\346\227\245\346\234\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserAvater", "\347\254\254\345\207\240\345\221\250", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserAvater", "\345\234\250\347\272\277\344\272\272\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserAvater: public Ui_UserAvater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAVATER_H
