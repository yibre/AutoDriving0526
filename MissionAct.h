#pragma once
#include "DataContainer.h"

class Mission
{
private:
    DataContainer* dataContainer;

protected:

    int MissionNumber = 0;

public:
    Mission();
    bool emergencyStop();
    int DecideMission();
    void setMission(int k);// k번째 미션으로 넘어감
    void doMission0();

};
