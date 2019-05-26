#pragma once

#include <QtWidgets/QMainWindow>
#include <QTimer>
#include "ui_selfDriving.h"

class selfDriving : public QMainWindow
{
    Q_OBJECT

public:
    selfDriving(QWidget *parent = Q_NULLPTR);
	static selfDriving* getInstance();

private:

	static selfDriving* MainWindow;
	static bool ProgramOn;

    Ui::selfDrivingClass ui;
};

