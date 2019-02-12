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
	setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);//窗口放到最上层

	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setAttribute(Qt::WA_TranslucentBackground);
	ui.lineEdit_user->clear();
	ui.lineEdit_pwd->clear();
	QRegExp regx("[a-zA-Z0-9]+$");
	this->m_isShowPwd = false;
	QValidator*validator = new QRegExpValidator(regx, ui.lineEdit_user);
	ui.lineEdit_user->setValidator(validator);

	ui.bt_Ok->setFocus(); //设置默认焦点
	ui.bt_Ok->setShortcut(Qt::Key_Enter);  //设置快捷键为enter键
	ui.bt_Ok->setShortcut(Qt::Key_Return); //设置快捷键为小键盘上的enter键
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
	//记录下鼠标相对于窗口的位置  
	//event->globalPos()鼠标按下时，鼠标相对于整个屏幕位置  
	//pos() this->pos()鼠标按下时，窗口相对于整个屏幕位置  
	mMovePosition = event->globalPos() - pos();  
	//return QDialog::mousePressEvent(event);  
}
void DialogLogin::mouseMoveEvent(QMouseEvent* event)
{
	//(event->buttons() && Qt::LeftButton)按下是左键  
	//鼠标移动事件需要移动窗口，窗口移动到哪里呢？就是要获取鼠标移动中，窗口在整个屏幕的坐标，然后move到这个坐标，怎么获取坐标？  
	//通过事件event->globalPos()知道鼠标坐标，鼠标坐标减去鼠标相对于窗口位置，就是窗口在整个屏幕的坐标  
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