/********************************************************************************
** Form generated from reading UI file 'netdiskapp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETDISKAPP_H
#define UI_NETDISKAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetdiskApp
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *textEdit;
    QLineEdit *own_title_left;
    QLineEdit *own_title_right;
    QLineEdit *own_title_calculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetdiskApp)
    {
        if (NetdiskApp->objectName().isEmpty())
            NetdiskApp->setObjectName(QString::fromUtf8("NetdiskApp"));
        NetdiskApp->resize(1062, 651);
        centralwidget = new QWidget(NetdiskApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 1071, 591));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(horizontalLayoutWidget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout_6->addWidget(textEdit);

        own_title_left = new QLineEdit(centralwidget);
        own_title_left->setObjectName(QString::fromUtf8("own_title_left"));
        own_title_left->setGeometry(QRect(0, 0, 171, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        own_title_left->setFont(font);
        own_title_right = new QLineEdit(centralwidget);
        own_title_right->setObjectName(QString::fromUtf8("own_title_right"));
        own_title_right->setGeometry(QRect(890, 0, 171, 51));
        own_title_right->setFont(font);
        own_title_calculator = new QLineEdit(centralwidget);
        own_title_calculator->setObjectName(QString::fromUtf8("own_title_calculator"));
        own_title_calculator->setGeometry(QRect(390, 0, 211, 51));
        own_title_calculator->setFont(font);
        own_title_calculator->setLayoutDirection(Qt::LeftToRight);
        own_title_calculator->setAlignment(Qt::AlignCenter);
        NetdiskApp->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NetdiskApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NetdiskApp->setStatusBar(statusbar);

        retranslateUi(NetdiskApp);

        QMetaObject::connectSlotsByName(NetdiskApp);
    } // setupUi

    void retranslateUi(QMainWindow *NetdiskApp)
    {
        NetdiskApp->setWindowTitle(QCoreApplication::translate("NetdiskApp", "NetdiskApp", nullptr));
        own_title_left->setText(QCoreApplication::translate("NetdiskApp", "\350\202\245\350\202\240\346\225\231\344\270\273\345\207\272\345\223\201", nullptr));
        own_title_right->setText(QCoreApplication::translate("NetdiskApp", "\350\202\245\350\202\240\346\225\231\344\270\273\345\207\272\345\223\201", nullptr));
        own_title_calculator->setText(QCoreApplication::translate("NetdiskApp", "APP-Sever", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetdiskApp: public Ui_NetdiskApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDISKAPP_H
