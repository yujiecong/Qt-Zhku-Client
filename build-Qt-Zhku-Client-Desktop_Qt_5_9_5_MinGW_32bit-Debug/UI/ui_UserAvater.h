/********************************************************************************
** Form generated from reading UI file 'UserAvater.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
    QLabel *avater;
    QLabel *name;
    QLabel *date;
    QLabel *week;
    QLabel *online;

    void setupUi(QWidget *UserAvater)
    {
        if (UserAvater->objectName().isEmpty())
            UserAvater->setObjectName(QStringLiteral("UserAvater"));
        UserAvater->resize(146, 210);
        UserAvater->setMaximumSize(QSize(218, 290));
        UserAvater->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(UserAvater);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        avater = new QLabel(UserAvater);
        avater->setObjectName(QStringLiteral("avater"));
        avater->setMaximumSize(QSize(100, 100));
        avater->setPixmap(QPixmap(QString::fromUtf8(":/assets/user_img/\351\227\256\345\217\267.svg")));
        avater->setScaledContents(true);
        avater->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(avater);

        name = new QLabel(UserAvater);
        name->setObjectName(QStringLiteral("name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        name->setFont(font);
        name->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(name);

        date = new QLabel(UserAvater);
        date->setObjectName(QStringLiteral("date"));
        date->setFont(font);
        date->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        date->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(date);

        week = new QLabel(UserAvater);
        week->setObjectName(QStringLiteral("week"));
        week->setFont(font);
        week->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        week->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(week);

        online = new QLabel(UserAvater);
        online->setObjectName(QStringLiteral("online"));
        online->setFont(font);
        online->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        online->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(online);


        retranslateUi(UserAvater);

        QMetaObject::connectSlotsByName(UserAvater);
    } // setupUi

    void retranslateUi(QWidget *UserAvater)
    {
        UserAvater->setWindowTitle(QApplication::translate("UserAvater", "Form", Q_NULLPTR));
        avater->setText(QString());
        name->setText(QApplication::translate("UserAvater", "\344\272\262\347\210\261\347\232\204", Q_NULLPTR));
        date->setText(QApplication::translate("UserAvater", "\346\227\245\346\234\237", Q_NULLPTR));
        week->setText(QApplication::translate("UserAvater", "\347\254\254\345\207\240\345\221\250", Q_NULLPTR));
        online->setText(QApplication::translate("UserAvater", "\345\234\250\347\272\277\344\272\272\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserAvater: public Ui_UserAvater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAVATER_H
