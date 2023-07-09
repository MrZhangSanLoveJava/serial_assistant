/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *serialCb;
    QLabel *label_2;
    QComboBox *baudCb;
    QLabel *label_3;
    QComboBox *dataCb;
    QLabel *label_4;
    QComboBox *stopCb;
    QLabel *label_5;
    QComboBox *verifyCb;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *openBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *clearBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(726, 399);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        serialCb = new QComboBox(Widget);
        serialCb->setObjectName(QString::fromUtf8("serialCb"));

        gridLayout->addWidget(serialCb, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        baudCb = new QComboBox(Widget);
        baudCb->addItem(QString());
        baudCb->addItem(QString());
        baudCb->addItem(QString());
        baudCb->setObjectName(QString::fromUtf8("baudCb"));

        gridLayout->addWidget(baudCb, 1, 1, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dataCb = new QComboBox(Widget);
        dataCb->addItem(QString());
        dataCb->addItem(QString());
        dataCb->addItem(QString());
        dataCb->addItem(QString());
        dataCb->setObjectName(QString::fromUtf8("dataCb"));

        gridLayout->addWidget(dataCb, 2, 1, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        stopCb = new QComboBox(Widget);
        stopCb->addItem(QString());
        stopCb->addItem(QString());
        stopCb->addItem(QString());
        stopCb->setObjectName(QString::fromUtf8("stopCb"));

        gridLayout->addWidget(stopCb, 3, 1, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        verifyCb = new QComboBox(Widget);
        verifyCb->addItem(QString());
        verifyCb->setObjectName(QString::fromUtf8("verifyCb"));

        gridLayout->addWidget(verifyCb, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 0, 221, 61));
        label_6->setMinimumSize(QSize(180, 20));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);

        verticalLayout->addWidget(groupBox);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openBt = new QPushButton(Widget);
        openBt->setObjectName(QString::fromUtf8("openBt"));

        horizontalLayout->addWidget(openBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBt = new QPushButton(Widget);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));

        horizontalLayout->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sendBt = new QPushButton(Widget);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));

        horizontalLayout->addWidget(sendBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        clearBt = new QPushButton(Widget);
        clearBt->setObjectName(QString::fromUtf8("clearBt"));

        horizontalLayout->addWidget(clearBt);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(Widget);

        baudCb->setCurrentIndex(2);
        dataCb->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        baudCb->setItemText(0, QApplication::translate("Widget", "4800", nullptr));
        baudCb->setItemText(1, QApplication::translate("Widget", "9600", nullptr));
        baudCb->setItemText(2, QApplication::translate("Widget", "115200", nullptr));

        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        dataCb->setItemText(0, QApplication::translate("Widget", "5", nullptr));
        dataCb->setItemText(1, QApplication::translate("Widget", "6", nullptr));
        dataCb->setItemText(2, QApplication::translate("Widget", "7", nullptr));
        dataCb->setItemText(3, QApplication::translate("Widget", "8", nullptr));

        label_4->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        stopCb->setItemText(0, QApplication::translate("Widget", "1", nullptr));
        stopCb->setItemText(1, QApplication::translate("Widget", "1.5", nullptr));
        stopCb->setItemText(2, QApplication::translate("Widget", "2", nullptr));

        label_5->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        verifyCb->setItemText(0, QApplication::translate("Widget", "none", nullptr));

        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("Widget", "\350\207\252\345\210\266\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        clearBt->setText(QApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
