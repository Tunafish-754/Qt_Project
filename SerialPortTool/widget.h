#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QString>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTime>
#include <QMessageBox>
#include <QCheckBox>
#include <QTimer>
#include <QFile>
#include <QFileDialog>
#include <QByteArray>
#include <mycombobox.h>
#include <QList>
#include <QPushButton>

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

public slots:
    void btn_open_serialPort();
    void btn_send_data();
    void on_serialPort_rev();
    void checkbox_send(bool check);
    void btn_clear_rev();
    void btn_save_rev();
    void checkbox_HEX_show(bool check);
    void btn_hide_show(bool check);
    void btn_hideRecord_show(bool check);
    void now_btn_send();
    void checkBox_cir(bool check);
    void cir_send_out();
    void btn_reset();
    void btn_save_set();
    void btn_load_set();

private:
    Ui::Widget *ui;
    QSerialPort *serialPort;
    int sendCntTotal;
    int readCntTotal;
    QString lastSend;
    bool openBtn;
    QTimer *timer;
    QTimer *clock;
    QTimer *refreshSerialPort;
    QTimer *cirSend;
    int sendIndex;
    QList<QPushButton*> btns;
};
#endif // WIDGET_H
