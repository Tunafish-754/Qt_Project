#include "widget.h"
#include "ui_widget.h"
#include <bits/stdc++.h>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);//随结构调整
    ui->LabelWidget->setLayout(ui->horizontalLayout);

    QShortcut *shortcutOpen = new QShortcut(QKeySequence(tr("Ctrl+O","file|Open")),this);
    QShortcut *shortcutSave = new QShortcut(QKeySequence("Ctrl+S"),this);
    QShortcut *fontSizeBigger = new QShortcut(QKeySequence("Ctrl+Shift+="),this);
    QShortcut *fontSizeSmaller = new QShortcut(QKeySequence("Ctrl+Shift+-"),this);

    QObject::connect(ui->BtnOpen,SIGNAL(clicked(bool)),this,SLOT(open_file()));
    QObject::connect(ui->BtnSave,SIGNAL(clicked(bool)),this,SLOT(save_file()));
    QObject::connect(ui->BtnClose,SIGNAL(clicked(bool)),this,SLOT(close_file()));
    QObject::connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(set_code()));
    QObject::connect(ui->textEdit,SIGNAL(cursorPositionChanged()),this,SLOT(set_row_column()));
    QObject::connect(shortcutOpen,SIGNAL(activated()),this,SLOT(short_cut_open()));
    QObject::connect(shortcutSave,SIGNAL(activated()),this,SLOT(short_cut_save()));
    QObject::connect(fontSizeBigger,SIGNAL(activated()),this,SLOT(font_Size_Bigger()));
    QObject::connect(fontSizeSmaller,SIGNAL(activated()),this,SLOT(font_Size_Smaller()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::open_file()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"C:/Qt_Project/NoteBook2/testTXT",tr("Text File(*.txt *.doc *.docx)"));
    file.setFileName(fileName);
    bool check = file.open(QIODevice::ReadWrite);
    if(check == false){
        qDebug() << "Error";
        return ;
    }
    this->setWindowTitle(fileName + " 记事本");
    ui->textEdit->clear();
    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);
    while(!out.atEnd()){
        QString tempStr = out.readLine();
        ui->textEdit->append(tempStr);
    }

}

void Widget::save_file()
{
    if(file.isOpen() == true){
        QTextStream in(&file);
        QString tempStr = ui->textEdit->toPlainText();
        in << tempStr;
        this->setWindowTitle("保存成功！");
        return ;
    }

    QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"),"C:/Qt_Project/NoteBook2/testTXT",tr("Text File(*.txt *.doc *.docx)"));
    file.setFileName(fileName);
    file.open(QIODevice::ReadWrite);
    this->setWindowTitle(fileName + " 记事本");
    QTextStream in(&file);
    QString tempStr = ui->textEdit->toPlainText();
    in << tempStr;
}

void Widget::close_file()
{
    int ret = QMessageBox::warning(this,tr("记事本"),tr("是否将文件保存"),QMessageBox::Save|QMessageBox::Discard|QMessageBox::Close);
    switch(ret){
    case QMessageBox::Save:
        save_file();
        break;
    case QMessageBox::Discard:
        if(file.isOpen() == true){
            ui->textEdit->clear();
            file.close();
        }
        else{
            ui->textEdit->clear();
        }
        break;
    case QMessageBox::Cancel:
        qDebug() << "取消" ;
    }

    ui->textEdit->clear();
    if(file.isOpen() == true){
        file.close();
        this->setWindowTitle("记事本");
    }
}

int Widget::set_code()
{
    if(file.isOpen() == true){
        ui->textEdit->clear();
        file.seek(0);
        QTextStream in(&file);
        int num = ui->comboBox->currentIndex();
        switch(num){
        case 0:
            in.setEncoding(QStringConverter::Utf8);
        case 1:
            in.setEncoding(QStringConverter::Utf16LE);
        case 2:
            in.setEncoding(QStringConverter::Utf16BE);
        }
        while(in.atEnd() == false){
            QString str = in.readLine();
            ui->textEdit->append(str);
        }
    }
    return 0;
}

void Widget::set_row_column()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    int x = cursor.blockNumber() + 1;
    int y = cursor.columnNumber() + 1;
    string str_x = to_string(x);
    string str_y = to_string(y);
    string str = "行: "+ str_x +" "+"列: "+ str_y;
    const QString Qstr = QString::fromStdString(str);
    ui->labelPositon->setText(Qstr);

}

void Widget::short_cut_open()
{
    qDebug() << "shortcunt is being used";
    open_file();
}

void Widget::short_cut_save()
{
    save_file();
}

void Widget::font_Size_Bigger()
{
    QFont font = ui->textEdit->font();
    int fontsize = font.pointSize();
    if(fontsize == -1){
        return ;
    }
    fontsize = fontsize + 1;
    font.setPointSize(fontsize);
    ui->textEdit->setFont(font);
}

void Widget::font_Size_Smaller()
{
    QFont font = ui->textEdit->font();
    int fontsize = font.pointSize();
    if(fontsize == 0){
        return ;
    }
    fontsize = fontsize - 1;
    font.setPointSize(fontsize);
    ui->textEdit->setFont(font);
}
