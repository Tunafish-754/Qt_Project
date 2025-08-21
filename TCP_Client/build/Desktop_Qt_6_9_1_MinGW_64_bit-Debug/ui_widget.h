/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutTotal;
    QTextEdit *textEditRev;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutClient;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    MyComboBox *comboBoxIP;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QPushButton *btnConnect;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayoutSend;
    QTextEdit *textEditSend;
    QPushButton *btnSend;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(443, 357);
        Widget->setMinimumSize(QSize(0, 60));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::Phone));
        Widget->setWindowIcon(icon);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 391, 291));
        verticalLayoutTotal = new QVBoxLayout(layoutWidget);
        verticalLayoutTotal->setObjectName("verticalLayoutTotal");
        verticalLayoutTotal->setContentsMargins(0, 0, 0, 0);
        textEditRev = new QTextEdit(layoutWidget);
        textEditRev->setObjectName("textEditRev");

        verticalLayoutTotal->addWidget(textEditRev);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayoutTotal->addItem(verticalSpacer);

        horizontalLayoutClient = new QHBoxLayout();
        horizontalLayoutClient->setObjectName("horizontalLayoutClient");
        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayoutClient->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayoutClient->addWidget(label);

        comboBoxIP = new MyComboBox(layoutWidget);
        comboBoxIP->setObjectName("comboBoxIP");

        horizontalLayoutClient->addWidget(comboBoxIP);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayoutClient->addWidget(label_2);

        lineEditPort = new QLineEdit(layoutWidget);
        lineEditPort->setObjectName("lineEditPort");

        horizontalLayoutClient->addWidget(lineEditPort);

        btnConnect = new QPushButton(layoutWidget);
        btnConnect->setObjectName("btnConnect");

        horizontalLayoutClient->addWidget(btnConnect);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName("btnClose");

        horizontalLayoutClient->addWidget(btnClose);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayoutClient->addItem(horizontalSpacer_2);

        horizontalLayoutClient->setStretch(1, 1);
        horizontalLayoutClient->setStretch(2, 5);
        horizontalLayoutClient->setStretch(3, 1);
        horizontalLayoutClient->setStretch(4, 4);
        horizontalLayoutClient->setStretch(5, 1);
        horizontalLayoutClient->setStretch(6, 1);

        verticalLayoutTotal->addLayout(horizontalLayoutClient);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayoutTotal->addItem(verticalSpacer_2);

        horizontalLayoutSend = new QHBoxLayout();
        horizontalLayoutSend->setObjectName("horizontalLayoutSend");
        textEditSend = new QTextEdit(layoutWidget);
        textEditSend->setObjectName("textEditSend");

        horizontalLayoutSend->addWidget(textEditSend);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName("btnSend");
        btnSend->setMinimumSize(QSize(0, 75));

        horizontalLayoutSend->addWidget(btnSend);


        verticalLayoutTotal->addLayout(horizontalLayoutSend);

        verticalLayoutTotal->setStretch(0, 5);
        verticalLayoutTotal->setStretch(2, 1);
        verticalLayoutTotal->setStretch(4, 2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\275\221\347\273\234\350\260\203\350\257\225\345\212\251\346\211\213\342\200\224\342\200\224\345\256\242\346\210\267\347\253\257", nullptr));
        label->setText(QCoreApplication::translate("Widget", "IP", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        btnConnect->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        btnSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
