#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //初始化
    this->setLayout(ui->verticalLayoutTotal);
    ui->btnStopListen->setEnabled(false);
    ui->btnSend->setEnabled(false);
    ui->lineEditPort->setText("8888");
    ui->textEditSend->setText("Hello_World");
    hexIndex = 0;


    server = new QTcpServer(this);


    QList<QHostAddress> IPs = QNetworkInterface::allAddresses();
    for(int i=0;i<IPs.size();i++){
        if(IPs[i].protocol() == QAbstractSocket::IPv4Protocol){
            ui->comboBoxServerIP->addItem(IPs[i].toString());
        }
    }

    QObject::connect(ui->btnBeginListen,SIGNAL(clicked(bool)),this,SLOT(btn_begin_listen()));
    QObject::connect(server,SIGNAL(newConnection()),this,SLOT(new_server_connect()));
    QObject::connect(ui->btnClearRev,SIGNAL(clicked(bool)),this,SLOT(btn_clear_rev()));
    QObject::connect(ui->btnSend,SIGNAL(clicked(bool)),this,SLOT(btn_send()));
    QObject::connect(ui->comboBoxClient,SIGNAL(my_comboBox_pressed()),this,SLOT(myComboBox_refresh()));
    QObject::connect(ui->btnStopListen,SIGNAL(clicked(bool)),this,SLOT(btn_stop_listen()));
    QObject::connect(ui->btnSaveRev,SIGNAL(clicked(bool)),this,SLOT(btn_save_rev()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::btn_begin_listen()
{
    ui->btnBeginListen->setEnabled(false);
    ui->btnStopListen->setEnabled(true);
    ui->btnSend->setEnabled(true);


    QHostAddress IP(ui->comboBoxServerIP->currentText());
    int port = ui->lineEditPort->text().toInt();

    bool check = server->listen(IP,port);
    if(check){
        qDebug() << "listenning!";
    }
    else{
        int ret = QMessageBox::warning(this,tr("错误"),tr("端口可能被占用"),QMessageBox::Ok);
        ui->btnBeginListen->setEnabled(true);
    }
}

void Widget::new_server_connect()
{
    qDebug() << "connect!";
    if(server->hasPendingConnections()){    //如果存在在等待的连接
        QTcpSocket *newConnect = new QTcpSocket(this);
        newConnect = server->nextPendingConnection();   //获得一个TCP连接的通道
        QString connectData = "IP: "+newConnect->peerAddress().toString()+'\n'+"Port: "+QString::number(newConnect->peerPort());
        myComboBox_refresh();
        ui->textEditRev->append(connectData);
        QObject::connect(newConnect,SIGNAL(readyRead()),this,SLOT(on_ready_read()));    //如果newConnect接收到信号，触发信号与槽，调用on ready read函数
        QObject::connect(newConnect,SIGNAL(disconnected()),this,SLOT(on_connect_dis()));
        QObject::connect(newConnect,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(connect_state_changed(QAbstractSocket::SocketState)));
        QObject::connect(ui->btnHexSend,SIGNAL(clicked(bool)),this,SLOT(btn_hex_send()));
    }
    else{
        //Tcp连接失败
        qDebug() << "Tcp Connnect ERROR";
    }
}

void Widget::on_ready_read()
{
    QTcpSocket *newConnect = qobject_cast<QTcpSocket*>(sender());
    QString data = newConnect->readAll();
    ui->textEditRev->append("客户端： "+data);
    ui->textEditRev->moveCursor(QTextCursor::End);
}

void Widget::btn_clear_rev()
{
    ui->textEditRev->clear();
}

void Widget::connect_state_changed(QAbstractSocket::SocketState state)
{
    QTcpSocket *disConnect = qobject_cast<QTcpSocket*>(sender());
    int ret = state;
    switch(ret){
    case QAbstractSocket::UnconnectedState:
        ui->textEditRev->append("客户端连接已断开");
        disConnect->deleteLater();      //如果连接断开，释放连接
        myComboBox_refresh();
        break;
    }
}

void Widget::btn_send()
{
    QList<QTcpSocket*> clients = server->findChildren<QTcpSocket*>();
    if(ui->comboBoxClient->currentText() == "ALL"){
        for(int i=0;i<clients.size();i++){
            const char* sendData = ui->textEditSend->toPlainText().toStdString().c_str();
            clients[i]->write(sendData);
        }
    }
    else if(clients.size() != 0){
        int index = 0;
        int aim = ui->comboBoxClient->currentText().toInt();
        for(int i=0;i<clients.size();i++){
            if(clients[i]->peerPort() == aim){
                index = i;
                break;
            }
        }
        const char* sendData = ui->textEditSend->toPlainText().toStdString().c_str();
        clients[index]->write(sendData);
    }
    else{
        qDebug() << "quit";
        return ;
    }
}

void Widget::myComboBox_refresh()
{
    ui->comboBoxClient->clear();
    QList<QTcpSocket*> clients = server->findChildren<QTcpSocket*>();
    for(int i=0;i<clients.size();i++){
        ui->comboBoxClient->addItem(QString::number(clients[i]->peerPort()));
    }
    ui->comboBoxClient->addItem("ALL");
}

void Widget::btn_stop_listen()
{
    QList<QTcpSocket*> clients = server->findChildren<QTcpSocket*>();
    for(int i=0;i<clients.size();i++){
        clients[i]->close();
        clients[i]->deleteLater();
    }
    server->close();
    ui->btnBeginListen->setEnabled(true);
    ui->btnStopListen->setEnabled(false);
    ui->btnSend->setEnabled(false);
}

void Widget::btn_save_rev()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("保存文件路径"),"D:/",tr("文本文件 (*.txt)"));
    QFile file(fileName);
    bool check = file.open(QIODevice::WriteOnly);
    if(check){
        QTextStream in(&file);
        QString temp = ui->textEditRev->toPlainText();
        in << temp;
    }
    else{
        qDebug() << "SaveFile ERROR";
    }
    file.close();
}

void Widget::btn_hex_send()
{
    qDebug() << "HEX";
    if(hexIndex == 0){
        hexIndex = 1;
        ui->btnHexSend->setText("普通发送");
    }
    else{
        hexIndex = 0;
        ui->btnHexSend->setText("HEX发送");
    }
}

void Widget::on_btnHexSend_clicked()
{
    if(hexIndex == 0){
        hexIndex = 1;
        ui->btnHexSend->setText("普通发送");
    }
    else{
        hexIndex = 0;
        ui->btnHexSend->setText("HEX发送");
    }
}
