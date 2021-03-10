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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZhkuClientMain
{
public:
    QWidget *centralWidget;
    QPushButton *curriculumButton;
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
        curriculumButton = new QPushButton(centralWidget);
        curriculumButton->setObjectName(QStringLiteral("curriculumButton"));
        curriculumButton->setGeometry(QRect(520, 180, 75, 23));
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
        curriculumButton->setText(QApplication::translate("ZhkuClientMain", "\350\257\276\350\241\250", Q_NULLPTR));
        menu->setTitle(QApplication::translate("ZhkuClientMain", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZhkuClientMain: public Ui_ZhkuClientMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKUCLIENTMAIN_H
