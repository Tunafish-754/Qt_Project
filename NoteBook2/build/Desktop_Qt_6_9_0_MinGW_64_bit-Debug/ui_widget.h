/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytextedit.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *BottonsWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *BtnLayout;
    QPushButton *BtnOpen;
    QPushButton *BtnSave;
    QPushButton *BtnClose;
    QSpacerItem *horizontalSpacer;
    MyTextEdit *textEdit;
    QWidget *LabelWidget;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelPositon;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(427, 303);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/NoteBook.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Widget->setWindowIcon(icon);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(7, 3, 351, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BottonsWidget = new QWidget(layoutWidget);
        BottonsWidget->setObjectName("BottonsWidget");
        BottonsWidget->setMinimumSize(QSize(0, 50));
        BottonsWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        layoutWidget1 = new QWidget(BottonsWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 281, 32));
        BtnLayout = new QHBoxLayout(layoutWidget1);
        BtnLayout->setObjectName("BtnLayout");
        BtnLayout->setContentsMargins(0, 0, 0, 0);
        BtnOpen = new QPushButton(layoutWidget1);
        BtnOpen->setObjectName("BtnOpen");
        BtnOpen->setMinimumSize(QSize(30, 30));
        BtnOpen->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {border-image: url(:/icon/Openfile.png);}\n"
"\n"
"QPushButton:hover {border-image: url(:/icon1/OpenFile1.png);}\n"
"\n"
"QPushButton:pressed {border-image: url(:/icon1/OpenFile2.png);}\n"
"\n"
""));

        BtnLayout->addWidget(BtnOpen);

        BtnSave = new QPushButton(layoutWidget1);
        BtnSave->setObjectName("BtnSave");
        BtnSave->setMinimumSize(QSize(30, 30));
        BtnSave->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {border-image: url(:/icon1/Save1.png);}\n"
"\n"
"QPushButton:hover {border-image: url(:/icon1/Save2.png);}\n"
"\n"
"QPushButton:pressed {border-image: url(:/icon1/Save3.png)}"));

        BtnLayout->addWidget(BtnSave);

        BtnClose = new QPushButton(layoutWidget1);
        BtnClose->setObjectName("BtnClose");
        BtnClose->setMinimumSize(QSize(30, 30));
        BtnClose->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {border-image: url(:/icon/Close.png);}\n"
"\n"
"QPushButton:hover {border-image: url(:/icon1/Close2.png);}\n"
"\n"
"QPushButton:pressed {border-image: url(:/icon1/Close3.png);}"));

        BtnLayout->addWidget(BtnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        BtnLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(BottonsWidget);

        textEdit = new MyTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        LabelWidget = new QWidget(layoutWidget);
        LabelWidget->setObjectName("LabelWidget");
        LabelWidget->setMinimumSize(QSize(0, 30));
        LabelWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        layoutWidget2 = new QWidget(LabelWidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 331, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelPositon = new QLabel(layoutWidget2);
        labelPositon->setObjectName("labelPositon");

        horizontalLayout->addWidget(labelPositon);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(LabelWidget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\256\260\344\272\213\346\234\254", nullptr));
        BtnOpen->setText(QString());
        BtnSave->setText(QString());
        BtnClose->setText(QString());
        labelPositon->setText(QCoreApplication::translate("Widget", "n\350\241\214n\345\210\227", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "UTF-8", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "UTF-16LE", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "UTF-16BE", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
