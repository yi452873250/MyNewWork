#include "Dialoglogin.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{

	//QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
	//QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
	//QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
	QApplication a(argc, argv);
	DialogLogin w;
	w.show();
	return a.exec();
}
