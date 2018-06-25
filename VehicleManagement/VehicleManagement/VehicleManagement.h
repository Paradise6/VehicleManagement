#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VehicleManagement.h"

class VehicleManagement : public QMainWindow
{
	Q_OBJECT

public:
	VehicleManagement(QWidget *parent = Q_NULLPTR);

private:
	Ui::VehicleManagementClass ui;
};
