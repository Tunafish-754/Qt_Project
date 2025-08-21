#ifndef WIDGET_H
#define WIDGET_H

#include <QFile>
#include <QWidget>
#include <iostream>
#include <QMessageBox>
#include <QWheelEvent>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public:
    void closeEvent(QCloseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void enterEvent(QEnterEvent *event) override;

private slots:
    void on_pushButton_pressed();

    void on_pushButton_clicked();

    void Btn_Save_Click();

    void Btn_Set_Click();

    void Btn_OpenFile();

    void Btn_Write_File();

    void Btn_Stream_Read();

    void Btn_Stream_Write();

    void on_BtnFileDialog_clicked();

    void on_BtnSaveFile_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
