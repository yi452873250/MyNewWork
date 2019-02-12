/********************************************************************************
** Form generated from reading UI file 'MyMessageBox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGEBOX_H
#define UI_MYMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyMessageBox
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *bt_cancel;
    QLabel *label_2;
    QPushButton *bt_cancel_2;

    void setupUi(QDialog *MyMessageBox)
    {
        if (MyMessageBox->objectName().isEmpty())
            MyMessageBox->setObjectName(QStringLiteral("MyMessageBox"));
        MyMessageBox->resize(338, 220);
        MyMessageBox->setMinimumSize(QSize(338, 220));
        MyMessageBox->setMaximumSize(QSize(338, 220));
        pushButton = new QPushButton(MyMessageBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 140, 191, 41));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/buttonyes.png);"));
        label = new QLabel(MyMessageBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 251, 20));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        bt_cancel = new QPushButton(MyMessageBox);
        bt_cancel->setObjectName(QStringLiteral("bt_cancel"));
        bt_cancel->setGeometry(QRect(350, 20, 31, 23));
        bt_cancel->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/Login/close.png);"));
        label_2 = new QLabel(MyMessageBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 338, 220));
        label_2->setMinimumSize(QSize(338, 220));
        label_2->setMaximumSize(QSize(338, 220));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/DialogLogin/images/Mwbk.png")));
        label_2->setScaledContents(true);
        bt_cancel_2 = new QPushButton(MyMessageBox);
        bt_cancel_2->setObjectName(QStringLiteral("bt_cancel_2"));
        bt_cancel_2->setGeometry(QRect(290, 10, 31, 23));
        bt_cancel_2->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Login/close.png);"));
        label_2->raise();
        pushButton->raise();
        label->raise();
        bt_cancel->raise();
        bt_cancel_2->raise();

        retranslateUi(MyMessageBox);

        QMetaObject::connectSlotsByName(MyMessageBox);
    } // setupUi

    void retranslateUi(QDialog *MyMessageBox)
    {
        MyMessageBox->setWindowTitle(QApplication::translate("MyMessageBox", "MyMessageBox", 0));
        pushButton->setText(QString());
        label->setText(QApplication::translate("MyMessageBox", "\346\217\220\347\244\272", 0));
        bt_cancel->setText(QString());
        label_2->setText(QString());
        bt_cancel_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyMessageBox: public Ui_MyMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGEBOX_H
