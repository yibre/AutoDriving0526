#include "selfDriving.h"
#include <iostream>

Mission mission;
selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	QObject::connect(ui.Btn_mission0, SIGNAL(clicked()), this, SLOT(clicked_btn_mission0()));

}

void selfDriving::clicked_btn_mission0() {
	mission.doMission0();
	std::cout << "button이 클릭되었습니다." << std::endl;
}
