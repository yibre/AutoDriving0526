#pragma once
#include "ui_selfDriving.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QTimer>


class selfDriving : public QMainWindow
{
    Q_OBJECT

public:
	selfDriving(QWidget *parent = Q_NULLPTR);

protected:
	

private:
	//static bool ProgramOn;
	//static selfDriving* MainWindow;

    Ui::selfDrivingClass ui;

public slots:
	void clicked_btn_mission0();
};

