#include "selfDriving.h"
#include <QDebug>
#include <iostream>

Mission mission;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    dataContainer = DataContainer::getInstance();

    for (int i = 0; i < 6; i++) // combobox에 선택지 넣기. 해당 선택지들이 이후 통신용 컴포트에 사용됨.
    {
        ui.comboBox->addItem("COM " + QString::number(i));
        ui.comboBox_2->addItem("COM " + QString::number(i));
        ui.comboBox_3->addItem("COM " + QString::number(i));
        ui.comboBox_4->addItem("COM " + QString::number(i));
    }

	QObject::connect(ui.Btn_mission0, SIGNAL(clicked()), this, SLOT(clicked_btn_mission0()));
    QObject::connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(set_ProgessBar_steer(int)));
    
}


void selfDriving::clicked_btn_mission0() {
    mission.doMission0();
    std::cout << "Button clicked" << std::endl;

    // 테스트용 코드 여기부터 4줄까지
    QString Temp;
    Temp = ui.comboBox->currentText();
    std::string utf8_text = Temp.toUtf8().constData(); // QString인 Temp를 cout을 쓰기 위해 UTF-8로 바꾸기 위한 작업
    std::cout << utf8_text << std::endl;
}

void selfDriving::clicked_btn_win_gps()
{
    
}

// progressbar를 이용해 steer를 세팅함
void selfDriving::set_ProgessBar_steer(int value)
{
    std::cout << "value: " << value << std::endl;
    // automode 일 경우
    dataContainer->setValue_UtoP_STEER(value);
}

void PlatformComThread::comPlatform()
{
    {
        //플랫폼 통신 코드입니다.
        
    }
}