#include "DataContainer.h"
#include "ComPlatform.h""

#include <thread>

DataContainer *dataContainer;

thread automode_thread;
thread platformcom_thread;
thread lidarcom_thread;
thread camera1com_thread;
thread gpscom_thread;

int sensorCount = 0;
int sensorAutoCount = 0;
ComPlatform _serial;

bool loopStatusAutomode = true;
bool loopStatusPlatform = true;
bool loopStatusLidar = true;
bool loopStatusCamera1 = true;
bool loopStatusGps = true;

void comPlatform();
void comLidar();
void comCamera1();
void comGps();