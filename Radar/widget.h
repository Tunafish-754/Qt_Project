#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QBrush>
#include <QLinearGradient>
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

    void paintEvent(QPaintEvent *event) override;

public slots:
    void on_btn_radar();

private:
    Ui::Widget *ui;
    int index;
    int check;
    QTimer *timer;
};
#endif // WIDGET_H
