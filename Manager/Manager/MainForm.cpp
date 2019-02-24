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
	//初始化窗体样式背景
	setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);//窗口放到最上层
	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setAttribute(Qt::WA_TranslucentBackground);
	//初始化用户子选项
	QListWidgetItem* item_sysPara = new QListWidgetItem("系统参数配置", ui.listWidget_Syspara);
	item_sysPara->setSizeHint(QSize(50, 40));
	QListWidgetItem* item_GatePara = new QListWidgetItem("岗亭参数配置", ui.listWidget_Syspara);
	item_GatePara->setSizeHint(QSize(50, 40));
}
//==============================最小化槽函数=========================================
void MainForm::on_pushButton_minisized_clicked()
{
	this->showMinimized();
}

//=================================关闭槽函数=======================================
void MainForm::on_pushButton_closed_clicked()
{
	this->close();
}

//==================================最大化槽函数===================================
void MainForm::on_pushButton_maxsized_clicked()
{
	this->showMaximized();
	disconnect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(on_pushButton_maxsized_clicked()));
	connect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(slotshowNormal()));
}
//===================================恢复正常槽函数======================================
void MainForm::slotshowNormal()
{
	this->showNormal();
	disconnect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(slotshowNormal()));
	connect(ui.pushButton_maxsized, SIGNAL(clicked()), this, SLOT(on_pushButton_maxsized_clicked()));
}
void MainForm::mousePressEvent(QMouseEvent *event)
{
	mMoveing = true;
	//记录下鼠标相对于窗口的位置  
	//event->globalPos()鼠标按下时，鼠标相对于整个屏幕位置  
	//pos() this->pos()鼠标按下时，窗口相对于整个屏幕位置  
	mMovePosition = event->globalPos() - pos();
	//return QDialog::mousePressEvent(event);  
}
void MainForm::mouseMoveEvent(QMouseEvent* event)
{
	//(event->buttons() && Qt::LeftButton)按下是左键  
	//鼠标移动事件需要移动窗口，窗口移动到哪里呢？就是要获取鼠标移动中，窗口在整个屏幕的坐标，然后move到这个坐标，怎么获取坐标？  
	//通过事件event->globalPos()知道鼠标坐标，鼠标坐标减去鼠标相对于窗口位置，就是窗口在整个屏幕的坐标  
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