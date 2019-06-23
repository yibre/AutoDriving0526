#include "selfDriving.h"
#include <QDebug>
#include <iostream>

Mission mission;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    dataContainer = DataContainer::getInstance();    

	QObject::connect(ui.Btn_mission0, SIGNAL(clicked()), this, SLOT(clicked_btn_mission0()));
    QObject::connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(set_ProgreessBar_steer(int)));
    
}


void selfDriving::clicked_btn_mission0() {
    mission.doMission0();
    std::cout << "Button clicked" << std::endl;
}

void selfDriving::clicked_btn_win_gps()
{

}

// progressbar를 이용해 steer를 세팅함
void selfDriving::set_ProgessBar_steer(int value)
{
    qDebug() << "value: " << value;
    // automode 일 경우
    dataContainer->setValue_UtoP_STEER(value);
}