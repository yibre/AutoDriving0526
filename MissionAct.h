#pragma once
#include "DataContainer.h"

// TODO: automode thread �����ϱ�

class Mission
{
private:
protected:
    DataContainer *dataContainer;
    int MissionNumber = 0;

public:
    bool emergencyStop();
    int DecideMission();
    void setMission(int k);// k��° �̼����� �Ѿ
    void doMission0();
    
};


// GPS�� �̺�Ʈ Ʈ���Ÿ� �̿��� �� �̼����� �Ѿ�� �Լ�
int Mission::DecideMission() 
{
    int k;
    // step 0. manual mode���� auto mode�� ��ȯ
    dataContainer->setValue_UtoP_AorM(1); 
    // step 1. gps�� mission trigger�� �޾ƿͼ� k�� �Ǵ��ϴ� ���� ��ġ��
    

    return k;
}

void Mission::setMission(int k)// k��° �̼����� �Ѿ
{
    if (k == 0) { doMission0(); }
    // if (k ==1) { doMission1(); } ...etc
}

bool Mission::emergencyStop() // Lidar�� dangerous region�� ������ E-stop
{
}

void Mission::doMission0() // ���� �⺻ �����϶� ����
{
    while (!emergencyStop())
    {
        int temp = dataContainer->getValue_camera1_steer;
        dataContainer->setValue_UtoP_list(1, 0, 0, 0, temp, 0);

    }
    
}