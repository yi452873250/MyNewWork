#include "MyMessageBox.h"

MyMessageBox::MyMessageBox(QString tips,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);//窗口放到最上层
	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setAttribute(Qt::WA_TranslucentBackground);
	ui.label->setText(tips);
}

MyMessageBox::~MyMessageBox()
{

}
void MyMessageBox::on_bt_cancel_2_clicked()
{
	this->close();
}
void MyMessageBox::on_pushButton_clicked()
{
	this->close();
}
