#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QShortcut>
#include <QFont>


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

private:
    Ui::Widget *ui;
    QFile file;



private slots:
    void open_file();
    void save_file();
    void close_file();
    int set_code();
    void set_row_column();
    void short_cut_open();
    void short_cut_save();
    void font_Size_Bigger();
    void font_Size_Smaller();

};
#endif // WIDGET_H
