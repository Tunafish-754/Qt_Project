#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    check = 0;
    index = 60;
    timer = new QTimer(this);
    connect(ui->OPenRadar,SIGNAL(clicked(bool)),this,SLOT(on_btn_radar()));
    connect(timer,&QTimer::timeout,[=](){
        index = (index+1)%360;
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
    QBrush brush(Qt::black);
    painter.setBrush(brush);
    painter.drawRect(rect());
    painter.translate(rect().center());
    painter.setBrush(Qt::NoBrush);

    QPen pen(Qt::green,3);
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing,true);
    int R = (rect().height()/2)/6;
    int FR = R*6;
    for(int i=1;i<=6;i++){
        painter.drawEllipse(QPoint(0,0),R*i,R*i);
    }
    painter.drawLine(QPoint(-FR,0),QPoint(FR,0));
    painter.drawLine(QPoint(0,FR),QPoint(0,-FR));

    QConicalGradient coniclGrandient(QPoint(0,0),-index);
    coniclGrandient.setColorAt(0,QColor(0,255,0,255));
    coniclGrandient.setColorAt(0.1,QColor(0,255,0,0));
    coniclGrandient.setColorAt(0.2,QColor(0,255,0,0));

    painter.setBrush(QBrush(coniclGrandient));
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-FR,-FR,2*FR,2*FR),-index*16,60*16);

}

void Widget::on_btn_radar()
{
    if(check == 0){
        timer->start(5);
        check = 1;
    }
    else{
        timer->stop();
        check = 0;
    }
}
