/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *account;
    QLineEdit *password;
    QPushButton *login;

    void setupUi(QWidget *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QString::fromUtf8("client"));
        client->resize(732, 418);
        client->setLayoutDirection(Qt::LeftToRight);
        label = new QLabel(client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 370, 181, 41));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(client);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 0, 131, 51));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(client);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 140, 121, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(client);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 210, 121, 31));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        account = new QLineEdit(client);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(270, 140, 211, 41));
        QFont font1;
        font1.setPointSize(16);
        account->setFont(font1);
        password = new QLineEdit(client);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(270, 200, 211, 41));
        password->setFont(font1);
        password->setEchoMode(QLineEdit::Password);
        login = new QPushButton(client);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(290, 290, 151, 41));
        QFont font2;
        font2.setPointSize(20);
        login->setFont(font2);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QWidget *client)
    {
        client->setWindowTitle(QCoreApplication::translate("client", "client", nullptr));
        label->setText(QCoreApplication::translate("client", "\344\275\234\350\200\205\357\274\232\350\202\245\350\202\240\346\225\231\344\270\273", nullptr));
        label_2->setText(QCoreApplication::translate("client", "\345\256\242\346\210\267\347\253\257", nullptr));
        label_3->setText(QCoreApplication::translate("client", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("client", "\345\257\206\347\240\201\357\274\232", nullptr));
        login->setText(QCoreApplication::translate("client", "\347\231\273 \345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
