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
    FuncTable *studentRoll;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    FuncTable *curriculumArrangement_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_18;
    FuncTable *curriculumArrangement_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_15;
    FuncTable *curriculumArrangement_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    FuncTable *curriculumArrangement_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_21;
    FuncTable *curriculumArrangement_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_22;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_24;
    FuncTable *curriculumArrangement_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_12;
    FuncTable *curriculumArrangement_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_25;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_27;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QPushButton *curriculumButton;
    FuncTable *curriculumArrangement_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_28;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_30;

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

        studentRoll = new FuncTable(scrollAreaWidgetContents);
        studentRoll->setObjectName(QStringLiteral("studentRoll"));
        sizePolicy.setHeightForWidth(studentRoll->sizePolicy().hasHeightForWidth());
        studentRoll->setSizePolicy(sizePolicy);
        studentRoll->setMinimumSize(QSize(153, 25));
        studentRoll->setAutoFillBackground(false);
        studentRoll->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_3 = new QHBoxLayout(studentRoll);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 0, 0);
        label_4 = new QLabel(studentRoll);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMaximumSize(QSize(16, 16));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\255\246\347\224\237.svg")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(studentRoll);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_6 = new QLabel(studentRoll);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(14, 14));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_6->setScaledContents(true);

        horizontalLayout_3->addWidget(label_6);

        horizontalLayout_3->setStretch(3, 2);

        MenuLayout->addWidget(studentRoll);

        curriculumArrangement_6 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_6->setObjectName(QStringLiteral("curriculumArrangement_6"));
        sizePolicy.setHeightForWidth(curriculumArrangement_6->sizePolicy().hasHeightForWidth());
        curriculumArrangement_6->setSizePolicy(sizePolicy);
        curriculumArrangement_6->setMinimumSize(QSize(153, 25));
        curriculumArrangement_6->setAutoFillBackground(false);
        curriculumArrangement_6->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_7 = new QHBoxLayout(curriculumArrangement_6);
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 0, 0, 0);
        label_16 = new QLabel(curriculumArrangement_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setMaximumSize(QSize(16, 16));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_16->setScaledContents(true);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_16);

        label_17 = new QLabel(curriculumArrangement_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_17);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        label_18 = new QLabel(curriculumArrangement_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMaximumSize(QSize(14, 14));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_18->setScaledContents(true);

        horizontalLayout_7->addWidget(label_18);

        horizontalLayout_7->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_6);

        curriculumArrangement_5 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_5->setObjectName(QStringLiteral("curriculumArrangement_5"));
        sizePolicy.setHeightForWidth(curriculumArrangement_5->sizePolicy().hasHeightForWidth());
        curriculumArrangement_5->setSizePolicy(sizePolicy);
        curriculumArrangement_5->setMinimumSize(QSize(153, 25));
        curriculumArrangement_5->setAutoFillBackground(false);
        curriculumArrangement_5->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_6 = new QHBoxLayout(curriculumArrangement_5);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, 0, 0, 0);
        label_13 = new QLabel(curriculumArrangement_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMaximumSize(QSize(16, 16));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_13->setScaledContents(true);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_13);

        label_14 = new QLabel(curriculumArrangement_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_14);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_15 = new QLabel(curriculumArrangement_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(14, 14));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_15->setScaledContents(true);

        horizontalLayout_6->addWidget(label_15);

        horizontalLayout_6->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_5);

        curriculumArrangement_3 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_3->setObjectName(QStringLiteral("curriculumArrangement_3"));
        sizePolicy.setHeightForWidth(curriculumArrangement_3->sizePolicy().hasHeightForWidth());
        curriculumArrangement_3->setSizePolicy(sizePolicy);
        curriculumArrangement_3->setMinimumSize(QSize(153, 25));
        curriculumArrangement_3->setAutoFillBackground(false);
        curriculumArrangement_3->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_4 = new QHBoxLayout(curriculumArrangement_3);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 0, 0, 0);
        label_7 = new QLabel(curriculumArrangement_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMaximumSize(QSize(16, 16));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(curriculumArrangement_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_9 = new QLabel(curriculumArrangement_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(14, 14));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_9->setScaledContents(true);

        horizontalLayout_4->addWidget(label_9);

        horizontalLayout_4->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_3);

        curriculumArrangement_7 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_7->setObjectName(QStringLiteral("curriculumArrangement_7"));
        sizePolicy.setHeightForWidth(curriculumArrangement_7->sizePolicy().hasHeightForWidth());
        curriculumArrangement_7->setSizePolicy(sizePolicy);
        curriculumArrangement_7->setMinimumSize(QSize(153, 25));
        curriculumArrangement_7->setAutoFillBackground(false);
        curriculumArrangement_7->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_8 = new QHBoxLayout(curriculumArrangement_7);
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, 0, 0, 0);
        label_19 = new QLabel(curriculumArrangement_7);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);
        label_19->setMaximumSize(QSize(16, 16));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_19->setScaledContents(true);
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_19);

        label_20 = new QLabel(curriculumArrangement_7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_20);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        label_21 = new QLabel(curriculumArrangement_7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(14, 14));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_21->setScaledContents(true);

        horizontalLayout_8->addWidget(label_21);

        horizontalLayout_8->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_7);

        curriculumArrangement_8 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_8->setObjectName(QStringLiteral("curriculumArrangement_8"));
        sizePolicy.setHeightForWidth(curriculumArrangement_8->sizePolicy().hasHeightForWidth());
        curriculumArrangement_8->setSizePolicy(sizePolicy);
        curriculumArrangement_8->setMinimumSize(QSize(153, 25));
        curriculumArrangement_8->setAutoFillBackground(false);
        curriculumArrangement_8->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_9 = new QHBoxLayout(curriculumArrangement_8);
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 0, 0, 0);
        label_22 = new QLabel(curriculumArrangement_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMaximumSize(QSize(16, 16));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_22->setScaledContents(true);
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_22);

        label_23 = new QLabel(curriculumArrangement_8);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);
        label_23->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_23);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        label_24 = new QLabel(curriculumArrangement_8);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMaximumSize(QSize(14, 14));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_24->setScaledContents(true);

        horizontalLayout_9->addWidget(label_24);

        horizontalLayout_9->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_8);

        curriculumArrangement_4 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_4->setObjectName(QStringLiteral("curriculumArrangement_4"));
        sizePolicy.setHeightForWidth(curriculumArrangement_4->sizePolicy().hasHeightForWidth());
        curriculumArrangement_4->setSizePolicy(sizePolicy);
        curriculumArrangement_4->setMinimumSize(QSize(153, 25));
        curriculumArrangement_4->setAutoFillBackground(false);
        curriculumArrangement_4->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_5 = new QHBoxLayout(curriculumArrangement_4);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 0, 0, 0);
        label_10 = new QLabel(curriculumArrangement_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMaximumSize(QSize(16, 16));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_10->setScaledContents(true);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_10);

        label_11 = new QLabel(curriculumArrangement_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_12 = new QLabel(curriculumArrangement_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(14, 14));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_12->setScaledContents(true);

        horizontalLayout_5->addWidget(label_12);

        horizontalLayout_5->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_4);

        curriculumArrangement_9 = new FuncTable(scrollAreaWidgetContents);
        curriculumArrangement_9->setObjectName(QStringLiteral("curriculumArrangement_9"));
        sizePolicy.setHeightForWidth(curriculumArrangement_9->sizePolicy().hasHeightForWidth());
        curriculumArrangement_9->setSizePolicy(sizePolicy);
        curriculumArrangement_9->setMinimumSize(QSize(153, 25));
        curriculumArrangement_9->setAutoFillBackground(false);
        curriculumArrangement_9->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_10 = new QHBoxLayout(curriculumArrangement_9);
        horizontalLayout_10->setSpacing(10);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(5, 0, 0, 0);
        label_25 = new QLabel(curriculumArrangement_9);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);
        label_25->setMaximumSize(QSize(16, 16));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_25->setScaledContents(true);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_25);

        label_26 = new QLabel(curriculumArrangement_9);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font);
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_26);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        label_27 = new QLabel(curriculumArrangement_9);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMaximumSize(QSize(14, 14));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_27->setScaledContents(true);

        horizontalLayout_10->addWidget(label_27);

        horizontalLayout_10->setStretch(3, 2);

        MenuLayout->addWidget(curriculumArrangement_9);

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
        curriculumArrangement_10 = new FuncTable(frame);
        curriculumArrangement_10->setObjectName(QStringLiteral("curriculumArrangement_10"));
        curriculumArrangement_10->setGeometry(QRect(140, 510, 153, 25));
        sizePolicy.setHeightForWidth(curriculumArrangement_10->sizePolicy().hasHeightForWidth());
        curriculumArrangement_10->setSizePolicy(sizePolicy);
        curriculumArrangement_10->setMinimumSize(QSize(153, 25));
        curriculumArrangement_10->setAutoFillBackground(false);
        curriculumArrangement_10->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_11 = new QHBoxLayout(curriculumArrangement_10);
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(5, 0, 0, 0);
        label_28 = new QLabel(curriculumArrangement_10);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy1.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy1);
        label_28->setMaximumSize(QSize(16, 16));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label_28->setScaledContents(true);
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_28);

        label_29 = new QLabel(curriculumArrangement_10);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font);
        label_29->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_29->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_29);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        label_30 = new QLabel(curriculumArrangement_10);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMaximumSize(QSize(14, 14));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle down 2 - 24px.svg")));
        label_30->setScaledContents(true);

        horizontalLayout_11->addWidget(label_30);

        horizontalLayout_11->setStretch(3, 2);

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
        label_4->setText(QString());
        label_5->setText(QApplication::translate("ZhkuClientMain", "\345\255\246\347\224\237\345\255\246\347\261\215", Q_NULLPTR));
        label_6->setText(QString());
        label_16->setText(QString());
        label_17->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_18->setText(QString());
        label_13->setText(QString());
        label_14->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_15->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_9->setText(QString());
        label_19->setText(QString());
        label_20->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_24->setText(QString());
        label_10->setText(QString());
        label_11->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_12->setText(QString());
        label_25->setText(QString());
        label_26->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_27->setText(QString());
        curriculumButton->setText(QApplication::translate("ZhkuClientMain", "\350\257\276\350\241\250", Q_NULLPTR));
        label_28->setText(QString());
        label_29->setText(QApplication::translate("ZhkuClientMain", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        label_30->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZhkuClientMain: public Ui_ZhkuClientMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHKUCLIENTMAIN_H
