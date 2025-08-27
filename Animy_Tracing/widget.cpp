#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    index = 75;
    starA = 0;
    timer = new QTimer(this);

    timer->start(2);

    connect(timer,&QTimer::timeout,[=](){
        index = (index+1)%360;
        starA = (starA+1)%360;
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    //绘制背景颜色
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setBrush(Qt::black);
    painter.drawRect(rect());

    //将原点偏移到正中心
    painter.translate(rect().center());
    painter.setBrush(Qt::NoBrush);

    //画圆
    int r = 0.6*(rect().height()/2);
    painter.setPen(Qt::green);
    painter.drawEllipse(QPoint(0,0),r,r);

    //话两个扇形，内外同圆心，但是半径与颜色不同
    painter.setBrush(Qt::green);
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-r,-r,2*r,2*r),-index*16,-30*16);

    int rr = 0.75*r;
    painter.setBrush(Qt::black);
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-rr,-rr,2*rr,2*rr),-index*16,-30*16);

    //写字
    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::green);
    QRect rect(-0.4*rr,-(r+0.5*rr),0.8*rr,0.4*rr);
    painter.drawRect(rect);
    QFont font("Consolas",25);
    painter.setFont(font);
    painter.drawText(rect,Qt::AlignCenter,"敌跟踪");

    //绘制刻度
    painter.save();
    QPen pen(QColor(0,255,0,255),3);
    painter.setPen(pen);
    for(int i=1;i<=12;i++){
        painter.drawLine(QPoint(r-1,0),QPoint(r-10,0));
        painter.rotate(30);
    }
    painter.restore();

    painter.setPen(pen);
    painter.drawLine(QPoint(-8,0),QPoint(8,0));
    painter.drawLine(QPoint(0,-8),QPoint(0,8));
    painter.drawEllipse(QPoint(0,0),18,18);


    //绘制虚线
    painter.rotate(starA);
    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);
    painter.drawLine(QPoint(0,r-1),QPoint(0,18));

    qDebug() << sizeof(int);
}
