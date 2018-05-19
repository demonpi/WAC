#include "wac.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WAC w;
	w.show();
	return a.exec();
}
