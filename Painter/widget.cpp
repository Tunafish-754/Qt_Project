#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QLinearGradient linear(0,height()/2,width(),height()/2);
    linear.setColorAt(0,Qt::red);
    linear.setColorAt(1.0,Qt::blue);
    QBrush brush(linear);
    QPainter painter(this);
    painter.setBrush(brush);
    painter.drawPie(rect(),0,180*16);
    QRect rect(400,400,100,100);
    rect.center();
    rect.height();
    rect.width();
}
