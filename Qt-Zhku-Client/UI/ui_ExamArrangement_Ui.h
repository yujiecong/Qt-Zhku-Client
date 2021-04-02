/********************************************************************************
** Form generated from reading UI file 'ExamArrangement_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMARRANGEMENT_UI_H
#define UI_EXAMARRANGEMENT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamArrangement_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *type1Widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QPushButton *queryBtn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *ExamArrangement_Ui)
    {
        if (ExamArrangement_Ui->objectName().isEmpty())
            ExamArrangement_Ui->setObjectName(QStringLiteral("ExamArrangement_Ui"));
        ExamArrangement_Ui->resize(891, 499);
        verticalLayout = new QVBoxLayout(ExamArrangement_Ui);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(ExamArrangement_Ui);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(frame_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(comboBox);

        type1Widget = new QWidget(frame_2);
        type1Widget->setObjectName(QStringLiteral("type1Widget"));
        horizontalLayout_3 = new QHBoxLayout(type1Widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(type1Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        comboBox_2 = new QComboBox(type1Widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBox_2);

        label_3 = new QLabel(type1Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(type1Widget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        sizePolicy1.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBox_3);


        horizontalLayout_2->addWidget(type1Widget);

        queryBtn = new QPushButton(frame_2);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        sizePolicy2.setHeightForWidth(queryBtn->sizePolicy().hasHeightForWidth());
        queryBtn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(queryBtn);


        verticalLayout->addWidget(frame_2);

        scrollArea = new QScrollArea(ExamArrangement_Ui);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 871, 415));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ExamArrangement_Ui);

        QMetaObject::connectSlotsByName(ExamArrangement_Ui);
    } // setupUi

    void retranslateUi(QWidget *ExamArrangement_Ui)
    {
        ExamArrangement_Ui->setWindowTitle(QApplication::translate("ExamArrangement_Ui", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ExamArrangement_Ui", "\345\255\246\345\271\264\345\255\246\346\234\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("ExamArrangement_Ui", "\350\200\203\350\257\225\350\275\256\346\254\241\346\200\247\350\264\250", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ExamArrangement_Ui", "\351\273\230\350\256\244", Q_NULLPTR)
         << QApplication::translate("ExamArrangement_Ui", "\350\241\245\350\200\203", Q_NULLPTR)
         << QApplication::translate("ExamArrangement_Ui", "\346\234\253\350\200\203", Q_NULLPTR)
         << QApplication::translate("ExamArrangement_Ui", "\344\270\255\350\200\203", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("ExamArrangement_Ui", "\350\200\203\350\257\225\350\275\256\346\254\241", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("ExamArrangement_Ui", "\351\273\230\350\256\244", Q_NULLPTR)
        );
        queryBtn->setText(QApplication::translate("ExamArrangement_Ui", "\346\243\200\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExamArrangement_Ui: public Ui_ExamArrangement_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMARRANGEMENT_UI_H
