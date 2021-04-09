/********************************************************************************
** Form generated from reading UI file 'ZhkuClientMain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHKUCLIENTMAIN_H
#define UI_ZHKUCLIENTMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZhkuClientMain
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *MenuLayout;
    QFrame *frame;
    QHBoxLayout *frameLayout;

    void setupUi(QMainWindow *ZhkuClientMain)
    {
        if (ZhkuClientMain->objectName().isEmpty())
            ZhkuClientMain->setObjectName(QString::fromUtf8("ZhkuClientMain"));
        ZhkuClientMain->resize(1024, 637);
        centralWidget = new QWidget(ZhkuClientMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(210, 0));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 208, 635));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setMinimumSize(QSize(200, 0));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget#scrollAreaWidgetContents{\n"
"background-color: rgb(0,6,56);\n"
"}"));
        MenuLayout = new QVBoxLayout(scrollAreaWidgetContents);
        MenuLayout->setSpacing(20);
        MenuLayout->setContentsMargins(11, 11, 11, 11);
        MenuLayout->setObjectName(QString::fromUtf8("MenuLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frameLayout = new QHBoxLayout(frame);
        frameLayout->setSpacing(0);
        frameLayout->setContentsMargins(11, 11, 11, 11);
        frameLayout->setObjectName(QString::fromUtf8("frameLayout"));
        frameLayout->setContentsMargins(0, 0, 0, 0);

        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        ZhkuClientMain->setCentralWidget(centralWidget);

        retranslateUi(ZhkuClientMain);

        QMetaObject::connectSlotsByName(ZhkuClientMain);
    } // setupUi

    void retranslateUi(QMainWindow *ZhkuClientMain)
    {
        ZhkuClientMain->setWindowTitle(QCoreApplication::translate("ZhkuClientMain", "ZhkuClientMain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZhkuClientMain: public Ui_ZhkuClientMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKUCLIENTMAIN_H
