#ifndef MAINFORM_H
#define MAINFORM_H
#pragma execution_character_set("utf-8")
#include <QMainWindow>
#include <QMouseEvent>
#include "ui_MainForm.h"

class MainForm : public QMainWindow
{
	Q_OBJECT

public:
	MainForm(QWidget *parent = 0);
	~MainForm();

	void  InitForm();

private slots:
	//��С������󻯹���
	void on_pushButton_minisized_clicked();									//��С������
	void on_pushButton_maxsized_clicked();									//��󻯹���
	void on_pushButton_closed_clicked();									//�رչ���
	void slotshowNormal();													//��ʾ������С����
protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent* event);
	void mouseReleaseEvent(QMouseEvent* event);
private:
	Ui::MainForm ui;
	bool					mMoveing;
	QPoint					mMovePosition;

};

#endif // MAINFORM_H
