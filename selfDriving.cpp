#include "selfDriving.h"
#include <QDebug>


bool selfDriving::ProgramOn = false;
selfDriving* selfDriving::MainWindow = NULL;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	MainWindow = getInstance();

    dataContainer = DataContainer::getInstance();    

	QObject::connect(ui.Btn_mission0, SIGNAL(clicked()), MainWindow, SLOT(clicked_btn_mission0()));
    QObject::connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), MainWindow, SLOT(set_ProgreessBar_steer(int)));
    
}


void selfDriving::clicked_btn_mission0() {
	Mission* mission;
	mission->doMission0();
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