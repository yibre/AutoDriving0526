#include "selfDriving.h"
#include <QDebug>
#include <iostream>

Mission mission;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    dataContainer = DataContainer::getInstance();

    for (int i = 0; i < 6; i++) // combobox�� ������ �ֱ�. �ش� ���������� ���� ��ſ� ����Ʈ�� ����.
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

    // �׽�Ʈ�� �ڵ� ������� 4�ٱ���
    QString Temp;
    Temp = ui.comboBox->currentText();
    std::string utf8_text = Temp.toUtf8().constData(); // QString�� Temp�� cout�� ���� ���� UTF-8�� �ٲٱ� ���� �۾�
    std::cout << utf8_text << std::endl;
}

void selfDriving::clicked_btn_win_gps()
{
    
}

// progressbar�� �̿��� steer�� ������
void selfDriving::set_ProgessBar_steer(int value)
{
    std::cout << "value: " << value << std::endl;
    // automode �� ���
    dataContainer->setValue_UtoP_STEER(value);
}

void PlatformComThread::comPlatform()
{
    {
        //�÷��� ��� �ڵ��Դϴ�.
        
    }
}