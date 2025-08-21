#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    index = 0;
    timer = new QTimer(this);

    QObject::connect(ui->Btn,SIGNAL(pressed()),this,SLOT(btn_speed_up()));
    connect(timer,&QTimer::timeout,[=](){
        index = (index+1)%270;
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setBrush(QBrush(Qt::black));
    painter.drawRect(rect());
//    painter.setBrush(Qt::NoBrush);

    painter.translate(rect().center());

    QRadialGradient radialGradient(0,0,height()/2);
    radialGradient.setColorAt(1,QColor(255,0,0,255));
    radialGradient.setColorAt(0,QColor(255,0,0,10));
    QBrush brush(radialGradient);
    qDebug() << "Set brush";
    painter.setBrush(brush);
    painter.drawEllipse(QPoint(0,0),height()/2,height()/2);

    QPen pen(QColor(255,255,255,255),3);
    painter.setPen(pen);
    painter.drawEllipse(QPoint(0,0),50,50);
 //   painter.drawLine(QPointF(height()/2-2,0),QPointF(height()/2-10,0));

    painter.setFont(QFont("Consolas",20));
    painter.drawText(QPoint(-8,0),QString::number(index));

    painter.save();
    painter.rotate(135);
    painter.drawLine(QPointF(height()/2-2,0),QPointF(height()/2-12,0));

    QFont font("Consolas",10);
    painter.setFont(font);

    painter.drawText(QPointF(height()/2-35,0),QString::number(0));

    for(int i=1;i<=27;i+=1){
        painter.rotate(10);
        if(i%3 == 0){
            painter.drawLine(QPointF(height()/2-2,0),QPointF(height()/2-12,0));
            if(i >= 15){
                painter.drawText(QPointF(height()/2-35,0),QString::number(i*10));
            }
            else{
                painter.rotate(180);
                painter.drawText(QPoint(-(height()/2-14),0),QString::number(i*10));
                painter.rotate(-180);
            }
        }
        else{
            painter.drawLine(QPointF(height()/2-2,0),QPointF(height()/2-6,0));
        }
    }

    painter.restore();
    painter.rotate(135+index);
    painter.drawLine(QPoint(125,0),QPoint(50,0));
    painter.rotate(215-index);
    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255,0,100,150));
    painter.drawPie(QRect(-125,-125,250,250),-145*16,-index*16);
}

void Widget::mousePressEvent(QMouseEvent *event)
{


}

void Widget::btn_speed_up()
{
    timer->start(30);
}
