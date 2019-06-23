#pragma once
#include "ui_selfDriving.h"
#include "MissionAct.h"

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QTimer>
#include "DataContainer.h"

class selfDriving : public QMainWindow
{
    Q_OBJECT

public:
    
	static selfDriving* getInstance() {
		if (!MainWindow) {
			MainWindow = new selfDriving();
		}
		return MainWindow;
	}

protected:
	selfDriving(QWidget *parent = Q_NULLPTR);
    DataContainer *dataContainer;

private:
	static bool ProgramOn;
	static selfDriving* MainWindow;

    Ui::selfDrivingClass ui;

public slots:
	void clicked_btn_mission0();
    void clicked_btn_win_gps();
    void set_ProgessBar_steer(int value);
};

