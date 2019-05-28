#include "selfDriving.h"

bool selfDriving::ProgramOn = false;
selfDriving* selfDriving::MainWindow = NULL;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	MainWindow = getInstance();
	QObject::connect(ui.Btn_mission0, SIGNAL(clicked()), MainWindow, SLOT(clicked_btn_mission0()));
    // QObject::connect(ui.btn_win_gps, SIGNAL(clicked()), M
}



void selfDriving::clicked_btn_mission0() {
	Mission* mission;
	//mission->doMission0();
}

void selfDriving::clicked_btn_win_gps()
{

}