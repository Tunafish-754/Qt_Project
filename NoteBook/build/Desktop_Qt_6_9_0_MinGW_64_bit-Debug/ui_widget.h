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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnOpen;
    QPushButton *BtnSave;
    QPushButton *BtnClose;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnSet;
    QPushButton *BtnOpenFile;
    QPushButton *BtnWriteFile;
    QPushButton *BtnStreamRead;
    QPushButton *BtnSteamWrite;
    QPushButton *BtnFileDialog;
    QPushButton *BtnSaveFile;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(443, 892);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 50, 351, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnOpen = new QPushButton(horizontalLayoutWidget);
        BtnOpen->setObjectName("BtnOpen");

        horizontalLayout->addWidget(BtnOpen);

        BtnSave = new QPushButton(horizontalLayoutWidget);
        BtnSave->setObjectName("BtnSave");

        horizontalLayout->addWidget(BtnSave);

        BtnClose = new QPushButton(horizontalLayoutWidget);
        BtnClose->setObjectName("BtnClose");

        horizontalLayout->addWidget(BtnClose);

        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(20, 120, 351, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnSet = new QPushButton(horizontalLayoutWidget_2);
        BtnSet->setObjectName("BtnSet");

        horizontalLayout_2->addWidget(BtnSet);

        BtnOpenFile = new QPushButton(horizontalLayoutWidget_2);
        BtnOpenFile->setObjectName("BtnOpenFile");

        horizontalLayout_2->addWidget(BtnOpenFile);

        BtnWriteFile = new QPushButton(horizontalLayoutWidget_2);
        BtnWriteFile->setObjectName("BtnWriteFile");

        horizontalLayout_2->addWidget(BtnWriteFile);

        BtnStreamRead = new QPushButton(Widget);
        BtnStreamRead->setObjectName("BtnStreamRead");
        BtnStreamRead->setGeometry(QRect(30, 240, 101, 21));
        BtnSteamWrite = new QPushButton(Widget);
        BtnSteamWrite->setObjectName("BtnSteamWrite");
        BtnSteamWrite->setGeometry(QRect(140, 240, 91, 21));
        BtnFileDialog = new QPushButton(Widget);
        BtnFileDialog->setObjectName("BtnFileDialog");
        BtnFileDialog->setGeometry(QRect(30, 300, 101, 21));
        BtnSaveFile = new QPushButton(Widget);
        BtnSaveFile->setObjectName("BtnSaveFile");
        BtnSaveFile->setGeometry(QRect(150, 300, 91, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        BtnOpen->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        BtnSave->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        BtnClose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        BtnSet->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        BtnOpenFile->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        BtnWriteFile->setText(QCoreApplication::translate("Widget", "\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
        BtnStreamRead->setText(QCoreApplication::translate("Widget", "\346\265\201\350\257\273\345\217\226\346\226\207\344\273\266", nullptr));
        BtnSteamWrite->setText(QCoreApplication::translate("Widget", "\346\265\201\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
        BtnFileDialog->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        BtnSaveFile->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
