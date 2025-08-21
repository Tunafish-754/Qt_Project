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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayoutTotal;
    QHBoxLayout *horizontalLayoutUP;
    QGroupBox *groupBoxRev;
    QGridLayout *gridLayout;
    QTextEdit *textEditRev;
    QGroupBox *groupBoxRecord;
    QGridLayout *gridLayout_2;
    QTextEdit *textEditRecord;
    QGroupBox *groupBoxText;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutLables;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *checkBox_1;
    QLineEdit *lineEdit_1;
    QPushButton *pushButton_1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_6;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_7;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_8;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_9;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayoutForSending;
    QCheckBox *checkBox;
    QLabel *label_4;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayoutBtns;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonLord;
    QPushButton *pushButtonReset;
    QGroupBox *groupBoxDown;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBoxDownLeft;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_Combos;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSerial;
    QComboBox *comboBoxSerial;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelSerialBaud;
    QComboBox *comboBoxSerialBaud;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelSerialData;
    QComboBox *comboBoxSerialData;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelSerialCheck;
    QComboBox *comboBoxSerialCheck;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelSerialStop;
    QComboBox *comboBoxSerialStop;
    QHBoxLayout *horizontalLayout_14;
    QLabel *labelSerialStream;
    QComboBox *comboBoxSerialStream;
    QGroupBox *groupBoxDownRightUp;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonClearR;
    QCheckBox *checkBoxReVTime;
    QCheckBox *checkBoxHEXShow;
    QPushButton *pushButtonRunModel;
    QPushButton *pushButtonHideM;
    QPushButton *pushButtonSaveR;
    QCheckBox *checkBoxAutoChangeLine;
    QPushButton *pushButtonDownLoadModel;
    QPushButton *pushButtonHideRecord;
    QPushButton *pushButtonClose;
    QGroupBox *groupBoxDownRightDown;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBoxSend;
    QLineEdit *lineEditMS;
    QLabel *labelMS;
    QCheckBox *checkBoxSendNewLine;
    QCheckBox *checkBoxHEXSend;
    QCheckBox *checkBoxGeShiInput;
    QPushButton *pushButtonSend;
    QLineEdit *lineEditSend;
    QWidget *widget1;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(907, 848);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 551, 641));
        gridLayoutTotal = new QGridLayout(widget);
        gridLayoutTotal->setObjectName("gridLayoutTotal");
        gridLayoutTotal->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutUP = new QHBoxLayout();
        horizontalLayoutUP->setObjectName("horizontalLayoutUP");
        groupBoxRev = new QGroupBox(widget);
        groupBoxRev->setObjectName("groupBoxRev");
        groupBoxRev->setMaximumSize(QSize(150, 16777215));
        gridLayout = new QGridLayout(groupBoxRev);
        gridLayout->setObjectName("gridLayout");
        textEditRev = new QTextEdit(groupBoxRev);
        textEditRev->setObjectName("textEditRev");

        gridLayout->addWidget(textEditRev, 0, 0, 1, 1);


        horizontalLayoutUP->addWidget(groupBoxRev);

        groupBoxRecord = new QGroupBox(widget);
        groupBoxRecord->setObjectName("groupBoxRecord");
        groupBoxRecord->setMaximumSize(QSize(150, 16777215));
        gridLayout_2 = new QGridLayout(groupBoxRecord);
        gridLayout_2->setObjectName("gridLayout_2");
        textEditRecord = new QTextEdit(groupBoxRecord);
        textEditRecord->setObjectName("textEditRecord");

        gridLayout_2->addWidget(textEditRecord, 0, 0, 1, 1);


        horizontalLayoutUP->addWidget(groupBoxRecord);

        groupBoxText = new QGroupBox(widget);
        groupBoxText->setObjectName("groupBoxText");
        groupBoxText->setMaximumSize(QSize(200, 16777215));
        gridLayout_3 = new QGridLayout(groupBoxText);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayoutLables = new QHBoxLayout();
        horizontalLayoutLables->setObjectName("horizontalLayoutLables");
        label = new QLabel(groupBoxText);
        label->setObjectName("label");

        horizontalLayoutLables->addWidget(label);

        label_2 = new QLabel(groupBoxText);
        label_2->setObjectName("label_2");

        horizontalLayoutLables->addWidget(label_2);

        label_3 = new QLabel(groupBoxText);
        label_3->setObjectName("label_3");

        horizontalLayoutLables->addWidget(label_3);

        horizontalLayoutLables->setStretch(0, 1);
        horizontalLayoutLables->setStretch(1, 2);
        horizontalLayoutLables->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayoutLables);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        checkBox_1 = new QCheckBox(groupBoxText);
        checkBox_1->setObjectName("checkBox_1");

        horizontalLayout_1->addWidget(checkBox_1);

        lineEdit_1 = new QLineEdit(groupBoxText);
        lineEdit_1->setObjectName("lineEdit_1");

        horizontalLayout_1->addWidget(lineEdit_1);

        pushButton_1 = new QPushButton(groupBoxText);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_1->addWidget(pushButton_1);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_2 = new QCheckBox(groupBoxText);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_2->addWidget(checkBox_2);

        lineEdit_2 = new QLineEdit(groupBoxText);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(groupBoxText);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_3 = new QCheckBox(groupBoxText);
        checkBox_3->setObjectName("checkBox_3");

        horizontalLayout_3->addWidget(checkBox_3);

        lineEdit_3 = new QLineEdit(groupBoxText);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);

        pushButton_3 = new QPushButton(groupBoxText);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBox_4 = new QCheckBox(groupBoxText);
        checkBox_4->setObjectName("checkBox_4");

        horizontalLayout_4->addWidget(checkBox_4);

        lineEdit_4 = new QLineEdit(groupBoxText);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);

        pushButton_4 = new QPushButton(groupBoxText);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox_5 = new QCheckBox(groupBoxText);
        checkBox_5->setObjectName("checkBox_5");

        horizontalLayout_5->addWidget(checkBox_5);

        lineEdit_5 = new QLineEdit(groupBoxText);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_5->addWidget(lineEdit_5);

        pushButton_5 = new QPushButton(groupBoxText);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        checkBox_6 = new QCheckBox(groupBoxText);
        checkBox_6->setObjectName("checkBox_6");

        horizontalLayout_6->addWidget(checkBox_6);

        lineEdit_6 = new QLineEdit(groupBoxText);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_6->addWidget(lineEdit_6);

        pushButton_6 = new QPushButton(groupBoxText);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        checkBox_7 = new QCheckBox(groupBoxText);
        checkBox_7->setObjectName("checkBox_7");

        horizontalLayout_7->addWidget(checkBox_7);

        lineEdit_7 = new QLineEdit(groupBoxText);
        lineEdit_7->setObjectName("lineEdit_7");

        horizontalLayout_7->addWidget(lineEdit_7);

        pushButton_7 = new QPushButton(groupBoxText);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_7->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        checkBox_8 = new QCheckBox(groupBoxText);
        checkBox_8->setObjectName("checkBox_8");

        horizontalLayout_8->addWidget(checkBox_8);

        lineEdit_8 = new QLineEdit(groupBoxText);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_8->addWidget(lineEdit_8);

        pushButton_8 = new QPushButton(groupBoxText);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(pushButton_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        checkBox_9 = new QCheckBox(groupBoxText);
        checkBox_9->setObjectName("checkBox_9");

        horizontalLayout_9->addWidget(checkBox_9);

        lineEdit_9 = new QLineEdit(groupBoxText);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_9->addWidget(lineEdit_9);

        pushButton_9 = new QPushButton(groupBoxText);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_9->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayoutForSending = new QHBoxLayout();
        horizontalLayoutForSending->setObjectName("horizontalLayoutForSending");
        checkBox = new QCheckBox(groupBoxText);
        checkBox->setObjectName("checkBox");
        checkBox->setMaximumSize(QSize(20, 20));

        horizontalLayoutForSending->addWidget(checkBox);

        label_4 = new QLabel(groupBoxText);
        label_4->setObjectName("label_4");

        horizontalLayoutForSending->addWidget(label_4);

        spinBox = new QSpinBox(groupBoxText);
        spinBox->setObjectName("spinBox");

        horizontalLayoutForSending->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayoutForSending);

        horizontalLayoutBtns = new QHBoxLayout();
        horizontalLayoutBtns->setObjectName("horizontalLayoutBtns");
        pushButtonSave = new QPushButton(groupBoxText);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayoutBtns->addWidget(pushButtonSave);

        pushButtonLord = new QPushButton(groupBoxText);
        pushButtonLord->setObjectName("pushButtonLord");

        horizontalLayoutBtns->addWidget(pushButtonLord);

        pushButtonReset = new QPushButton(groupBoxText);
        pushButtonReset->setObjectName("pushButtonReset");

        horizontalLayoutBtns->addWidget(pushButtonReset);


        verticalLayout->addLayout(horizontalLayoutBtns);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayoutUP->addWidget(groupBoxText);

        horizontalLayoutUP->setStretch(0, 1);
        horizontalLayoutUP->setStretch(1, 1);
        horizontalLayoutUP->setStretch(2, 1);

        gridLayoutTotal->addLayout(horizontalLayoutUP, 0, 0, 1, 1);

        groupBoxDown = new QGroupBox(widget);
        groupBoxDown->setObjectName("groupBoxDown");
        gridLayout_7 = new QGridLayout(groupBoxDown);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBoxDownLeft = new QGroupBox(groupBoxDown);
        groupBoxDownLeft->setObjectName("groupBoxDownLeft");
        gridLayout_4 = new QGridLayout(groupBoxDownLeft);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_Combos = new QVBoxLayout();
        verticalLayout_Combos->setObjectName("verticalLayout_Combos");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelSerial = new QLabel(groupBoxDownLeft);
        labelSerial->setObjectName("labelSerial");

        horizontalLayout->addWidget(labelSerial);

        comboBoxSerial = new QComboBox(groupBoxDownLeft);
        comboBoxSerial->setObjectName("comboBoxSerial");

        horizontalLayout->addWidget(comboBoxSerial);


        verticalLayout_Combos->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        labelSerialBaud = new QLabel(groupBoxDownLeft);
        labelSerialBaud->setObjectName("labelSerialBaud");

        horizontalLayout_10->addWidget(labelSerialBaud);

        comboBoxSerialBaud = new QComboBox(groupBoxDownLeft);
        comboBoxSerialBaud->setObjectName("comboBoxSerialBaud");

        horizontalLayout_10->addWidget(comboBoxSerialBaud);


        verticalLayout_Combos->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        labelSerialData = new QLabel(groupBoxDownLeft);
        labelSerialData->setObjectName("labelSerialData");

        horizontalLayout_13->addWidget(labelSerialData);

        comboBoxSerialData = new QComboBox(groupBoxDownLeft);
        comboBoxSerialData->setObjectName("comboBoxSerialData");

        horizontalLayout_13->addWidget(comboBoxSerialData);


        verticalLayout_Combos->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        labelSerialCheck = new QLabel(groupBoxDownLeft);
        labelSerialCheck->setObjectName("labelSerialCheck");

        horizontalLayout_11->addWidget(labelSerialCheck);

        comboBoxSerialCheck = new QComboBox(groupBoxDownLeft);
        comboBoxSerialCheck->setObjectName("comboBoxSerialCheck");

        horizontalLayout_11->addWidget(comboBoxSerialCheck);


        verticalLayout_Combos->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        labelSerialStop = new QLabel(groupBoxDownLeft);
        labelSerialStop->setObjectName("labelSerialStop");

        horizontalLayout_12->addWidget(labelSerialStop);

        comboBoxSerialStop = new QComboBox(groupBoxDownLeft);
        comboBoxSerialStop->setObjectName("comboBoxSerialStop");

        horizontalLayout_12->addWidget(comboBoxSerialStop);


        verticalLayout_Combos->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        labelSerialStream = new QLabel(groupBoxDownLeft);
        labelSerialStream->setObjectName("labelSerialStream");

        horizontalLayout_14->addWidget(labelSerialStream);

        comboBoxSerialStream = new QComboBox(groupBoxDownLeft);
        comboBoxSerialStream->setObjectName("comboBoxSerialStream");

        horizontalLayout_14->addWidget(comboBoxSerialStream);


        verticalLayout_Combos->addLayout(horizontalLayout_14);


        gridLayout_4->addLayout(verticalLayout_Combos, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBoxDownLeft, 0, 0, 2, 1);

        groupBoxDownRightUp = new QGroupBox(groupBoxDown);
        groupBoxDownRightUp->setObjectName("groupBoxDownRightUp");
        gridLayout_5 = new QGridLayout(groupBoxDownRightUp);
        gridLayout_5->setObjectName("gridLayout_5");
        pushButtonClearR = new QPushButton(groupBoxDownRightUp);
        pushButtonClearR->setObjectName("pushButtonClearR");

        gridLayout_5->addWidget(pushButtonClearR, 0, 1, 1, 1);

        checkBoxReVTime = new QCheckBox(groupBoxDownRightUp);
        checkBoxReVTime->setObjectName("checkBoxReVTime");

        gridLayout_5->addWidget(checkBoxReVTime, 0, 2, 1, 1);

        checkBoxHEXShow = new QCheckBox(groupBoxDownRightUp);
        checkBoxHEXShow->setObjectName("checkBoxHEXShow");

        gridLayout_5->addWidget(checkBoxHEXShow, 0, 3, 1, 1);

        pushButtonRunModel = new QPushButton(groupBoxDownRightUp);
        pushButtonRunModel->setObjectName("pushButtonRunModel");

        gridLayout_5->addWidget(pushButtonRunModel, 0, 4, 1, 1);

        pushButtonHideM = new QPushButton(groupBoxDownRightUp);
        pushButtonHideM->setObjectName("pushButtonHideM");

        gridLayout_5->addWidget(pushButtonHideM, 0, 5, 1, 1);

        pushButtonSaveR = new QPushButton(groupBoxDownRightUp);
        pushButtonSaveR->setObjectName("pushButtonSaveR");

        gridLayout_5->addWidget(pushButtonSaveR, 1, 1, 1, 1);

        checkBoxAutoChangeLine = new QCheckBox(groupBoxDownRightUp);
        checkBoxAutoChangeLine->setObjectName("checkBoxAutoChangeLine");

        gridLayout_5->addWidget(checkBoxAutoChangeLine, 1, 3, 1, 1);

        pushButtonDownLoadModel = new QPushButton(groupBoxDownRightUp);
        pushButtonDownLoadModel->setObjectName("pushButtonDownLoadModel");

        gridLayout_5->addWidget(pushButtonDownLoadModel, 1, 4, 1, 1);

        pushButtonHideRecord = new QPushButton(groupBoxDownRightUp);
        pushButtonHideRecord->setObjectName("pushButtonHideRecord");

        gridLayout_5->addWidget(pushButtonHideRecord, 1, 5, 1, 1);

        pushButtonClose = new QPushButton(groupBoxDownRightUp);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout_5->addWidget(pushButtonClose, 0, 0, 2, 1);


        gridLayout_7->addWidget(groupBoxDownRightUp, 0, 1, 1, 1);

        groupBoxDownRightDown = new QGroupBox(groupBoxDown);
        groupBoxDownRightDown->setObjectName("groupBoxDownRightDown");
        gridLayout_6 = new QGridLayout(groupBoxDownRightDown);
        gridLayout_6->setObjectName("gridLayout_6");
        checkBoxSend = new QCheckBox(groupBoxDownRightDown);
        checkBoxSend->setObjectName("checkBoxSend");

        gridLayout_6->addWidget(checkBoxSend, 0, 0, 1, 1);

        lineEditMS = new QLineEdit(groupBoxDownRightDown);
        lineEditMS->setObjectName("lineEditMS");

        gridLayout_6->addWidget(lineEditMS, 0, 1, 1, 1);

        labelMS = new QLabel(groupBoxDownRightDown);
        labelMS->setObjectName("labelMS");

        gridLayout_6->addWidget(labelMS, 0, 2, 1, 1);

        checkBoxSendNewLine = new QCheckBox(groupBoxDownRightDown);
        checkBoxSendNewLine->setObjectName("checkBoxSendNewLine");

        gridLayout_6->addWidget(checkBoxSendNewLine, 0, 3, 1, 1);

        checkBoxHEXSend = new QCheckBox(groupBoxDownRightDown);
        checkBoxHEXSend->setObjectName("checkBoxHEXSend");

        gridLayout_6->addWidget(checkBoxHEXSend, 0, 4, 1, 1);

        checkBoxGeShiInput = new QCheckBox(groupBoxDownRightDown);
        checkBoxGeShiInput->setObjectName("checkBoxGeShiInput");

        gridLayout_6->addWidget(checkBoxGeShiInput, 0, 5, 1, 1);

        pushButtonSend = new QPushButton(groupBoxDownRightDown);
        pushButtonSend->setObjectName("pushButtonSend");

        gridLayout_6->addWidget(pushButtonSend, 1, 0, 1, 1);

        lineEditSend = new QLineEdit(groupBoxDownRightDown);
        lineEditSend->setObjectName("lineEditSend");

        gridLayout_6->addWidget(lineEditSend, 1, 1, 1, 4);


        gridLayout_7->addWidget(groupBoxDownRightDown, 1, 1, 1, 1);


        gridLayoutTotal->addWidget(groupBoxDown, 1, 0, 1, 1);

        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        gridLayout_8 = new QGridLayout(widget1);
        gridLayout_8->setObjectName("gridLayout_8");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        horizontalLayout_15->addWidget(label_5);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");

        horizontalLayout_15->addWidget(label_7);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        horizontalLayout_15->addWidget(label_6);

        label_8 = new QLabel(widget1);
        label_8->setObjectName("label_8");

        horizontalLayout_15->addWidget(label_8);


        gridLayout_8->addLayout(horizontalLayout_15, 0, 0, 1, 1);


        gridLayoutTotal->addWidget(widget1, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBoxRev->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
        groupBoxRecord->setTitle(QCoreApplication::translate("Widget", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        groupBoxText->setTitle(QCoreApplication::translate("Widget", "\345\244\232\346\226\207\346\234\254", nullptr));
        label->setText(QCoreApplication::translate("Widget", "HEX", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "       \345\255\227\347\254\246\344\270\262", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        checkBox_1->setText(QString());
        pushButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        checkBox_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        checkBox_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        checkBox_4->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        checkBox_5->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        checkBox_6->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        checkBox_7->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        checkBox_8->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        checkBox_9->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        checkBox->setText(QString());
        label_4->setText(QCoreApplication::translate("Widget", "     \345\276\252\347\216\257\345\217\221\351\200\201", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        pushButtonLord->setText(QCoreApplication::translate("Widget", "\350\275\275\345\205\245", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        groupBoxDown->setTitle(QString());
        groupBoxDownLeft->setTitle(QString());
        labelSerial->setText(QCoreApplication::translate("Widget", " \344\270\262\345\217\243", nullptr));
        labelSerialBaud->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        labelSerialData->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        labelSerialCheck->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        labelSerialStop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        labelSerialStream->setText(QCoreApplication::translate("Widget", "\346\265\201\346\216\247", nullptr));
        groupBoxDownRightUp->setTitle(QString());
        pushButtonClearR->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        checkBoxReVTime->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\346\227\266\351\227\264", nullptr));
        checkBoxHEXShow->setText(QCoreApplication::translate("Widget", "HEX\346\230\276\347\244\272", nullptr));
        pushButtonRunModel->setText(QCoreApplication::translate("Widget", "\350\277\220\350\241\214\346\250\241\345\274\217", nullptr));
        pushButtonHideM->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\351\235\242\346\235\277", nullptr));
        pushButtonSaveR->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\216\245\346\224\266", nullptr));
        checkBoxAutoChangeLine->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        pushButtonDownLoadModel->setText(QCoreApplication::translate("Widget", "\344\270\213\350\275\275\346\250\241\345\274\217", nullptr));
        pushButtonHideRecord->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\345\216\206\345\217\262", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        groupBoxDownRightDown->setTitle(QString());
        checkBoxSend->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        labelMS->setText(QCoreApplication::translate("Widget", "ms/\346\254\241", nullptr));
        checkBoxSendNewLine->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        checkBoxHEXSend->setText(QCoreApplication::translate("Widget", "HEX\345\217\221\351\200\201", nullptr));
        checkBoxGeShiInput->setText(QCoreApplication::translate("Widget", "\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Send OK!", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Received : 0", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Send : 0", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "2025-7-20 10:20:20", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
