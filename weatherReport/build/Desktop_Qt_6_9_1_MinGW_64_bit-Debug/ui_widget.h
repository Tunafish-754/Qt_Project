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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_total;
    QWidget *widget01;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit;
    QLabel *labelSearch;
    QLabel *label;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout;
    QLabel *labelTemp;
    QLabel *labelWeather;
    QLabel *tempNum;
    QLabel *labelCity;
    QSpacerItem *horizontalSpacer;
    QLabel *weatherIcon;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget03;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCold;
    QWidget *widget0301;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *labelWind;
    QVBoxLayout *verticalLayout_3;
    QLabel *windType;
    QLabel *windLevel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDust;
    QVBoxLayout *verticalLayout_5;
    QLabel *dust;
    QLabel *dustLevel;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWet;
    QVBoxLayout *verticalLayout_4;
    QLabel *Wet;
    QLabel *WetLevel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelLive;
    QVBoxLayout *verticalLayout_6;
    QLabel *Live;
    QLabel *liveLevel;
    QWidget *widget04;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_date;
    QGridLayout *gridLayout_2;
    QLabel *date_01;
    QLabel *date_11;
    QLabel *date_21;
    QLabel *date_31;
    QLabel *date_41;
    QLabel *date_51;
    QLabel *date_02;
    QLabel *date_12;
    QLabel *date_22;
    QLabel *date_32;
    QLabel *date_42;
    QLabel *date_52;
    QWidget *widget_weather;
    QGridLayout *gridLayout_3;
    QLabel *weatherIcon_0;
    QLabel *weatherIcon_1;
    QLabel *weatherIcon_2;
    QLabel *weatherIcon_4;
    QLabel *weatherIcon_3;
    QLabel *weatherIcon_5;
    QLabel *weather_0;
    QLabel *weather_1;
    QLabel *weather_2;
    QLabel *weather_3;
    QLabel *weather_4;
    QLabel *weather_5;
    QWidget *widget_air;
    QHBoxLayout *horizontalLayout_9;
    QLabel *air_0;
    QLabel *air_1;
    QLabel *air_2;
    QLabel *air_3;
    QLabel *air_4;
    QLabel *air_5;
    QWidget *widget_temp0;
    QWidget *widget_temp1;
    QWidget *widget_wind;
    QGridLayout *gridLayout_4;
    QLabel *windType_0;
    QLabel *windType_1;
    QLabel *windType_2;
    QLabel *windType_3;
    QLabel *windType_4;
    QLabel *windType_5;
    QLabel *wind_0;
    QLabel *wind_1;
    QLabel *wind_2;
    QLabel *wind_3;
    QLabel *wind_4;
    QLabel *wind_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(377, 863);
        Widget->setMinimumSize(QSize(50, 50));
        Widget->setMaximumSize(QSize(1677215, 16777215));
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);"));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 0, 351, 851));
        verticalLayout_total = new QVBoxLayout(widget);
        verticalLayout_total->setObjectName("verticalLayout_total");
        verticalLayout_total->setContentsMargins(0, 0, 0, 0);
        widget01 = new QWidget(widget);
        widget01->setObjectName("widget01");
        verticalLayout_9 = new QVBoxLayout(widget01);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lineEdit = new QLineEdit(widget01);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid gray;\n"
"     border-radius: 8px;\n"
"     padding: 0 8px;\n"
"     background: white;\n"
"     selection-background-color: darkgray;\n"
" }\n"
""));

        horizontalLayout_8->addWidget(lineEdit);

        labelSearch = new QLabel(widget01);
        labelSearch->setObjectName("labelSearch");
        labelSearch->setMinimumSize(QSize(0, 0));
        labelSearch->setMaximumSize(QSize(35, 35));
        labelSearch->setPixmap(QPixmap(QString::fromUtf8(":/search.png")));
        labelSearch->setScaledContents(true);

        horizontalLayout_8->addWidget(labelSearch);

        label = new QLabel(widget01);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"Consolas\";"));

        horizontalLayout_8->addWidget(label);

        horizontalLayout_8->setStretch(0, 6);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 4);

        verticalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_total->addWidget(widget01);

        widget02 = new QWidget(widget);
        widget02->setObjectName("widget02");
        horizontalLayout_7 = new QHBoxLayout(widget02);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        labelTemp = new QLabel(widget02);
        labelTemp->setObjectName("labelTemp");
        labelTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(labelTemp, 2, 3, 1, 2);

        labelWeather = new QLabel(widget02);
        labelWeather->setObjectName("labelWeather");
        labelWeather->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(labelWeather, 2, 1, 1, 2);

        tempNum = new QLabel(widget02);
        tempNum->setObjectName("tempNum");
        tempNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 24pt \"Consolas\";"));

        gridLayout->addWidget(tempNum, 0, 1, 2, 2);

        labelCity = new QLabel(widget02);
        labelCity->setObjectName("labelCity");
        labelCity->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(labelCity, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 5, 1, 1);

        weatherIcon = new QLabel(widget02);
        weatherIcon->setObjectName("weatherIcon");
        weatherIcon->setMinimumSize(QSize(75, 75));
        weatherIcon->setMaximumSize(QSize(75, 75));
        weatherIcon->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon->setScaledContents(true);

        gridLayout->addWidget(weatherIcon, 0, 0, 3, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);


        verticalLayout_total->addWidget(widget02);

        widget03 = new QWidget(widget);
        widget03->setObjectName("widget03");
        verticalLayout = new QVBoxLayout(widget03);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelCold = new QLabel(widget03);
        labelCold->setObjectName("labelCold");
        labelCold->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(labelCold);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(175, 175, 175);\n"
"border-radius : 18px"));
        verticalLayout_8 = new QVBoxLayout(widget0301);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelWind = new QLabel(widget0301);
        labelWind->setObjectName("labelWind");
        labelWind->setMinimumSize(QSize(50, 50));
        labelWind->setMaximumSize(QSize(50, 50));
        labelWind->setPixmap(QPixmap(QString::fromUtf8(":/wind.png")));
        labelWind->setScaledContents(true);

        horizontalLayout->addWidget(labelWind);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        windType = new QLabel(widget0301);
        windType->setObjectName("windType");
        windType->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(windType);

        windLevel = new QLabel(widget0301);
        windLevel->setObjectName("windLevel");
        windLevel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_3->addWidget(windLevel);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelDust = new QLabel(widget0301);
        labelDust->setObjectName("labelDust");
        labelDust->setMinimumSize(QSize(50, 50));
        labelDust->setMaximumSize(QSize(50, 50));
        labelDust->setPixmap(QPixmap(QString::fromUtf8(":/dust.png")));
        labelDust->setScaledContents(true);

        horizontalLayout_3->addWidget(labelDust);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        dust = new QLabel(widget0301);
        dust->setObjectName("dust");
        dust->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(dust);

        dustLevel = new QLabel(widget0301);
        dustLevel->setObjectName("dustLevel");
        dustLevel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_5->addWidget(dustLevel);


        horizontalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelWet = new QLabel(widget0301);
        labelWet->setObjectName("labelWet");
        labelWet->setMinimumSize(QSize(50, 50));
        labelWet->setMaximumSize(QSize(50, 50));
        labelWet->setPixmap(QPixmap(QString::fromUtf8(":/wet.png")));
        labelWet->setScaledContents(true);

        horizontalLayout_2->addWidget(labelWet);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        Wet = new QLabel(widget0301);
        Wet->setObjectName("Wet");
        Wet->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(Wet);

        WetLevel = new QLabel(widget0301);
        WetLevel->setObjectName("WetLevel");
        WetLevel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_4->addWidget(WetLevel);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelLive = new QLabel(widget0301);
        labelLive->setObjectName("labelLive");
        labelLive->setMinimumSize(QSize(50, 50));
        labelLive->setMaximumSize(QSize(50, 50));
        labelLive->setPixmap(QPixmap(QString::fromUtf8(":/leafage.png")));
        labelLive->setScaledContents(true);

        horizontalLayout_4->addWidget(labelLive);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        Live = new QLabel(widget0301);
        Live->setObjectName("Live");
        Live->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(Live);

        liveLevel = new QLabel(widget0301);
        liveLevel->setObjectName("liveLevel");
        liveLevel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_6->addWidget(liveLevel);


        horizontalLayout_4->addLayout(verticalLayout_6);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(widget0301);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_total->addWidget(widget03);

        widget04 = new QWidget(widget);
        widget04->setObjectName("widget04");
        verticalLayout_11 = new QVBoxLayout(widget04);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        widget_date = new QWidget(widget04);
        widget_date->setObjectName("widget_date");
        gridLayout_2 = new QGridLayout(widget_date);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(4);
        gridLayout_2->setVerticalSpacing(0);
        date_01 = new QLabel(widget_date);
        date_01->setObjectName("date_01");
        date_01->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-bottom-left-radius : 0px;\n"
"border-bottom-right-radius : 0px;"));
        date_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_01, 0, 0, 1, 1);

        date_11 = new QLabel(widget_date);
        date_11->setObjectName("date_11");
        date_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-bottom-left-radius : 0px;\n"
"border-bottom-right-radius : 0px;"));
        date_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_11, 0, 1, 2, 1);

        date_21 = new QLabel(widget_date);
        date_21->setObjectName("date_21");
        date_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-bottom-left-radius : 0px;\n"
"border-bottom-right-radius : 0px;"));
        date_21->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_21, 0, 2, 2, 1);

        date_31 = new QLabel(widget_date);
        date_31->setObjectName("date_31");
        date_31->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-bottom-left-radius : 0px;\n"
"border-bottom-right-radius : 0px;"));
        date_31->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_31, 0, 3, 3, 1);

        date_41 = new QLabel(widget_date);
        date_41->setObjectName("date_41");
        date_41->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-bottom-left-radius : 0px;\n"
"border-bottom-right-radius : 0px;"));
        date_41->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_41, 0, 4, 3, 1);

        date_51 = new QLabel(widget_date);
        date_51->setObjectName("date_51");
        date_51->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-bottom-left-radius : 0px;\n"
"border-bottom-right-radius : 0px;"));
        date_51->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_51, 0, 5, 3, 1);

        date_02 = new QLabel(widget_date);
        date_02->setObjectName("date_02");
        date_02->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-top-left-radius : 0px;\n"
"border-top-right-radius : 0px;"));
        date_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_02, 1, 0, 3, 1);

        date_12 = new QLabel(widget_date);
        date_12->setObjectName("date_12");
        date_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-top-left-radius : 0px;\n"
"border-top-right-radius : 0px;"));
        date_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_12, 2, 1, 2, 1);

        date_22 = new QLabel(widget_date);
        date_22->setObjectName("date_22");
        date_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-top-left-radius : 0px;\n"
"border-top-right-radius : 0px;"));
        date_22->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_22, 2, 2, 2, 1);

        date_32 = new QLabel(widget_date);
        date_32->setObjectName("date_32");
        date_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-top-left-radius : 0px;\n"
"border-top-right-radius : 0px;"));
        date_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_32, 3, 3, 1, 1);

        date_42 = new QLabel(widget_date);
        date_42->setObjectName("date_42");
        date_42->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-top-left-radius : 0px;\n"
"border-top-right-radius : 0px;"));
        date_42->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_42, 3, 4, 1, 1);

        date_52 = new QLabel(widget_date);
        date_52->setObjectName("date_52");
        date_52->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius : 6px;\n"
"border-top-left-radius : 0px;\n"
"border-top-right-radius : 0px;"));
        date_52->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(date_52, 3, 5, 1, 1);


        verticalLayout_10->addWidget(widget_date);

        widget_weather = new QWidget(widget04);
        widget_weather->setObjectName("widget_weather");
        gridLayout_3 = new QGridLayout(widget_weather);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setVerticalSpacing(0);
        weatherIcon_0 = new QLabel(widget_weather);
        weatherIcon_0->setObjectName("weatherIcon_0");
        weatherIcon_0->setMinimumSize(QSize(50, 50));
        weatherIcon_0->setMaximumSize(QSize(50, 50));
        weatherIcon_0->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        weatherIcon_0->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon_0->setScaledContents(true);

        gridLayout_3->addWidget(weatherIcon_0, 0, 0, 1, 1);

        weatherIcon_1 = new QLabel(widget_weather);
        weatherIcon_1->setObjectName("weatherIcon_1");
        weatherIcon_1->setMinimumSize(QSize(50, 50));
        weatherIcon_1->setMaximumSize(QSize(50, 50));
        weatherIcon_1->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        weatherIcon_1->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon_1->setScaledContents(true);

        gridLayout_3->addWidget(weatherIcon_1, 0, 1, 1, 1);

        weatherIcon_2 = new QLabel(widget_weather);
        weatherIcon_2->setObjectName("weatherIcon_2");
        weatherIcon_2->setMinimumSize(QSize(50, 50));
        weatherIcon_2->setMaximumSize(QSize(50, 50));
        weatherIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        weatherIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon_2->setScaledContents(true);

        gridLayout_3->addWidget(weatherIcon_2, 0, 2, 1, 1);

        weatherIcon_4 = new QLabel(widget_weather);
        weatherIcon_4->setObjectName("weatherIcon_4");
        weatherIcon_4->setMinimumSize(QSize(50, 50));
        weatherIcon_4->setMaximumSize(QSize(50, 50));
        weatherIcon_4->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        weatherIcon_4->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon_4->setScaledContents(true);

        gridLayout_3->addWidget(weatherIcon_4, 0, 3, 1, 1);

        weatherIcon_3 = new QLabel(widget_weather);
        weatherIcon_3->setObjectName("weatherIcon_3");
        weatherIcon_3->setMinimumSize(QSize(50, 50));
        weatherIcon_3->setMaximumSize(QSize(50, 50));
        weatherIcon_3->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        weatherIcon_3->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon_3->setScaledContents(true);

        gridLayout_3->addWidget(weatherIcon_3, 0, 4, 1, 1);

        weatherIcon_5 = new QLabel(widget_weather);
        weatherIcon_5->setObjectName("weatherIcon_5");
        weatherIcon_5->setMinimumSize(QSize(50, 50));
        weatherIcon_5->setMaximumSize(QSize(50, 50));
        weatherIcon_5->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        weatherIcon_5->setPixmap(QPixmap(QString::fromUtf8(":/cloudy.png")));
        weatherIcon_5->setScaledContents(true);

        gridLayout_3->addWidget(weatherIcon_5, 0, 5, 1, 1);

        weather_0 = new QLabel(widget_weather);
        weather_0->setObjectName("weather_0");
        weather_0->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        weather_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(weather_0, 1, 0, 1, 1);

        weather_1 = new QLabel(widget_weather);
        weather_1->setObjectName("weather_1");
        weather_1->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        weather_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(weather_1, 1, 1, 1, 1);

        weather_2 = new QLabel(widget_weather);
        weather_2->setObjectName("weather_2");
        weather_2->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        weather_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(weather_2, 1, 2, 1, 1);

        weather_3 = new QLabel(widget_weather);
        weather_3->setObjectName("weather_3");
        weather_3->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        weather_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(weather_3, 1, 3, 1, 1);

        weather_4 = new QLabel(widget_weather);
        weather_4->setObjectName("weather_4");
        weather_4->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        weather_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(weather_4, 1, 4, 1, 1);

        weather_5 = new QLabel(widget_weather);
        weather_5->setObjectName("weather_5");
        weather_5->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        weather_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(weather_5, 1, 5, 1, 1);


        verticalLayout_10->addWidget(widget_weather);

        widget_air = new QWidget(widget04);
        widget_air->setObjectName("widget_air");
        horizontalLayout_9 = new QHBoxLayout(widget_air);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        air_0 = new QLabel(widget_air);
        air_0->setObjectName("air_0");
        air_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 0);\n"
"border-radius : 6px"));
        air_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(air_0);

        air_1 = new QLabel(widget_air);
        air_1->setObjectName("air_1");
        air_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 0);\n"
"border-radius : 6px"));
        air_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(air_1);

        air_2 = new QLabel(widget_air);
        air_2->setObjectName("air_2");
        air_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 0);\n"
"border-radius : 6px"));
        air_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(air_2);

        air_3 = new QLabel(widget_air);
        air_3->setObjectName("air_3");
        air_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 0);\n"
"border-radius : 6px"));
        air_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(air_3);

        air_4 = new QLabel(widget_air);
        air_4->setObjectName("air_4");
        air_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 0);\n"
"border-radius : 6px"));
        air_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(air_4);

        air_5 = new QLabel(widget_air);
        air_5->setObjectName("air_5");
        air_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 0);\n"
"border-radius : 6px"));
        air_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(air_5);


        verticalLayout_10->addWidget(widget_air);

        widget_temp0 = new QWidget(widget04);
        widget_temp0->setObjectName("widget_temp0");
        widget_temp0->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);"));

        verticalLayout_10->addWidget(widget_temp0);

        widget_temp1 = new QWidget(widget04);
        widget_temp1->setObjectName("widget_temp1");
        widget_temp1->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);"));

        verticalLayout_10->addWidget(widget_temp1);

        widget_wind = new QWidget(widget04);
        widget_wind->setObjectName("widget_wind");
        gridLayout_4 = new QGridLayout(widget_wind);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setVerticalSpacing(0);
        windType_0 = new QLabel(widget_wind);
        windType_0->setObjectName("windType_0");
        windType_0->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        windType_0->setScaledContents(true);
        windType_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(windType_0, 0, 0, 1, 1);

        windType_1 = new QLabel(widget_wind);
        windType_1->setObjectName("windType_1");
        windType_1->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        windType_1->setScaledContents(true);
        windType_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(windType_1, 0, 1, 1, 1);

        windType_2 = new QLabel(widget_wind);
        windType_2->setObjectName("windType_2");
        windType_2->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        windType_2->setScaledContents(true);
        windType_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(windType_2, 0, 2, 1, 1);

        windType_3 = new QLabel(widget_wind);
        windType_3->setObjectName("windType_3");
        windType_3->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        windType_3->setScaledContents(true);
        windType_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(windType_3, 0, 3, 1, 1);

        windType_4 = new QLabel(widget_wind);
        windType_4->setObjectName("windType_4");
        windType_4->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        windType_4->setScaledContents(true);
        windType_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(windType_4, 0, 4, 1, 1);

        windType_5 = new QLabel(widget_wind);
        windType_5->setObjectName("windType_5");
        windType_5->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-top-left-radius : 5px;\n"
"border-top-right-radius : 5px;"));
        windType_5->setScaledContents(true);
        windType_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(windType_5, 0, 5, 1, 1);

        wind_0 = new QLabel(widget_wind);
        wind_0->setObjectName("wind_0");
        wind_0->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        wind_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(wind_0, 1, 0, 1, 1);

        wind_1 = new QLabel(widget_wind);
        wind_1->setObjectName("wind_1");
        wind_1->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        wind_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(wind_1, 1, 1, 1, 1);

        wind_2 = new QLabel(widget_wind);
        wind_2->setObjectName("wind_2");
        wind_2->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        wind_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(wind_2, 1, 2, 1, 1);

        wind_3 = new QLabel(widget_wind);
        wind_3->setObjectName("wind_3");
        wind_3->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        wind_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(wind_3, 1, 3, 1, 1);

        wind_4 = new QLabel(widget_wind);
        wind_4->setObjectName("wind_4");
        wind_4->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        wind_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(wind_4, 1, 4, 1, 1);

        wind_5 = new QLabel(widget_wind);
        wind_5->setObjectName("wind_5");
        wind_5->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"border-bottom-left-radius : 5px;\n"
"border-bottom-right-radius : 5px;"));
        wind_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(wind_5, 1, 5, 1, 1);


        verticalLayout_10->addWidget(widget_wind);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 1);
        verticalLayout_10->setStretch(2, 1);
        verticalLayout_10->setStretch(3, 3);
        verticalLayout_10->setStretch(4, 3);
        verticalLayout_10->setStretch(5, 1);

        verticalLayout_11->addLayout(verticalLayout_10);


        verticalLayout_total->addWidget(widget04);

        verticalLayout_total->setStretch(0, 1);
        verticalLayout_total->setStretch(1, 4);
        verticalLayout_total->setStretch(2, 4);
        verticalLayout_total->setStretch(3, 6);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        labelSearch->setText(QString());
        label->setText(QCoreApplication::translate("Widget", "2025\345\271\2648\346\234\21026\346\227\245 \346\230\237\346\234\237\344\272\214", nullptr));
        labelTemp->setText(QCoreApplication::translate("Widget", "25\302\260C~30\302\260C", nullptr));
        labelWeather->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        tempNum->setText(QCoreApplication::translate("Widget", "26\302\260C", nullptr));
        labelCity->setText(QCoreApplication::translate("Widget", "\347\217\240\346\265\267\345\270\202", nullptr));
        weatherIcon->setText(QString());
        labelCold->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\346\211\200\346\234\211\344\272\272\351\203\275\344\270\215\346\230\223\346\204\237\345\206\222", nullptr));
        labelWind->setText(QString());
        windType->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        windLevel->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelDust->setText(QString());
        dust->setText(QCoreApplication::translate("Widget", "PM10", nullptr));
        dustLevel->setText(QCoreApplication::translate("Widget", "45", nullptr));
        labelWet->setText(QString());
        Wet->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        WetLevel->setText(QCoreApplication::translate("Widget", "98%", nullptr));
        labelLive->setText(QString());
        Live->setText(QCoreApplication::translate("Widget", "\347\224\237\346\264\273\346\214\207\346\225\260", nullptr));
        liveLevel->setText(QCoreApplication::translate("Widget", "\350\210\222\351\200\202", nullptr));
        date_01->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date_11->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date_21->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date_31->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date_41->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date_51->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date_02->setText(QCoreApplication::translate("Widget", "8/24", nullptr));
        date_12->setText(QCoreApplication::translate("Widget", "8/24", nullptr));
        date_22->setText(QCoreApplication::translate("Widget", "8/24", nullptr));
        date_32->setText(QCoreApplication::translate("Widget", "8/24", nullptr));
        date_42->setText(QCoreApplication::translate("Widget", "8/24", nullptr));
        date_52->setText(QCoreApplication::translate("Widget", "8/24", nullptr));
        weatherIcon_0->setText(QString());
        weatherIcon_1->setText(QString());
        weatherIcon_2->setText(QString());
        weatherIcon_4->setText(QString());
        weatherIcon_3->setText(QString());
        weatherIcon_5->setText(QString());
        weather_0->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weather_1->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weather_2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weather_3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weather_4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weather_5->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        air_0->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_1->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_2->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        windType_0->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        windType_1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        windType_2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        windType_3->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        windType_4->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        windType_5->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        wind_0->setText(QCoreApplication::translate("Widget", "3\345\210\2604\347\272\247", nullptr));
        wind_1->setText(QCoreApplication::translate("Widget", "3\345\210\2604\347\272\247", nullptr));
        wind_2->setText(QCoreApplication::translate("Widget", "3\345\210\2604\347\272\247", nullptr));
        wind_3->setText(QCoreApplication::translate("Widget", "3\345\210\2604\347\272\247", nullptr));
        wind_4->setText(QCoreApplication::translate("Widget", "3\345\210\2604\347\272\247", nullptr));
        wind_5->setText(QCoreApplication::translate("Widget", "3\345\210\2604\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
