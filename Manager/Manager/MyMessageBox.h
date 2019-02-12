#ifndef MYMESSAGEBOX_H
#define MYMESSAGEBOX_H
#pragma execution_character_set("utf-8")
#include <QDialog>
#include "ui_MyMessageBox.h"

class MyMessageBox : public QDialog
{
	Q_OBJECT

public:
	MyMessageBox(QString tips,QWidget *parent = 0);
	~MyMessageBox();
public slots:
	void on_pushButton_clicked();
	void on_bt_cancel_2_clicked();
private:
	Ui::MyMessageBox ui;
};

#endif // MYMESSAGEBOX_H
