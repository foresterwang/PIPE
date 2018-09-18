#include "pipe.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PIPE w;
	w.show();
	return a.exec();
}
