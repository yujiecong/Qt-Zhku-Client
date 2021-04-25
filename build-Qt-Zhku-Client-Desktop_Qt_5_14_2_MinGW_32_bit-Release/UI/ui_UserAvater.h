/********************************************************************************
** Form generated from reading UI file 'UserAvater.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERAVATER_H
#define UI_USERAVATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserAvater
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *avater;
    QLabel *name;
    QLabel *date;
    QLabel *week;
    QLabel *online;
    QPushButton *pushButton;

    void setupUi(QWidget *UserAvater)
    {
        if (UserAvater->objectName().isEmpty())
            UserAvater->setObjectName(QString::fromUtf8("UserAvater"));
        UserAvater->resize(143, 200);
        UserAvater->setMinimumSize(QSize(0, 200));
        UserAvater->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(UserAvater);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        avater = new QLabel(UserAvater);
        avater->setObjectName(QString::fromUtf8("avater"));
        avater->setMaximumSize(QSize(64, 64));
        avater->setPixmap(QPixmap(QString::fromUtf8(":/assets/user_img/avater.png")));
        avater->setScaledContents(true);
        avater->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(avater, 0, Qt::AlignHCenter);

        name = new QLabel(UserAvater);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        name->setFont(font);
        name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name->setScaledContents(true);
        name->setAlignment(Qt::AlignCenter);
        name->setWordWrap(true);

        verticalLayout->addWidget(name);

        date = new QLabel(UserAvater);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font);
        date->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date->setScaledContents(true);
        date->setAlignment(Qt::AlignCenter);
        date->setWordWrap(true);

        verticalLayout->addWidget(date);

        week = new QLabel(UserAvater);
        week->setObjectName(QString::fromUtf8("week"));
        week->setFont(font);
        week->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week->setScaledContents(true);
        week->setAlignment(Qt::AlignCenter);
        week->setWordWrap(true);

        verticalLayout->addWidget(week);

        online = new QLabel(UserAvater);
        online->setObjectName(QString::fromUtf8("online"));
        online->setFont(font);
        online->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        online->setScaledContents(true);
        online->setAlignment(Qt::AlignCenter);
        online->setWordWrap(true);

        verticalLayout->addWidget(online);

        pushButton = new QPushButton(UserAvater);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        pushButton->setFlat(true);

        verticalLayout->addWidget(pushButton);


        retranslateUi(UserAvater);

        QMetaObject::connectSlotsByName(UserAvater);
    } // setupUi

    void retranslateUi(QWidget *UserAvater)
    {
        UserAvater->setWindowTitle(QCoreApplication::translate("UserAvater", "Form", nullptr));
        avater->setText(QString());
        name->setText(QCoreApplication::translate("UserAvater", "\344\272\262\347\210\261\347\232\204", nullptr));
        date->setText(QCoreApplication::translate("UserAvater", "\346\227\245\346\234\237", nullptr));
        week->setText(QCoreApplication::translate("UserAvater", "\347\254\254\345\207\240\345\221\250", nullptr));
        online->setText(QCoreApplication::translate("UserAvater", "\345\234\250\347\272\277\344\272\272\346\225\260", nullptr));
        pushButton->setText(QCoreApplication::translate("UserAvater", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAvater: public Ui_UserAvater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAVATER_H
