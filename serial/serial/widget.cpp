#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    serialPort = new QSerialPort(this);

    QStringList serialNamePort;

    foreach(const QSerialPortInfo& info, QSerialPortInfo::availablePorts()){    // 遍历此机器上的串口名
        serialNamePort << info.portName();   // 读取出来的串口名放入QStringList列表中
    }
    ui->serialCb->addItems(serialNamePort);  // 将读取出来的串口名放置在下拉列表中
    connect(serialPort, &QIODevice::readyRead, this, &Widget::readDataSerialportSlot);
    // 连接打开按钮openBt
    connect(ui->openBt, &QPushButton::clicked, this, &Widget::openLinkSerialportSlot);
    // 关闭连接按钮closeBt
    connect(ui->closeBt, &QPushButton::clicked, this, &Widget::closeLinkSerialportSlot);
    // 发送数据按钮sendBt
    connect(ui->sendBt, &QPushButton::clicked, this, &Widget::sendDataSerialporrtSlot);
    // 清空接收框中的内容
    connect(ui->clearBt, &QPushButton::clicked, this, &Widget::clearDataSerialportSlot);
}

/*
当用户点击了按钮后首先需要获取波特率，数据位，停止位，校验位
然后进行连接
*/
void Widget::openLinkSerialportSlot(){
    QSerialPort::BaudRate buad = QSerialPort::Baud115200;     // 波特率
    QSerialPort::DataBits data = QSerialPort::Data8;     // 数据位
    QSerialPort::StopBits stop = QSerialPort::OneStop;     // 停止位
    QSerialPort::Parity parity = QSerialPort::NoParity;     // 检验位

    // 将从下拉框中的值判断出来把相应的内容给上面定义的变量中

    // 波特率
    if (ui->baudCb->currentText() == "4800"){
        buad = QSerialPort::Baud4800;
    }else if (ui->baudCb->currentText() == "9600"){
        buad = QSerialPort::Baud9600;
    }else if (ui->baudCb->currentText() == "115200"){
        buad = QSerialPort::Baud115200;
    }

    // 数据位
    if (ui->dataCb->currentText() == "5"){
        data = QSerialPort::Data5;
    }else if (ui->dataCb->currentText() == "6"){
        data = QSerialPort::Data6;
    }else if (ui->dataCb->currentText() == "7"){
        data = QSerialPort::Data7;
    }else if (ui->dataCb->currentText() == "8"){
        data = QSerialPort::Data8;
    }

    // 停止位
    if (ui->stopCb->currentText() == "1"){
        stop = QSerialPort::OneStop;
    }else if (ui->stopCb->currentText() == "1.5"){
        stop = QSerialPort::OneAndHalfStop;
    }else if (ui->stopCb->currentText() == "2"){
        stop = QSerialPort::TwoStop;
    }

    // 校验位
    if (ui->verifyCb->currentText() == "none"){
        parity = QSerialPort::NoParity;
    }

    // 将获取的内容给之前实例化对象里的属性，有串口号 波特率 停止位 校验位
    serialPort->setPortName(ui->serialCb->currentText());     // 设置端口号
    serialPort->setBaudRate(buad);
    serialPort->setDataBits(data);
    serialPort->setStopBits(stop);
    serialPort->setParity(parity);

    // 打开串口
    if (serialPort->open( QIODevice::ReadWrite) == true){
        // 打开成功
        QMessageBox::warning(this, "提示", "打开串口成功");
    }else{
        QMessageBox::critical(this, "错误", "打开串口失败");
    }
}

void Widget::closeLinkSerialportSlot(){
    serialPort->close() ;   // 关闭打开的状态
}

void Widget::sendDataSerialporrtSlot(){
    QString buf = ui->lineEdit->text();

    serialPort->write(buf.toLocal8Bit().data());    // 将数据发送到串口
    buf = "Client:\n" + buf;
    ui->plainTextEdit->appendPlainText(buf);
}

void Widget::readDataSerialportSlot(){
    QString buf = serialPort->readAll();      // 将接收的内容存放在buf中
    buf = "server:\n" + buf;
    ui->plainTextEdit->appendPlainText(buf);  // 显示在显示框中
}

void Widget::clearDataSerialportSlot(){
    ui->plainTextEdit->clear();
}

Widget::~Widget()
{
    delete ui;
}

