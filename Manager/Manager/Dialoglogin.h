#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>
#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include "MyMessageBox.h"
#include "ui_Dialoglogin.h"

class DialogLogin : public QMainWindow
{
	Q_OBJECT

public:
	DialogLogin(QWidget *parent = 0);
	~DialogLogin();
public slots:
	void on_bt_Ok_clicked();
	void on_bt_Cancel_clicked();
	void on_bt_question_clicked();
	void on_bt_showpwd_clicked();
private:
	void Init();
protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent* event);
	void mouseReleaseEvent(QMouseEvent* event);
private:
	Ui::DialogLoginClass	ui;
	bool					m_isShowPwd;

	bool					mMoveing;
	QPoint					mMovePosition;
	MyMessageBox*			m_MsBox;
};

#endif // DIALOGLOGIN_H
