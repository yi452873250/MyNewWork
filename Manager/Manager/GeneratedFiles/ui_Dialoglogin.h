/********************************************************************************
** Form generated from reading UI file 'Dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLoginClass
{
public:
    QWidget *centralWidget;
    QLabel *label_bg;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pwd;
    QPushButton *bt_showpwd;
    QPushButton *bt_Ok;
    QPushButton *bt_Cancel;
    QPushButton *bt_question;

    void setupUi(QMainWindow *DialogLoginClass)
    {
        if (DialogLoginClass->objectName().isEmpty())
            DialogLoginClass->setObjectName(QStringLiteral("DialogLoginClass"));
        DialogLoginClass->resize(640, 480);
        DialogLoginClass->setMinimumSize(QSize(640, 480));
        DialogLoginClass->setMaximumSize(QSize(640, 480));
        centralWidget = new QWidget(DialogLoginClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_bg = new QLabel(centralWidget);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 640, 480));
        label_bg->setMinimumSize(QSize(640, 480));
        label_bg->setMaximumSize(QSize(640, 480));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/DialogLogin/images/Login/lgback.png")));
        label_bg->setScaledContents(true);
        lineEdit_user = new QLineEdit(centralWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(220, 240, 231, 31));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_user->sizePolicy().hasHeightForWidth());
        lineEdit_user->setSizePolicy(sizePolicy);
        lineEdit_user->setFocusPolicy(Qt::StrongFocus);
        lineEdit_user->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_user->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_pwd = new QLineEdit(centralWidget);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));
        lineEdit_pwd->setGeometry(QRect(220, 290, 231, 31));
        sizePolicy.setHeightForWidth(lineEdit_pwd->sizePolicy().hasHeightForWidth());
        lineEdit_pwd->setSizePolicy(sizePolicy);
        lineEdit_pwd->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_pwd->setInputMask(QStringLiteral(""));
        lineEdit_pwd->setEchoMode(QLineEdit::Password);
        bt_showpwd = new QPushButton(centralWidget);
        bt_showpwd->setObjectName(QStringLiteral("bt_showpwd"));
        bt_showpwd->setGeometry(QRect(410, 300, 31, 16));
        bt_showpwd->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Login/pwd1.png);"));
        bt_Ok = new QPushButton(centralWidget);
        bt_Ok->setObjectName(QStringLiteral("bt_Ok"));
        bt_Ok->setGeometry(QRect(220, 340, 231, 41));
        sizePolicy.setHeightForWidth(bt_Ok->sizePolicy().hasHeightForWidth());
        bt_Ok->setSizePolicy(sizePolicy);
        bt_Ok->setCursor(QCursor(Qt::OpenHandCursor));
        bt_Ok->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Login/login.png);"));
        bt_Cancel = new QPushButton(centralWidget);
        bt_Cancel->setObjectName(QStringLiteral("bt_Cancel"));
        bt_Cancel->setGeometry(QRect(600, 10, 31, 21));
        bt_Cancel->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Login/close.png);"));
        bt_question = new QPushButton(centralWidget);
        bt_question->setObjectName(QStringLiteral("bt_question"));
        bt_question->setGeometry(QRect(570, 10, 31, 23));
        bt_question->setStyleSheet(QStringLiteral("border-image: url(:/DialogLogin/images/Login/question.png);"));
        DialogLoginClass->setCentralWidget(centralWidget);

        retranslateUi(DialogLoginClass);

        QMetaObject::connectSlotsByName(DialogLoginClass);
    } // setupUi

    void retranslateUi(QMainWindow *DialogLoginClass)
    {
        DialogLoginClass->setWindowTitle(QApplication::translate("DialogLoginClass", "DialogLogin", 0));
        label_bg->setText(QString());
        bt_showpwd->setText(QString());
        bt_Ok->setText(QString());
        bt_Cancel->setText(QString());
        bt_question->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogLoginClass: public Ui_DialogLoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
