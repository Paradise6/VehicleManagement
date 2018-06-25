#include "VehicleManagement.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VehicleManagement w;
	w.show();
	return a.exec();
}
