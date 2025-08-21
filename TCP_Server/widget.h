#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QString>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

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

    QTcpServer *server;


public slots:
    void btn_begin_listen();
    void new_server_connect();
    void on_ready_read();
    void btn_clear_rev();
    void connect_state_changed(QAbstractSocket::SocketState);
    void btn_send();
    void myComboBox_refresh();
    void btn_stop_listen();
    void btn_save_rev();
    void btn_hex_send();


private slots:
    void on_btnHexSend_clicked();

private:
    Ui::Widget *ui;
    int hexIndex;

};
#endif // WIDGET_H
