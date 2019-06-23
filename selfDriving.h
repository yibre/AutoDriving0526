#pragma once
#include "ui_selfDriving.h"
#include "MissionAct.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QTimer>


class selfDriving : public QMainWindow, Mission
{
    Q_OBJECT

public:
    //static selfDriving* getInstance() {
    //	if (!MainWindow) {
    //		MainWindow = new selfDriving();
    //	}
    //	return MainWindow;
    //}
    selfDriving(QWidget *parent = Q_NULLPTR);
protected:
    DataContainer *dataContainer;

private:
    //static bool ProgramOn;
    //static selfDriving* MainWindow;
    //static selfDriving* MainWindow;

    Ui::selfDrivingClass ui;

public slots:
	void clicked_btn_mission0();
    void clicked_btn_win_gps();
    void set_ProgessBar_steer(int value);
};

