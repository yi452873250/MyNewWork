#include "Dialoglogin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DialogLogin w;
	w.show();
	return a.exec();
}
