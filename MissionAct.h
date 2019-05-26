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
    void automode();
    bool emergencyStop();
    void SetMission(int k); // k��° �̼����� �Ѿ
    void doMission0();
    
};

void Mission::SetMission(int k)
{
    // step 1. gps�� mission trigger�� �޾ƿͼ� k�� �Ǵ��ϴ� ���� ��ġ��

    // step 2. k �ѹ��� �°� mission �����ϱ�
    MissionNumber = k;
    if (k == 0) { doMission0; }
    //if (k == 1) { doMission1; } // etc
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
        this_thread::sleep_for(100ms);
    }
    
}