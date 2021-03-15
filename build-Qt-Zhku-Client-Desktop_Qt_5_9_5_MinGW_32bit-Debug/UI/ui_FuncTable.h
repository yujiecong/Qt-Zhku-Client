/********************************************************************************
** Form generated from reading UI file 'FuncTable.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTABLE_H
#define UI_FUNCTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FuncTable
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *curriculumArrangement;
    QHBoxLayout *horizontalLayout_2;
    QLabel *iconLabel;
    QLabel *textLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *arrowLabel;

    void setupUi(QWidget *FuncTable)
    {
        if (FuncTable->objectName().isEmpty())
            FuncTable->setObjectName(QStringLiteral("FuncTable"));
        FuncTable->resize(180, 40);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FuncTable->sizePolicy().hasHeightForWidth());
        FuncTable->setSizePolicy(sizePolicy);
        FuncTable->setMinimumSize(QSize(0, 40));
        FuncTable->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(FuncTable);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        curriculumArrangement = new QWidget(FuncTable);
        curriculumArrangement->setObjectName(QStringLiteral("curriculumArrangement"));
        sizePolicy.setHeightForWidth(curriculumArrangement->sizePolicy().hasHeightForWidth());
        curriculumArrangement->setSizePolicy(sizePolicy);
        curriculumArrangement->setAutoFillBackground(false);
        curriculumArrangement->setStyleSheet(QStringLiteral("border-radius:10px"));
        horizontalLayout_2 = new QHBoxLayout(curriculumArrangement);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 5, 0);
        iconLabel = new QLabel(curriculumArrangement);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setMaximumSize(QSize(16, 16));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        iconLabel->setScaledContents(true);
        iconLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(iconLabel);

        textLabel = new QLabel(curriculumArrangement);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        textLabel->setFont(font);
        textLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(textLabel);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        arrowLabel = new QLabel(curriculumArrangement);
        arrowLabel->setObjectName(QStringLiteral("arrowLabel"));
        arrowLabel->setMaximumSize(QSize(14, 14));
        arrowLabel->setPixmap(QPixmap(QString::fromUtf8(":/assets/arrow/Arrow Circle up 2 - 24px.svg")));
        arrowLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(arrowLabel);

        horizontalLayout_2->setStretch(3, 2);

        horizontalLayout->addWidget(curriculumArrangement);


        retranslateUi(FuncTable);

        QMetaObject::connectSlotsByName(FuncTable);
    } // setupUi

    void retranslateUi(QWidget *FuncTable)
    {
        FuncTable->setWindowTitle(QApplication::translate("FuncTable", "Form", Q_NULLPTR));
        iconLabel->setText(QString());
        textLabel->setText(QApplication::translate("FuncTable", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        arrowLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FuncTable: public Ui_FuncTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTABLE_H
