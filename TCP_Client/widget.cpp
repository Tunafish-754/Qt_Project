#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayoutTotal);
    this->setWindowIconText("网络调试助手——客户端");
    ui->lineEditPort->setText("8888");

    ui->btnClose->setEnabled(false);
    ui->btnSend->setEnabled(false);

    client = new QTcpSocket(this);
    timer = new QTimer(this);

    QList<QHostAddress> IPs = QNetworkInterface::allAddresses();
    for(int i=0;i<IPs.size();i++){
        if(IPs[i].protocol() == QAbstractSocket::IPv4Protocol){
            ui->comboBoxIP->addItem(IPs[i].toString());
        }
    }

    QObject::connect(ui->comboBoxIP,SIGNAL(refreshIP()),this,SLOT(comboBox_refresh_IP()));
    QObject::connect(ui->btnConnect,SIGNAL(clicked()),this,SLOT(btn_connect_server()));
    QObject::connect(ui->btnClose,SIGNAL(clicked(bool)),this,SLOT(btn_close_connect()));
    QObject::connect(client,SIGNAL(readyRead()),this,SLOT(on_rev_data()));
    QObject::connect(ui->btnSend,SIGNAL(clicked(bool)),this,SLOT(btn_send()));
    QObject::connect(client,SIGNAL(connected()),this,SLOT(client_connected()));
    QObject::connect(client,SIGNAL(errorOccurred(QAbstractSocket::SocketError)),this,SLOT(client_connect_error(QAbstractSocket::SocketError)));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::comboBox_refresh_IP()
{
    ui->comboBoxIP->clear();
    QList<QHostAddress> IPs = QNetworkInterface::allAddresses();
    for(int i=0;i<IPs.size();i++){
        if(IPs[i].protocol() == QAbstractSocket::IPv4Protocol){
            ui->comboBoxIP->addItem(IPs[i].toString());
        }
    }
}

void Widget::btn_connect_server()
{
    QHostAddress nowIP(ui->comboBoxIP->currentText());
    client->connectToHost(nowIP,ui->lineEditPort->text().toInt());
    this->setEnabled(false);
    timer->start(2000);
}

void Widget::client_connected()
{
    this->setEnabled(true);
    QString connectedData = " IP: "+client->peerAddress().toString() + " " + "Port: " +QString::number(client->peerPort());
    qDebug() << "connected!";
    ui->textEditRev->append("连接成功"+connectedData);
    QString IP = client->peerAddress().toString();
    QString Port = QString::number(client->peerPort());
    qDebug() << IP << Port;
    ui->comboBoxIP->setEnabled(false);
    ui->btnConnect->setEnabled(false);
    ui->btnSend->setEnabled(true);
    ui->btnClose->setEnabled(true);
    ui->lineEditPort->setEnabled(false);

}

void Widget::client_connect_error(QAbstractSocket::SocketError)
{
    this->setEnabled(true);
    qDebug()<<"connecting";
    QMessageBox::warning(this,tr("错误！"),tr("连接错误"),QMessageBox::Ok);
}

void Widget::btn_close_connect()
{
    client->close();
    ui->textEditRev->append("连接已断开");
    ui->comboBoxIP->setEnabled(true);
    ui->btnClose->setEnabled(false);
    ui->btnConnect->setEnabled(true);
    ui->btnSend->setEnabled(false);
    ui->lineEditPort->setEnabled(true);
}

void Widget::btn_send()
{
    QString sendData = ui->textEditSend->toPlainText();
    QByteArray send = sendData.toUtf8();
    sendData = "客户端： " + sendData;
    ui->textEditRev->append("<p style=color:blue>"+sendData);
    client->write(send);
}

void Widget::on_rev_data()
{
    QString revData = "服务端： " + client->readAll();
    ui->textEditRev->append("<p style=color:red>"+revData);
}
