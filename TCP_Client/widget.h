#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkInterface>
#include <QList>
#include <QDebug>
#include <QTcpSocket>
#include <QMessageBox>
#include <QTimer>

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
    void comboBox_refresh_IP();
    void btn_connect_server();
    void btn_close_connect();
    void btn_send();
    void on_rev_data();
    void client_connected();
    void client_connect_error(QAbstractSocket::SocketError);


private:
    Ui::Widget *ui;
    QTcpSocket *client;
    QTimer *timer;
};
#endif // WIDGET_H
