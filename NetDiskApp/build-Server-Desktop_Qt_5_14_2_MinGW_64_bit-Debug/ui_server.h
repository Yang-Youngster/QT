/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QLabel *label;
    QTextBrowser *showInfo;
    QLabel *label_2;

    void setupUi(QWidget *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName(QString::fromUtf8("server"));
        server->resize(800, 600);
        label = new QLabel(server);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 0, 171, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        showInfo = new QTextBrowser(server);
        showInfo->setObjectName(QString::fromUtf8("showInfo"));
        showInfo->setGeometry(QRect(-5, 151, 811, 451));
        QFont font1;
        font1.setPointSize(14);
        showInfo->setFont(font1);
        label_2 = new QLabel(server);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 70, 171, 61));
        QFont font2;
        font2.setPointSize(18);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QWidget *server)
    {
        server->setWindowTitle(QCoreApplication::translate("server", "server", nullptr));
        label->setText(QCoreApplication::translate("server", "\350\202\245\350\202\240\346\225\231\344\270\273", nullptr));
        label_2->setText(QCoreApplication::translate("server", "\346\234\215\345\212\241\347\253\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
