/********************************************************************************
** Form generated from reading UI file 'zhkuloginwidgetbyandroid.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHKULOGINWIDGETBYANDROID_H
#define UI_ZHKULOGINWIDGETBYANDROID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "getfocuslineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ZhkuLoginWidgetByAndroid
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *inputlayout;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *accountInput;
    QLineEdit *pwdInput;
    GetFocusLineEdit *codeInput;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loginButton;
    QPushButton *loginButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ZhkuLoginWidgetByAndroid)
    {
        if (ZhkuLoginWidgetByAndroid->objectName().isEmpty())
            ZhkuLoginWidgetByAndroid->setObjectName(QString::fromUtf8("ZhkuLoginWidgetByAndroid"));
        ZhkuLoginWidgetByAndroid->resize(622, 1024);
        verticalLayout_4 = new QVBoxLayout(ZhkuLoginWidgetByAndroid);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ZhkuLoginWidgetByAndroid);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{border-image: url(:/assets/zhkuImg/bg.jpg);}\n"
"\n"
"\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        inputlayout = new QWidget(frame);
        inputlayout->setObjectName(QString::fromUtf8("inputlayout"));
        verticalLayout_6 = new QVBoxLayout(inputlayout);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        widget = new QWidget(inputlayout);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"background-color: rgba(250, 250, 250, 200);\n"
"border-radius:15px;\n"
"}\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(50);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(100, 100, 100, 100);
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(0, 150));
        widget_5->setMaximumSize(QSize(16777215, 150));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, -1, 30, -1);
        logo = new QLabel(widget_5);
        logo->setObjectName(QString::fromUtf8("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/login/logo.png);\n"
"background:transparent"));

        horizontalLayout->addWidget(logo);


        verticalLayout_3->addWidget(widget_5);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(widget_4);
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        accountInput = new QLineEdit(widget_4);
        accountInput->setObjectName(QString::fromUtf8("accountInput"));
        sizePolicy.setHeightForWidth(accountInput->sizePolicy().hasHeightForWidth());
        accountInput->setSizePolicy(sizePolicy);
        accountInput->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        accountInput->setFont(font);
        accountInput->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgba(0, 0, 0, 255);\n"
""));
        accountInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(accountInput);

        pwdInput = new QLineEdit(widget_4);
        pwdInput->setObjectName(QString::fromUtf8("pwdInput"));
        sizePolicy.setHeightForWidth(pwdInput->sizePolicy().hasHeightForWidth());
        pwdInput->setSizePolicy(sizePolicy);
        pwdInput->setMinimumSize(QSize(0, 80));
        pwdInput->setFont(font);
        pwdInput->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgba(0, 0, 0, 255);\n"
""));
        pwdInput->setEchoMode(QLineEdit::Password);
        pwdInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(pwdInput);

        codeInput = new GetFocusLineEdit(widget_4);
        codeInput->setObjectName(QString::fromUtf8("codeInput"));
        sizePolicy.setHeightForWidth(codeInput->sizePolicy().hasHeightForWidth());
        codeInput->setSizePolicy(sizePolicy);
        codeInput->setMinimumSize(QSize(0, 80));
        codeInput->setFont(font);
        codeInput->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid rgba(0, 0, 0, 255);\n"
""));
        codeInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(codeInput);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(10, 0, 10, 0);
        checkBox = new QCheckBox(widget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("\n"
"QCheckBox{ background:transparent;color: rgb(43, 43, 43);}\n"
"QCheckBox::indicator {width: 40px; height: 40px; }\n"
"QCheckBox::indicator:unchecked{background:rgb(255, 255, 255);}\n"
"\n"
"\n"
""));

        horizontalLayout_10->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy1.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy1);
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QString::fromUtf8("\n"
"QCheckBox{ background:transparent;color: rgb(43, 43, 43);}\n"
"QCheckBox::indicator {width: 40px; height: 40px; }\n"
"QCheckBox::indicator:unchecked{background:rgb(255, 255, 255);}\n"
"\n"
"\n"
""));

        horizontalLayout_10->addWidget(checkBox_2);


        verticalLayout_5->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(widget_3);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        loginButton->setMinimumSize(QSize(0, 70));
        loginButton->setMaximumSize(QSize(16777215, 100));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"color: rgb(255,255,255);\n"
"border-radius: 30px;\n"
"background-color: rgba(249,163,150, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        loginButton->setFlat(true);

        verticalLayout_2->addWidget(loginButton);


        verticalLayout_5->addWidget(widget_3);

        loginButton_2 = new QPushButton(widget_4);
        loginButton_2->setObjectName(QString::fromUtf8("loginButton_2"));
        sizePolicy1.setHeightForWidth(loginButton_2->sizePolicy().hasHeightForWidth());
        loginButton_2->setSizePolicy(sizePolicy1);
        loginButton_2->setMinimumSize(QSize(0, 0));
        loginButton_2->setMaximumSize(QSize(16777215, 100));
        loginButton_2->setFont(font);
        loginButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"color: rgb(43, 43, 43);\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"}\n"
""));
        loginButton_2->setFlat(true);

        verticalLayout_5->addWidget(loginButton_2);


        verticalLayout_3->addWidget(widget_4);


        verticalLayout_6->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);

        horizontalLayout_2->addWidget(inputlayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(frame);


        retranslateUi(ZhkuLoginWidgetByAndroid);

        QMetaObject::connectSlotsByName(ZhkuLoginWidgetByAndroid);
    } // setupUi

    void retranslateUi(QWidget *ZhkuLoginWidgetByAndroid)
    {
        ZhkuLoginWidgetByAndroid->setWindowTitle(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "Form", nullptr));
        logo->setText(QString());
        accountInput->setInputMask(QString());
        accountInput->setText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "201810224331", nullptr));
        accountInput->setPlaceholderText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "account", nullptr));
        pwdInput->setText(QString());
        pwdInput->setPlaceholderText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "password", nullptr));
        codeInput->setText(QString());
        codeInput->setPlaceholderText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "validation code", nullptr));
        checkBox->setText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "Login", nullptr));
        loginButton_2->setText(QCoreApplication::translate("ZhkuLoginWidgetByAndroid", "More is less", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZhkuLoginWidgetByAndroid: public Ui_ZhkuLoginWidgetByAndroid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKULOGINWIDGETBYANDROID_H
