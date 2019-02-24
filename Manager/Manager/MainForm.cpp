#include "MainForm.h"

MainForm::MainForm(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	InitForm();
}

MainForm::~MainForm()
{

}

void MainForm::InitForm()
{
	//��ʼ��������ʽ����
	setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);//���ڷŵ����ϲ�
	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setAttribute(Qt::WA_TranslucentBackground);
	//��ʼ���û���ѡ��
	QListWidgetItem* item_sysPara = new QListWidgetItem("ϵͳ��������", ui.listWidget_Syspara);
	item_sysPara->setSizeHint(QSize(50, 40));
	QListWidgetItem* item_GatePara = new QListWidgetItem("��ͤ��������", ui.listWidget_Syspara);
	item_GatePara->setSizeHint(QSize(50, 40));
}
//==============================��С���ۺ���=========================================
void MainForm::on_pushButton_minisized_clicked()
{
	this->showMinimized();
}

//=================================�رղۺ���=======================================
void MainForm::on_pushButton_closed_clicked()
{
	this->close();
}

//==================================��󻯲ۺ���===================================
void MainForm::on_pushButton_maxsized_clicked()
{
	this->showMaximized();
	disconnect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(on_pushButton_maxsized_clicked()));
	connect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(slotshowNormal()));
}
//===================================�ָ������ۺ���======================================
void MainForm::slotshowNormal()
{
	this->showNormal();
	disconnect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(slotshowNormal()));
	connect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(on_pushButton_maxsized_clicked()));
}
void MainForm::mousePressEvent(QMouseEvent *event)
{
	mMoveing = true;
	//��¼���������ڴ��ڵ�λ��  
	//event->globalPos()��갴��ʱ����������������Ļλ��  
	//pos() this->pos()��갴��ʱ�����������������Ļλ��  
	mMovePosition = event->globalPos() - pos();
	//return QDialog::mousePressEvent(event);  
}
void MainForm::mouseMoveEvent(QMouseEvent* event)
{
	//(event->buttons() && Qt::LeftButton)���������  
	//����ƶ��¼���Ҫ�ƶ����ڣ������ƶ��������أ�����Ҫ��ȡ����ƶ��У�������������Ļ�����꣬Ȼ��move��������꣬��ô��ȡ���ꣿ  
	//ͨ���¼�event->globalPos()֪��������꣬��������ȥ�������ڴ���λ�ã����Ǵ�����������Ļ������  
	if (mMoveing && (event->buttons() && Qt::LeftButton)
		&& (event->globalPos() - mMovePosition).manhattanLength() > QApplication::startDragDistance())
	{
		move(event->globalPos() - mMovePosition);
		mMovePosition = event->globalPos() - pos();
	}
	//return QDialog::mouseMoveEvent(event);  
}
void MainForm::mouseReleaseEvent(QMouseEvent* event)
{
	mMoveing = false;
}