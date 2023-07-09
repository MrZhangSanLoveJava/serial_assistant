#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QSerialPortInfo"
#include "QSerialPort"
#include "QMessageBox"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QSerialPort* serialPort = nullptr;

    Widget(QWidget *parent = nullptr);
    ~Widget();

    void openLinkSerialportSlot();      // 打开连接串口通讯槽
    void closeLinkSerialportSlot();     // 关闭连接串口通讯槽
    void sendDataSerialporrtSlot();     // 数据发送槽
    void readDataSerialportSlot();      // 接收数据槽
    void clearDataSerialportSlot();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
