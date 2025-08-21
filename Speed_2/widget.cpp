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
    painter.setRenderHints(QPainter::Antialiasing,true);
    painter.setBrush(Qt::black);
    painter.drawRect(rect());

    painter.translate(rect().center());

    QRadialGradient radialGradient(0,0,height()/3);
    radialGradient.setColorAt(0,QColor(255,255,255,150));
    radialGradient.setColorAt(0.6,QColor(255,255,255,100));
    radialGradient.setColorAt(0.8,QColor(255,255,255,50));
    radialGradient.setColorAt(0.9,QColor(0,0,0,255));
    QBrush brush(radialGradient);
    painter.setBrush(brush);
    painter.drawEllipse(QPoint(0,0),height()/2,height()/2);

    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(0,0),height()/6,height()/6);

    painter.save();

    QFont font("Consolas",10);
    painter.setFont(font);
    painter.setPen(Qt::white);
    painter.rotate(240);
    for(int i=0;i<=240;i++){
        if(i%20 == 0 || i == 0){
            painter.drawText(QRect(-10,-height()/3,50,50),QString::number(i));
        }
        painter.rotate(1);
    }

    painter.restore();
    painter.setPen(Qt::white);
    painter.rotate(150);
    int R = height()/3 + 30;
    for(int i=0;i<=240;i++){
        if(i == 0 || i%20 == 0)
            painter.drawLine(QPoint(R,0),QPoint(height()/3 + 10,0));
//        if(i%5 == 0)
            painter.drawLine(QPoint(R,0),QPoint(height()/3 + 20,0));
        painter.rotate(1);
    }

    painter.rotate(150);
    painter.setBrush(Qt::white);
    painter.drawPie(QRect(R,R,2*R,2*R),-90*16,-90*16);
}
