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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <functable.h>

QT_BEGIN_NAMESPACE

class Ui_ZhkuClientMain
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *MenuLayout;
    FuncTable *curriculumArrangement;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QPushButton *curriculumButton;

    void setupUi(QMainWindow *ZhkuClientMain)
    {
        if (ZhkuClientMain->objectName().isEmpty())
            ZhkuClientMain->setObjectName(QStringLiteral("ZhkuClientMain"));
        ZhkuClientMain->resize(1060, 656);
        centralWidget = new QWidget(ZhkuClientMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 171, 636));
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"background-color: rgb(0,6,56);\n"
"}"));
        MenuLayout = new QVBoxLayout(scrollAreaWidgetContents);
        MenuLayout->setSpacing(6);
        MenuLayout->setContentsMargins(11, 11, 11, 11);
        MenuLayout->setObjectName(QStringLiteral("MenuLayout"));
        curriculumArrangement = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement->setObjectName(QStringLiteral("curriculumArrangement"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(curriculumArrangement->sizePolicy().hasHeightForWidth());
        curriculumArrangement->setSizePolicy(sizePolicy);
        curriculumArrangement->setMinimumSize(QSize(153, 25));
        curriculumArrangement->setAutoFillBackground(false);
        curriculumArrangement->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_2 = new QHBoxLayout(curriculumArrangement);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 0, 0);
        label_2 = new QLabel(curriculumArrangement);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(16, 16));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(curriculumArrangement);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(curriculumArrangement);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(14, 14));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        horizontalLayout_2->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement);

        verticalSpacer = new QSpacerItem(20, 582, QSizePolicy::Minimum, QSizePolicy::Expanding);

        MenuLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        curriculumButton = new QPushButton(frame);
        curriculumButton->setObjectName(QStringLiteral("curriculumButton"));
        curriculumButton->setGeometry(QRect(600, 340, 75, 23));

        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        ZhkuClientMain->setCentralWidget(centralWidget);

        retranslateUi(ZhkuClientMain);

        QMetaObject::connectSlotsByName(ZhkuClientMain);
    } // setupUi

    void retranslateUi(QMainWindow *ZhkuClientMain)
    {
        ZhkuClientMain->setWindowTitle(QApplication::translate("ZhkuClientMain", "ZhkuClientMain", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label->setText(QString());
        curriculumButton->setText(QApplication::translate("ZhkuClientMain", "\350\257\276\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZhkuClientMain: public Ui_ZhkuClientMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKUCLIENTMAIN_H
