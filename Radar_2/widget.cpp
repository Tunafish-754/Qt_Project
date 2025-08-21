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
    QPainter painter(this);
    QBrush brush(Qt::black);
    painter.setBrush(brush);
    painter.drawRect(rect());
    painter.setBrush(Qt::NoBrush);

    painter.translate(rect().center());
    QPen pen(QColor(0,255,0,255),3);
    painter.setPen(pen);
    int r= (height()/2)/6;
    int PieR = r*7;
    for(int i=1;i<=6;i++){
        painter.drawEllipse(QPoint(0,0),r*i,r*i);
    }

    painter.drawLine(QPoint(-6*r,0),QPoint(6*r,0));
    painter.drawLine(QPoint(0,-6*r),QPoint(0,6*r));

    QConicalGradient conicalGradient(QPoint(0,0),30);
    conicalGradient.setColorAt(0,QColor(0,255,0,255));
    conicalGradient.setColorAt(0.1,QColor(0,255,0,50));
    painter.setBrush(QBrush(conicalGradient));
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-PieR,-PieR,2*PieR,2*PieR),30*16,30*16);
}
