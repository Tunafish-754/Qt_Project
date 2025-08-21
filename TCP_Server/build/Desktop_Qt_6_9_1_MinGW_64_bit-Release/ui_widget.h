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
#include <QtWidgets/QComboBox>
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
    QHBoxLayout *comboBoxsLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *comboBoxProtocol;
    QLabel *label_2;
    QComboBox *comboBoxServerIP;
    QLabel *label_3;
    QLineEdit *lineEditPort;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *btnsLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnBeginListen;
    QPushButton *btnStopListen;
    QPushButton *btnClearRev;
    QPushButton *btnSaveRev;
    QPushButton *btnHexSend;
    QSpacerItem *horizontalSpacer_4;
    MyComboBox *comboBoxClient;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayoutSend;
    QTextEdit *textEditSend;
    QPushButton *btnSend;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(472, 396);
        Widget->setMinimumSize(QSize(150, 0));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::NetworkWireless));
        Widget->setWindowIcon(icon);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 391, 341));
        verticalLayoutTotal = new QVBoxLayout(layoutWidget);
        verticalLayoutTotal->setObjectName("verticalLayoutTotal");
        verticalLayoutTotal->setContentsMargins(0, 0, 0, 0);
        textEditRev = new QTextEdit(layoutWidget);
        textEditRev->setObjectName("textEditRev");

        verticalLayoutTotal->addWidget(textEditRev);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayoutTotal->addItem(verticalSpacer);

        comboBoxsLayout = new QHBoxLayout();
        comboBoxsLayout->setObjectName("comboBoxsLayout");
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        comboBoxsLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        comboBoxsLayout->addWidget(label);

        comboBoxProtocol = new QComboBox(layoutWidget);
        comboBoxProtocol->addItem(QString());
        comboBoxProtocol->addItem(QString());
        comboBoxProtocol->setObjectName("comboBoxProtocol");

        comboBoxsLayout->addWidget(comboBoxProtocol);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        comboBoxsLayout->addWidget(label_2);

        comboBoxServerIP = new QComboBox(layoutWidget);
        comboBoxServerIP->setObjectName("comboBoxServerIP");
        comboBoxServerIP->setMinimumSize(QSize(90, 0));

        comboBoxsLayout->addWidget(comboBoxServerIP);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        comboBoxsLayout->addWidget(label_3);

        lineEditPort = new QLineEdit(layoutWidget);
        lineEditPort->setObjectName("lineEditPort");

        comboBoxsLayout->addWidget(lineEditPort);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        comboBoxsLayout->addItem(horizontalSpacer);

        comboBoxsLayout->setStretch(1, 2);
        comboBoxsLayout->setStretch(2, 3);
        comboBoxsLayout->setStretch(3, 2);
        comboBoxsLayout->setStretch(4, 4);
        comboBoxsLayout->setStretch(5, 1);
        comboBoxsLayout->setStretch(6, 1);

        verticalLayoutTotal->addLayout(comboBoxsLayout);

        btnsLayout = new QHBoxLayout();
        btnsLayout->setObjectName("btnsLayout");
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        btnsLayout->addItem(horizontalSpacer_3);

        btnBeginListen = new QPushButton(layoutWidget);
        btnBeginListen->setObjectName("btnBeginListen");

        btnsLayout->addWidget(btnBeginListen);

        btnStopListen = new QPushButton(layoutWidget);
        btnStopListen->setObjectName("btnStopListen");

        btnsLayout->addWidget(btnStopListen);

        btnClearRev = new QPushButton(layoutWidget);
        btnClearRev->setObjectName("btnClearRev");

        btnsLayout->addWidget(btnClearRev);

        btnSaveRev = new QPushButton(layoutWidget);
        btnSaveRev->setObjectName("btnSaveRev");

        btnsLayout->addWidget(btnSaveRev);

        btnHexSend = new QPushButton(layoutWidget);
        btnHexSend->setObjectName("btnHexSend");

        btnsLayout->addWidget(btnHexSend);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        btnsLayout->addItem(horizontalSpacer_4);


        verticalLayoutTotal->addLayout(btnsLayout);

        comboBoxClient = new MyComboBox(layoutWidget);
        comboBoxClient->setObjectName("comboBoxClient");

        verticalLayoutTotal->addWidget(comboBoxClient);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayoutTotal->addItem(verticalSpacer_2);

        horizontalLayoutSend = new QHBoxLayout();
        horizontalLayoutSend->setObjectName("horizontalLayoutSend");
        textEditSend = new QTextEdit(layoutWidget);
        textEditSend->setObjectName("textEditSend");

        horizontalLayoutSend->addWidget(textEditSend);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName("btnSend");
        btnSend->setMinimumSize(QSize(0, 70));

        horizontalLayoutSend->addWidget(btnSend);


        verticalLayoutTotal->addLayout(horizontalLayoutSend);

        verticalLayoutTotal->setStretch(0, 5);
        verticalLayoutTotal->setStretch(2, 1);
        verticalLayoutTotal->setStretch(3, 1);
        verticalLayoutTotal->setStretch(6, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\275\221\347\273\234\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\351\200\232\344\277\241\345\215\217\350\256\256", nullptr));
        comboBoxProtocol->setItemText(0, QCoreApplication::translate("Widget", "TCP", nullptr));
        comboBoxProtocol->setItemText(1, QCoreApplication::translate("Widget", "UDP", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        btnBeginListen->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        btnStopListen->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\347\233\221\345\220\254", nullptr));
        btnClearRev->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\345\217\227", nullptr));
        btnSaveRev->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\216\245\345\217\227", nullptr));
        btnHexSend->setText(QCoreApplication::translate("Widget", "HEX\345\217\221\351\200\201", nullptr));
        btnSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
