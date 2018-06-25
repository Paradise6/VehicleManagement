/********************************************************************************
** Form generated from reading UI file 'VehicleManagement.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMANAGEMENT_H
#define UI_VEHICLEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleManagementClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VehicleManagementClass)
    {
        if (VehicleManagementClass->objectName().isEmpty())
            VehicleManagementClass->setObjectName(QStringLiteral("VehicleManagementClass"));
        VehicleManagementClass->resize(600, 400);
        menuBar = new QMenuBar(VehicleManagementClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        VehicleManagementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VehicleManagementClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VehicleManagementClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VehicleManagementClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VehicleManagementClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VehicleManagementClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VehicleManagementClass->setStatusBar(statusBar);

        retranslateUi(VehicleManagementClass);

        QMetaObject::connectSlotsByName(VehicleManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *VehicleManagementClass)
    {
        VehicleManagementClass->setWindowTitle(QApplication::translate("VehicleManagementClass", "VehicleManagement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VehicleManagementClass: public Ui_VehicleManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGEMENT_H
