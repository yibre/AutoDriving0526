#pragma once
#include "DataContainer.h"
#include "selfDriving.h"

// TODO: automode thread �����ϱ�

class Mission
{
private:
	Mission();
protected:
    DataContainer *dataContainer;
	selfDriving *MainWindow;
    int MissionNumber = 0;

public:
    bool emergencyStop();
    int DecideMission();
    void setMission(int k);// k��° �̼����� �Ѿ
    void doMission0();
    
};
