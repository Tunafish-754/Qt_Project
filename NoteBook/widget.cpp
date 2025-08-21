#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFileDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QObject::connect(ui->BtnSave,SIGNAL(clicked(bool)),this,SLOT(Btn_Save_Click()));
    QObject::connect(ui->BtnClose,&QPushButton::clicked,[=]{
        std::cout << "Close successfully" << std::endl;
    });

    QObject::connect(ui->BtnSet,&QPushButton::clicked,this,&Widget::Btn_Set_Click);
    QObject::connect(ui->BtnOpenFile,SIGNAL(clicked(bool)),this,SLOT(Btn_OpenFile()));

    QObject::connect(ui->BtnWriteFile,SIGNAL(clicked(bool)),this,SLOT(Btn_Write_File()));

    QObject::connect(ui->BtnStreamRead,SIGNAL(clicked(bool)),this,SLOT(Btn_Stream_Read()));

    QObject::connect(ui->BtnSteamWrite,SIGNAL(clicked(bool)),this,SLOT(Btn_Stream_Write()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_pressed()
{
    std::cout << "Open successfully" << std::endl;
}


void Widget::on_pushButton_clicked()
{
    std::cout << "Open successfully 2" << std::endl;
}

void Widget::Btn_Save_Click()
{
    std::cout << "Save successfully" <<std::endl;
}

void Widget::Btn_Set_Click()
{
    std::cout << "Setting" << std::endl;
}

void Widget::Btn_OpenFile()
{
    QFile file("C:/Qt_Project/NoteBook/testFile.txt");
    file.open(QIODevice::ReadWrite);
    int size = file.size();
    char context[size];
    file.read(context,100);
    qDebug() << context;
}

void Widget::Btn_Write_File()
{
    QFile file("C:/Qt_Project/NoteBook/testFile2.txt");
    file.open(QIODevice::ReadWrite);
    bool check = file.write("Push this button will write something on this file,let us do this");
    if(check){
        qDebug() << "write file successfully";
    }
    file.close();
}

void Widget::Btn_Stream_Read()
{
    QFile file("C:/Qt_Project/NoteBook/testFile3.txt");
    bool check = file.open(QIODevice::ReadOnly);
    if(check == true){
        qDebug() << "Open successfully";
    }
    else{
        qDebug() << "ERROR";
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString str = in.readLine();
        qDebug() << str;
    }
}

void Widget::Btn_Stream_Write()
{
    QFile file("C:/Qt_Project/NoteBook/testFile4.txt");
    bool check = file.open(QIODevice::ReadWrite);
    if(check){
        qDebug() << "Open successfully";
    }
    else{
        qDebug() << "ERROR";
        return ;
    }
    QTextStream out(&file);
    out << "Push this button will write something on this file";
}

void Widget::on_BtnFileDialog_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"C:/Qt_Project",tr("Text (*.txt)"));

    QFile file(fileName);
    bool check = file.open(QIODevice::ReadOnly);
    int size = file.size();
    QString str = file.read(size);
    qDebug() << str;
}


void Widget::on_BtnSaveFile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"),"C:/Qt_Project",tr("Test (*.txt)"));
    QFile file(fileName);
    file.open(QIODevice::ReadWrite);
    QTextStream in(&file);
    in <<"Push this button will save a new file";
    file.close();
}

void Widget::closeEvent(QCloseEvent *event)
{
    int ret = QMessageBox::warning(this,tr("关闭"),tr("内容未保存，是否关闭"),QMessageBox::Save,QMessageBox::Ok,QMessageBox::Cancel);
    switch(ret){
    case QMessageBox::Save:
        qDebug() << "save";
        break;
    case QMessageBox::Ok:
        qDebug() << "Ok";
        break;

    case QMessageBox::Cancel:
        qDebug() << "cancel";
    }
}

void Widget::wheelEvent(QWheelEvent *event)
{
    qDebug() << event->angleDelta();
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}

void Widget::enterEvent(QEnterEvent *event)
{
    qDebug() << "mouse in";
}
