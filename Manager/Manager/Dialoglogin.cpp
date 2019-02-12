#include "Dialoglogin.h"

DialogLogin::DialogLogin(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Init();
}

DialogLogin::~DialogLogin()
{

}
void DialogLogin::Init()
{
	setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);//���ڷŵ����ϲ�

	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setAttribute(Qt::WA_TranslucentBackground);
	ui.lineEdit_user->clear();
	ui.lineEdit_pwd->clear();
	QRegExp regx("[a-zA-Z0-9]+$");
	this->m_isShowPwd = false;
	QValidator*validator = new QRegExpValidator(regx, ui.lineEdit_user);
	ui.lineEdit_user->setValidator(validator);

	ui.bt_Ok->setFocus(); //����Ĭ�Ͻ���
	ui.bt_Ok->setShortcut(Qt::Key_Enter);  //���ÿ�ݼ�Ϊenter��
	ui.bt_Ok->setShortcut(Qt::Key_Return); //���ÿ�ݼ�ΪС�����ϵ�enter��
}

void DialogLogin::on_bt_showpwd_clicked()
{
	if (this->m_isShowPwd)
	{
		ui.bt_showpwd->setStyleSheet("border-image: url(:/DialogLogin/images/Login/pwd1.png)");
		ui.lineEdit_pwd->setEchoMode(QLineEdit::Password);
		this->m_isShowPwd = false;
	}
	else
	{
		
		ui.bt_showpwd->setStyleSheet("border-image: url(:/DialogLogin/images/Login/pwd2.png)");
		ui.lineEdit_pwd->setEchoMode(QLineEdit::Normal);
		this->m_isShowPwd = true;
	}

}
void DialogLogin::on_bt_Cancel_clicked()
{

}
void DialogLogin::on_bt_Ok_clicked()
{

}
void DialogLogin::on_bt_question_clicked()
{

}

void DialogLogin::mousePressEvent(QMouseEvent *event)
{
	mMoveing = true;  
	//��¼���������ڴ��ڵ�λ��  
	//event->globalPos()��갴��ʱ����������������Ļλ��  
	//pos() this->pos()��갴��ʱ�����������������Ļλ��  
	mMovePosition = event->globalPos() - pos();  
	//return QDialog::mousePressEvent(event);  
}
void DialogLogin::mouseMoveEvent(QMouseEvent* event)
{
	//(event->buttons() && Qt::LeftButton)���������  
	//����ƶ��¼���Ҫ�ƶ����ڣ������ƶ��������أ�����Ҫ��ȡ����ƶ��У�������������Ļ�����꣬Ȼ��move��������꣬��ô��ȡ���ꣿ  
	//ͨ���¼�event->globalPos()֪��������꣬��������ȥ�������ڴ���λ�ã����Ǵ�����������Ļ������  
	if (mMoveing && (event->buttons() && Qt::LeftButton)  
		&& (event->globalPos()-mMovePosition).manhattanLength() > QApplication::startDragDistance())   
	{    
		move(event->globalPos()-mMovePosition);  
		mMovePosition = event->globalPos() - pos();  
	}  
	//return QDialog::mouseMoveEvent(event);  
}
void DialogLogin::mouseReleaseEvent(QMouseEvent* event)
{
	mMoveing=false;
}