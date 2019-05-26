#pragma once
#include "DataContainer.h"
#include "selfDriving.h"

// TODO: automode thread 생성하기

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
    void setMission(int k);// k번째 미션으로 넘어감
    void doMission0();
    
};
