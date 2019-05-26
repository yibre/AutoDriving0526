#include "selfDriving.h"

bool selfDriving::ProgramOn = false;
selfDriving* selfDriving::MainWindow = NULL;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	if (!ProgramOn) {
		MainWindow = this;
		ProgramOn = true;
	}
	QObject::connect(ui.Btn_mission0, SIGNAL(clicked()), MainWindow, SLOT(clicked_btn_mission0()));
}

selfDriving* selfDriving::getInstance() {
	return MainWindow;
}

void selfDriving::clicked_btn_mission0() {
	Mission* mission;
	mission->doMission0();
}
