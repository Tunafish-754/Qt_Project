#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->gridLayoutTotal);
    QTime currentTime;
    currentTime = QTime::currentTime();
    QString time = currentTime.toString();
    ui->labelDate->setText(time);

    //参数初始化
    serialPort = new QSerialPort(this);
    timer = new QTimer(this);
    clock = new QTimer(this);
    refreshSerialPort = new QTimer(this);
    cirSend = new QTimer(this);
    sendCntTotal = 0;
    readCntTotal = 0;
    lastSend = "";
    openBtn = false;
    sendIndex = 0;

    clock->start(500);
//    refreshSerialPort->start(1000);


    //控件初始化
    ui->BtnSend->setEnabled(false);
    ui->checkBoxSend->setEnabled(false);
    ui->lineEditMS->setEnabled(false);
    ui->lineEditMS->setEnabled(false);
    ui->checkBoxAutoChangeLine->setChecked(true);

    ui->comboBoxSerialBaud->setCurrentIndex(7);
    ui->comboBoxSerialData->setCurrentIndex(3);
    ui->lineEditMS->setText("1000");
    ui->lineEditSend->setText("Hello World!");

    QList<QSerialPortInfo> serialPs = QSerialPortInfo::availablePorts();
    for(QSerialPortInfo serialP : serialPs){
        qDebug() << serialP.portName();
        ui->comboBoxSerial->addItem(serialP.portName());
    }

    //实现串口调试助手左上方多文本
//    QList<QPushButton*> btns;
    for(int i = 1;i <= 9; i++){
        QString strBtn = QString("pushButton_%1").arg(i);
        QPushButton *nowBtn = findChild<QPushButton*>(strBtn);//根据控件的名字找到该控件
        btns.append(nowBtn);
        nowBtn->setProperty("ID",i);
        QObject::connect(nowBtn,SIGNAL(clicked(bool)),this,SLOT(now_btn_send()));
    }


    QObject::connect(ui->BtnOpenClose,SIGNAL(clicked(bool)),this,SLOT(btn_open_serialPort()));
    QObject::connect(ui->BtnSend,SIGNAL(clicked(bool)),this,SLOT(btn_send_data()));
    QObject::connect(serialPort,&QSerialPort::readyRead,this,&Widget::on_serialPort_rev);
    QObject::connect(ui->checkBoxSend,SIGNAL(clicked(bool)),this,SLOT(checkbox_send(bool)));
    QObject::connect(timer,&QTimer::timeout,[=](){
        btn_send_data();
    });
    QObject::connect(ui->BtnClear,SIGNAL(clicked(bool)),this,SLOT(btn_clear_rev()));
    QObject::connect(ui->BtnSaveRev,SIGNAL(clicked(bool)),this,SLOT(btn_save_rev()));
    QObject::connect(clock,&QTimer::timeout,[=](){          //用于右下角显示时间
        QDateTime time = QDateTime::currentDateTime();
        QTime t = time.time();
        QDate d = time.date();
        int year = d.year();
        int month = d.month();
        int day = d.day();
        QString date = QString("%1-%2-%3").arg(year).arg(month).arg(day);
        QString currentTime = t.toString();
        currentTime = date + ' ' + currentTime;
        ui->labelDate->setText(currentTime);
    });
    QObject::connect(ui->checkBoxHEXShow,SIGNAL(clicked(bool)),this,SLOT(checkbox_HEX_show(bool)));
    QObject::connect(ui->BtnHideM,SIGNAL(clicked(bool)),this,SLOT(btn_hide_show(bool)));
    QObject::connect(ui->BtnHideRecord,SIGNAL(clicked(bool)),this,SLOT(btn_hideRecord_show(bool)));
    QObject::connect(ui->comboBoxSerial,&MyComboBox::refresh,[=](){
        ui->comboBoxSerial->clear();
        QList<QSerialPortInfo> serialPorts = QSerialPortInfo::availablePorts();
        for(QSerialPortInfo p:serialPorts){
            ui->comboBoxSerial->addItem(p.portName());
        }
    });
    QObject::connect(ui->checkBoxCir,SIGNAL(clicked(bool)),this,SLOT(checkBox_cir(bool)));
    QObject::connect(cirSend,&QTimer::timeout,this,&Widget::cir_send_out);
    QObject::connect(ui->btnReset,SIGNAL(clicked(bool)),SLOT(btn_reset()));
    QObject::connect(ui->btnSave,SIGNAL(clicked(bool)),this,SLOT(btn_save_set()));
    QObject::connect(ui->btnLoad,SIGNAL(clicked(bool)),this,SLOT(btn_load_set()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::btn_open_serialPort()
{

    if(openBtn == false){

        serialPort->setPortName(ui->comboBoxSerial->currentText());
        serialPort->setBaudRate(ui->comboBoxSerialBaud->currentText().toInt());
        serialPort->setDataBits(QSerialPort::DataBits(ui->comboBoxSerialData->currentText().toInt()));

        switch(ui->comboBoxSerialCheck->currentIndex()){
        case 0:
            serialPort->setParity(QSerialPort::Parity(0));
            break;
        case 1:
            serialPort->setParity(QSerialPort::Parity(2));
            break;
        case 2:
            serialPort->setParity(QSerialPort::Parity(3));
            break;
        case 3:
            serialPort->setParity(QSerialPort::Parity(4));
            break;
        case 4:
            serialPort->setParity(QSerialPort::Parity(5));
            break;
        }

        switch(ui->comboBoxSerialStop->currentIndex()){
        case 0:
            serialPort->setStopBits(QSerialPort::StopBits(1));
            break;
        case 1:
            serialPort->setStopBits(QSerialPort::StopBits(3));//有bug！别用
            break;
        case 2:
            serialPort->setStopBits(QSerialPort::StopBits(2));
            break;
        }

        bool check = serialPort->open(QIODevice::ReadWrite);
        if(check){
            qDebug() << "Open successfully!";
            openBtn = true;
            ui->comboBoxSerial->setEnabled(false);
            ui->comboBoxSerialBaud->setEnabled(false);
            ui->comboBoxSerialCheck->setEnabled(false);
            ui->comboBoxSerialData->setEnabled(false);
            ui->comboBoxSerialStop->setEnabled(false);
            ui->comboBoxSerialStream->setEnabled(false);
            ui->BtnSend->setEnabled(true);

            ui->checkBoxSend->setEnabled(true);
            ui->lineEditMS->setEnabled(true);
            ui->lineEditSend->setEnabled(true);

            ui->BtnOpenClose->setText("关闭串口");
        }
        else{
            qDebug() << "Error";
            QMessageBox::warning(this,tr("错误"),tr("串口打开失败，请检查串口是否被其他应用程序占用！"),QMessageBox::Ok);
        }
    }
    else{
        openBtn = false;
        serialPort->close();
        ui->BtnOpenClose->setText("打开串口");
        ui->BtnSend->setEnabled(false);
        ui->comboBoxSerial->setEnabled(true);
        ui->comboBoxSerialBaud->setEnabled(true);
        ui->comboBoxSerialCheck->setEnabled(true);
        ui->comboBoxSerialData->setEnabled(true);
        ui->comboBoxSerialStop->setEnabled(true);
        ui->comboBoxSerialStream->setEnabled(true);


        ui->checkBoxSend->setEnabled(false);
        ui->lineEditMS->setEnabled(false);
        ui->lineEditSend->setEnabled(false);
    }
}

void Widget::btn_send_data()
{
    if(ui->checkBoxHEXSend->isChecked() == true){   //如果勾选了16进制发送，则将发送16进制的数据,此时用户输入的因该是16进制的数据
        QString temp = ui->lineEditSend->text();
        QByteArray hexSend = temp.toUtf8();
        if(temp.size()%2 != 0){                     //判断用户输入的是否为正确的16进制的数据
            QMessageBox::warning(this,tr("错误"),tr("请输入正确的16进制数"),QMessageBox::Ok);
            return ;
        }
        for(char c : hexSend){
            if(std::isxdigit(c) == false){
                QMessageBox::warning(this,tr("错误"),tr("请输入正确的16进制数"),QMessageBox::Ok);
                return ;
            }
        }

        hexSend = QByteArray::fromHex(hexSend);         //如果用户输入了正确的16进制数据，则发送数据
        int check = serialPort->write(hexSend);
        if(check != -1){
            qDebug() << "Success to send Hex!";
            sendCntTotal += check;
            ui->labelSend->setText("Send OK!");
            ui->labelSendNum->setNum(sendCntTotal);
        }
        else{
            qDebug() << "Hex Send Error!";
            ui->labelSend->setText("Send Error!");
        }
        if(temp != lastSend){
            ui->textEditRecord->append(temp);
            lastSend = temp;
        }
    }
    else{
        const char *sendData = ui->lineEditSend->text().toStdString().c_str();
        QString cmp = ui->lineEditSend->text();
        QByteArray sendArray = cmp.toUtf8();
        if(ui->checkBoxSendNewLine->isChecked() == true){
            sendArray += "\r\n";
        }

        int check = serialPort->write(sendArray);
        if(check != -1){
            qDebug() << "Success to send!";
            sendCntTotal += check;
            ui->labelSend->setText("Send OK!");
            ui->labelSendNum->setNum(sendCntTotal);
        }
        else{
            qDebug() << "Error to send!";
            ui->labelSend->setText("Send Error!");
        }
        if(cmp != lastSend){
            ui->textEditRecord->append(sendData);
            lastSend = cmp;
        }
    }
}

void Widget::on_serialPort_rev()        //接受内容
{
    qDebug() << "Recieve message!";
    QString revData = serialPort->readAll();
    if(revData != ""){

        if(ui->checkBoxHEXShow->isChecked() == true){
            QByteArray temp = revData.toUtf8().toHex(); //如果已经勾选Hex，则将接收到的数据也转换为Hex格式
            QString OriginalData = ui->textEditRev->toPlainText();
            QString now = OriginalData + QString::fromUtf8(temp);
            ui->textEditRev->setText(now);
        }
        else{
            if(ui->checkBoxAutoChangeLine->isChecked()==true){
                ui->textEditRev->append(revData);
            }
            else{
                ui->textEditRev->insertPlainText(revData);
            }
            readCntTotal += revData.size();
            ui->labelRev->setNum(readCntTotal);
        }
    }
    ui->textEditRev->moveCursor(QTextCursor::End);

}


void Widget::checkbox_send(bool check)
{
//    qDebug() << "checkbox is: " << check;
    if(check == true){
        int ms = ui->lineEditMS->text().toInt();
        timer->start(ms);
        ui->lineEditMS->setEnabled(false);
        ui->lineEditSend->setEnabled(false);
        ui->BtnSend->setEnabled(false);
    }
    else{
        timer->stop();
        ui->lineEditMS->setEnabled(true);
        ui->lineEditSend->setEnabled(true);
        ui->BtnSend->setEnabled(true);
    }
}

void Widget::btn_clear_rev()    //清空接收的信息
{
    ui->textEditRev->clear();
}

void Widget::btn_save_rev()     //保存接收的信息
{
    QString revString = ui->textEditRev->toPlainText();
    if(revString.size() != 0){
        QString fileName = QFileDialog::getSaveFileName(this,tr("保存文件"),"D:/",tr("Text (*.txt)"));
        QFile file(fileName);
        bool check = file.open(QIODevice::ReadWrite);
        if(check == true){
            qDebug() << "file is open successfully!";
        }
        else{
            qDebug() << "Error";
        }
        QTextStream write(&file);
    //    QString revString = ui->textEditRev->toPlainText();
        write << revString;
        file.close();
    }
    else{
        QMessageBox::warning(this,tr("错误！"),tr("无法保存空内容，请重新尝试！"),QMessageBox::Ok);
    }
}

void Widget::checkbox_HEX_show(bool check) //十六进制显示
{
    if(check == true){
        QString temp = ui->textEditRev->toPlainText();
        QByteArray hexByteArray = temp.toUtf8();
        hexByteArray = hexByteArray.toHex();
        QString show;
        QString tp = QString::fromUtf8(hexByteArray);
        for(int i=0;i<tp.size();i+=2){
            show = show + tp.mid(i,2) + ' ';
        }
        ui->textEditRev->setText(show.toUpper());
    }
    else{
        QString temp = ui->textEditRev->toPlainText();
        QByteArray decByteArray = temp.toUtf8();
        decByteArray = QByteArray::fromHex(decByteArray);
        ui->textEditRev->setText(QString::fromUtf8(decByteArray));
    }
}

void Widget::btn_hide_show(bool check)
{
    if(check == true){
        ui->BtnHideM->setText("展开面板");
        ui->groupBoxText->hide();
    }
    else{
        ui->BtnHideM->setText("隐藏面板");
        ui->groupBoxText->show();
    }
}

void Widget::btn_hideRecord_show(bool check)
{
    if(check == true){
        ui->BtnHideRecord->setText("展开历史");
        ui->groupBoxRecord->hide();
    }
    else{
        ui->BtnHideRecord->setText("隐藏历史");
        ui->groupBoxRecord->show();
    }
}

void Widget::now_btn_send()
{
    QPushButton *btnSend = qobject_cast<QPushButton*>(sender());
    int num = btnSend->property("ID").toInt();
//    qDebug() << num ;
    QString lineEditName = QString("lineEdit_%1").arg(num);
    QString checkBoxName = QString("checkBox_%1").arg(num);
    QLineEdit *nowLineEdit = findChild<QLineEdit*>(lineEditName);
    QCheckBox *nowCheckBox = findChild<QCheckBox*>(checkBoxName);

    if(nowLineEdit->text().size() == 0){
        return ;
    }

    ui->lineEditSend->setText(nowLineEdit->text());
    ui->checkBoxHEXSend->setChecked(nowCheckBox->isChecked());
    if(openBtn == false){
        QMessageBox::warning(this,tr("错误"),tr("串口未打开，无法发送"),QMessageBox::Ok);
        return ;
    }
    btn_send_data();
}

void Widget::cir_send_out()
{
    sendIndex = (sendIndex%btns.size());
    QPushButton *nowBtn = btns[sendIndex];
    emit nowBtn->clicked();
    sendIndex++;
}

void Widget::checkBox_cir(bool check)
{
    if(check){
        cirSend->start(ui->spinBox->text().toInt());
        ui->spinBox->setEnabled(false);
    }
    else{
        cirSend->stop();
        ui->spinBox->setEnabled(true);
    }
}

void Widget::btn_reset()
{
    int ret = QMessageBox::question(this,tr("提示"),tr("重置后不可恢复，请问是否重置"),QMessageBox::Ok,QMessageBox::Cancel);
    switch(ret){
    case QMessageBox::Ok:
        for(int i = 1;i <= 9; i++){
            QString lineEditName = QString("lineEdit_%1").arg(i);
            QString checkBoxName = QString("checkBox_%1").arg(i);
            QLineEdit *nowLineEdit = findChild<QLineEdit*>(lineEditName);
            QCheckBox *nowCheckBox = findChild<QCheckBox*>(checkBoxName);
            nowLineEdit->clear();
            nowCheckBox->setChecked(false);
        }
        break;
    case QMessageBox::Cancel:
        qDebug() << "cancel!";
        break;
    }
}

void Widget::btn_save_set()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("保存文件"),"D:/",tr("文本文件 (*.txt)"));
    QFile file(fileName);
    bool check = file.open(QIODevice::ReadWrite);
    if(check == true){
        qDebug() <<"Begin to save";
        QTextStream in(&file);
        for(int i=1;i<=9;i++){
            QString lineEditName = QString("lineEdit_%1").arg(i);
            QString checkBoxName = QString("checkBox_%1").arg(i);
            QLineEdit *nowLineEdit = findChild<QLineEdit*>(lineEditName);
            QCheckBox *nowCheckBox = findChild<QCheckBox*>(checkBoxName);
            qDebug() << "Saving" ;
            in << nowCheckBox->isChecked()<<","<<nowLineEdit->text()<<"\n";   //这句话存在位置的错误
        }
    }
    else{
        qDebug() << "Save file error";
        return ;
    }
    file.close();
}


void Widget::btn_load_set()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("加载文件"),"D:/",tr("文本文件 (*.txt)"));
    QFile file(fileName);
    bool check = file.open(QIODevice::ReadWrite);
    if(check){
        int index = 1;
        QTextStream in(&file);
        while(in.atEnd() == false && index <= 9){
            QString line = in.readLine();
            QStringList lines = line.split(",");
            int ch = lines[0].toInt();
            QString text = lines[1];
            QString checkBoxName = QString("checkBox_%1").arg(index);
            QString lineEditName = QString("lineEdit_%1").arg(index);
            QCheckBox *nowCheckBox = findChild<QCheckBox*>(checkBoxName);
            QLineEdit *nowLineEdit = findChild<QLineEdit*>(lineEditName);
            if(ch == 1){
                nowCheckBox->setChecked(true);
            }
            else{
                nowCheckBox->setChecked(false);
            }
            nowLineEdit->setText(text);
            index++;
        }
    }
    else{
        qDebug() <<"Open file ERROR";
        ui->labelSend->setText("Open file ERROR");
    }

}
