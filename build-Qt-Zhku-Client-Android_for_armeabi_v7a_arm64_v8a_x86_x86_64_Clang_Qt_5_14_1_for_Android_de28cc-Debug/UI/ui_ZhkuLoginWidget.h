/********************************************************************************
** Form generated from reading UI file 'ZhkuLoginWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHKULOGINWIDGET_H
#define UI_ZHKULOGINWIDGET_H

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

class Ui_ZhkuLoginWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *inputwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *accountInput;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *pwdInput;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    GetFocusLineEdit *codeInput;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *loginButton;
    QPushButton *loginButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ZhkuLoginWidget)
    {
        if (ZhkuLoginWidget->objectName().isEmpty())
            ZhkuLoginWidget->setObjectName(QString::fromUtf8("ZhkuLoginWidget"));
        ZhkuLoginWidget->resize(951, 610);
        ZhkuLoginWidget->setWindowOpacity(0.960000000000000);
        horizontalLayout = new QHBoxLayout(ZhkuLoginWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ZhkuLoginWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{border-image: url(:/assets/login/304866.jpg);}\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(321, 407));
        widget->setMaximumSize(QSize(321, 407));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"background-color: rgba(250, 250, 250, 200);\n"
"border-radius:15px;\n"
"}\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(50, 20, 50, 20);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        logo = new QLabel(widget);
        logo->setObjectName(QString::fromUtf8("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(0, 40));
        logo->setMaximumSize(QSize(16777215, 40));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/login/logo.png);\n"
"background:transparent"));

        horizontalLayout_8->addWidget(logo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        inputwidget = new QWidget(widget);
        inputwidget->setObjectName(QString::fromUtf8("inputwidget"));
        verticalLayout_2 = new QVBoxLayout(inputwidget);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, -1, 10, -1);
        label_3 = new QLabel(inputwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/assets/login/user.png);"));

        horizontalLayout_5->addWidget(label_3);

        accountInput = new QLineEdit(inputwidget);
        accountInput->setObjectName(QString::fromUtf8("accountInput"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(accountInput->sizePolicy().hasHeightForWidth());
        accountInput->setSizePolicy(sizePolicy2);
        accountInput->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        accountInput->setFont(font);
        accountInput->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"border-radius: 10px;"));
        accountInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(accountInput);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, -1, 10, -1);
        label_4 = new QLabel(inputwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(20, 20));
        label_4->setMaximumSize(QSize(20, 20));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/assets/login/password.png);"));

        horizontalLayout_6->addWidget(label_4);

        pwdInput = new QLineEdit(inputwidget);
        pwdInput->setObjectName(QString::fromUtf8("pwdInput"));
        sizePolicy2.setHeightForWidth(pwdInput->sizePolicy().hasHeightForWidth());
        pwdInput->setSizePolicy(sizePolicy2);
        pwdInput->setFont(font);
        pwdInput->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"border-radius: 10px;"));
        pwdInput->setEchoMode(QLineEdit::Password);
        pwdInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(pwdInput);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(20);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, -1, 10, -1);
        label_5 = new QLabel(inputwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(20, 20));
        label_5->setMaximumSize(QSize(20, 20));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/assets/login/validCode.png);"));

        horizontalLayout_7->addWidget(label_5);

        codeInput = new GetFocusLineEdit(inputwidget);
        codeInput->setObjectName(QString::fromUtf8("codeInput"));
        sizePolicy2.setHeightForWidth(codeInput->sizePolicy().hasHeightForWidth());
        codeInput->setSizePolicy(sizePolicy2);
        codeInput->setFont(font);
        codeInput->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"border-radius: 10px;"));
        codeInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(codeInput);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(inputwidget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(10, 0, 10, 0);
        checkBox = new QCheckBox(widget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy3);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(43, 43, 43);"));

        horizontalLayout_10->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy3.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy3);
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(43, 43, 43);"));

        horizontalLayout_10->addWidget(checkBox_2);


        verticalLayout_3->addWidget(widget_2);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"color: rgb(43, 43, 43);\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        loginButton->setFlat(true);

        verticalLayout_3->addWidget(loginButton);

        loginButton_2 = new QPushButton(widget);
        loginButton_2->setObjectName(QString::fromUtf8("loginButton_2"));
        sizePolicy.setHeightForWidth(loginButton_2->sizePolicy().hasHeightForWidth());
        loginButton_2->setSizePolicy(sizePolicy);
        loginButton_2->setFont(font1);
        loginButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"color: rgb(43, 43, 43);\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        loginButton_2->setFlat(true);

        verticalLayout_3->addWidget(loginButton_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 5);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        verticalLayout_3->setStretch(6, 1);

        horizontalLayout_2->addWidget(widget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        verticalLayout->setStretch(2, 1);

        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);


        retranslateUi(ZhkuLoginWidget);

        QMetaObject::connectSlotsByName(ZhkuLoginWidget);
    } // setupUi

    void retranslateUi(QWidget *ZhkuLoginWidget)
    {
        ZhkuLoginWidget->setWindowTitle(QCoreApplication::translate("ZhkuLoginWidget", "Form", nullptr));
        logo->setText(QString());
        label_3->setText(QString());
        accountInput->setInputMask(QString());
        accountInput->setText(QCoreApplication::translate("ZhkuLoginWidget", "201810224331", nullptr));
        accountInput->setPlaceholderText(QCoreApplication::translate("ZhkuLoginWidget", "account", nullptr));
        label_4->setText(QString());
        pwdInput->setText(QString());
        pwdInput->setPlaceholderText(QCoreApplication::translate("ZhkuLoginWidget", "password", nullptr));
        label_5->setText(QString());
        codeInput->setText(QString());
        codeInput->setPlaceholderText(QCoreApplication::translate("ZhkuLoginWidget", "validation code", nullptr));
        checkBox->setText(QCoreApplication::translate("ZhkuLoginWidget", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ZhkuLoginWidget", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("ZhkuLoginWidget", "\347\231\273\345\275\225", nullptr));
        loginButton_2->setText(QCoreApplication::translate("ZhkuLoginWidget", "\346\233\264\345\244\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZhkuLoginWidget: public Ui_ZhkuLoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKULOGINWIDGET_H
