/********************************************************************************
** Form generated from reading UI file 'zhkuloginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHKULOGINWIDGET_H
#define UI_ZHKULOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
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
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ZhkuLoginWidget)
    {
        if (ZhkuLoginWidget->objectName().isEmpty())
            ZhkuLoginWidget->setObjectName(QStringLiteral("ZhkuLoginWidget"));
        ZhkuLoginWidget->resize(1025, 642);
        ZhkuLoginWidget->setWindowOpacity(0.96);
        horizontalLayout = new QHBoxLayout(ZhkuLoginWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ZhkuLoginWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame#frame{border-image: url(:/assets/login/304866.jpg);}\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(320, 370));
        widget->setMaximumSize(QSize(320, 370));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"background-color: rgba(250, 250, 250, 200);\n"
"}\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(40, 0, 40, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        logo = new QLabel(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMinimumSize(QSize(100, 40));
        logo->setMaximumSize(QSize(140, 16777215));
        logo->setStyleSheet(QLatin1String("border-image: url(:/assets/login/logo.png);\n"
"background:transparent"));

        horizontalLayout_8->addWidget(logo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 5, -1, 5);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setStyleSheet(QStringLiteral("image: url(:/assets/login/user.svg);"));

        horizontalLayout_5->addWidget(label_3);

        accountInput = new QLineEdit(widget);
        accountInput->setObjectName(QStringLiteral("accountInput"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(accountInput->sizePolicy().hasHeightForWidth());
        accountInput->setSizePolicy(sizePolicy1);
        accountInput->setMinimumSize(QSize(0, 0));
        accountInput->setMaximumSize(QSize(160, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        accountInput->setFont(font);
        accountInput->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"border-radius: 10px;"));

        horizontalLayout_5->addWidget(accountInput);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(20, 20));
        label_4->setStyleSheet(QStringLiteral("image: url(:/assets/login/password.svg);"));

        horizontalLayout_6->addWidget(label_4);

        pwdInput = new QLineEdit(widget);
        pwdInput->setObjectName(QStringLiteral("pwdInput"));
        sizePolicy1.setHeightForWidth(pwdInput->sizePolicy().hasHeightForWidth());
        pwdInput->setSizePolicy(sizePolicy1);
        pwdInput->setMaximumSize(QSize(160, 16777215));
        pwdInput->setFont(font);
        pwdInput->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"border-radius: 10px;"));
        pwdInput->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(pwdInput);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, -1, -1, -1);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(20, 20));
        label_5->setMaximumSize(QSize(20, 20));
        label_5->setStyleSheet(QStringLiteral("image: url(:/assets/login/validation.svg);"));

        horizontalLayout_7->addWidget(label_5);

        codeInput = new GetFocusLineEdit(widget);
        codeInput->setObjectName(QStringLiteral("codeInput"));
        sizePolicy1.setHeightForWidth(codeInput->sizePolicy().hasHeightForWidth());
        codeInput->setSizePolicy(sizePolicy1);
        codeInput->setMaximumSize(QSize(160, 16777215));
        codeInput->setFont(font);
        codeInput->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"border-radius: 10px;"));

        horizontalLayout_7->addWidget(codeInput);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        checkBox = new QCheckBox(widget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font);
        checkBox->setStyleSheet(QStringLiteral("color: rgb(43, 43, 43);"));

        horizontalLayout_10->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QStringLiteral("color: rgb(43, 43, 43);"));

        horizontalLayout_10->addWidget(checkBox_2);


        verticalLayout_3->addWidget(widget_2);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QLatin1String("color: rgb(43, 43, 43);\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 200);"));
        loginButton->setFlat(false);

        verticalLayout_3->addWidget(loginButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 3);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        verticalLayout_3->setStretch(6, 1);

        horizontalLayout_2->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);


        retranslateUi(ZhkuLoginWidget);

        QMetaObject::connectSlotsByName(ZhkuLoginWidget);
    } // setupUi

    void retranslateUi(QWidget *ZhkuLoginWidget)
    {
        ZhkuLoginWidget->setWindowTitle(QApplication::translate("ZhkuLoginWidget", "Form", Q_NULLPTR));
        logo->setText(QString());
        label_3->setText(QString());
        accountInput->setInputMask(QString());
        accountInput->setText(QApplication::translate("ZhkuLoginWidget", "201810224331", Q_NULLPTR));
        accountInput->setPlaceholderText(QApplication::translate("ZhkuLoginWidget", "account", Q_NULLPTR));
        label_4->setText(QString());
        pwdInput->setText(QString());
        pwdInput->setPlaceholderText(QApplication::translate("ZhkuLoginWidget", "password", Q_NULLPTR));
        label_5->setText(QString());
        codeInput->setText(QString());
        codeInput->setPlaceholderText(QApplication::translate("ZhkuLoginWidget", "validation code", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ZhkuLoginWidget", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("ZhkuLoginWidget", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        loginButton->setText(QApplication::translate("ZhkuLoginWidget", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZhkuLoginWidget: public Ui_ZhkuLoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKULOGINWIDGET_H
