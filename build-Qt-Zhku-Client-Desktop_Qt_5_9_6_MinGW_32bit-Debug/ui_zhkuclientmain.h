/********************************************************************************
** Form generated from reading UI file 'zhkuclientmain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHKUCLIENTMAIN_H
#define UI_ZHKUCLIENTMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZhkuClientMain
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *LoginButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *accountInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pwdInput;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *codeInput;
    QLabel *codeLabel;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *ZhkuClientMain)
    {
        if (ZhkuClientMain->objectName().isEmpty())
            ZhkuClientMain->setObjectName(QStringLiteral("ZhkuClientMain"));
        ZhkuClientMain->resize(1060, 656);
        centralWidget = new QWidget(ZhkuClientMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 530, 91, 21));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 0, 261, 491));
        LoginButton = new QPushButton(centralWidget);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(610, 400, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(560, 220, 211, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        accountInput = new QLineEdit(layoutWidget);
        accountInput->setObjectName(QStringLiteral("accountInput"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(accountInput->sizePolicy().hasHeightForWidth());
        accountInput->setSizePolicy(sizePolicy1);
        accountInput->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(accountInput);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        pwdInput = new QLineEdit(layoutWidget);
        pwdInput->setObjectName(QStringLiteral("pwdInput"));
        sizePolicy1.setHeightForWidth(pwdInput->sizePolicy().hasHeightForWidth());
        pwdInput->setSizePolicy(sizePolicy1);
        pwdInput->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pwdInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        codeInput = new QLineEdit(layoutWidget);
        codeInput->setObjectName(QStringLiteral("codeInput"));
        sizePolicy1.setHeightForWidth(codeInput->sizePolicy().hasHeightForWidth());
        codeInput->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(codeInput);

        codeLabel = new QLabel(layoutWidget);
        codeLabel->setObjectName(QStringLiteral("codeLabel"));
        codeLabel->setMinimumSize(QSize(50, 20));
        codeLabel->setMaximumSize(QSize(50, 20));
        codeLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(codeLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        ZhkuClientMain->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ZhkuClientMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ZhkuClientMain->setStatusBar(statusBar);
        menuBar = new QMenuBar(ZhkuClientMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1060, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        ZhkuClientMain->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(ZhkuClientMain);

        QMetaObject::connectSlotsByName(ZhkuClientMain);
    } // setupUi

    void retranslateUi(QMainWindow *ZhkuClientMain)
    {
        ZhkuClientMain->setWindowTitle(QApplication::translate("ZhkuClientMain", "ZhkuClientMain", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ZhkuClientMain", "\350\256\277\351\227\256\344\273\262\346\201\272\345\256\230\347\275\221", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("ZhkuClientMain", "\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("ZhkuClientMain", "\350\264\246\345\217\267", Q_NULLPTR));
        accountInput->setText(QApplication::translate("ZhkuClientMain", "201810224331", Q_NULLPTR));
        label_2->setText(QApplication::translate("ZhkuClientMain", "\345\257\206\347\240\201", Q_NULLPTR));
        pwdInput->setText(QApplication::translate("ZhkuClientMain", "yujiecong1", Q_NULLPTR));
        codeLabel->setText(QApplication::translate("ZhkuClientMain", ".....", Q_NULLPTR));
        menu->setTitle(QApplication::translate("ZhkuClientMain", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZhkuClientMain: public Ui_ZhkuClientMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKUCLIENTMAIN_H
