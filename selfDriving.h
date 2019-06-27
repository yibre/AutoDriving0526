#pragma once
#include "ui_selfDriving.h"
#include "MissionAct.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QTimer>

// Thread Á¤ÀÇ¿ë
#include <QThread>
#include <QMutex>
#include <QString>

class selfDriving : public QMainWindow, Mission
{
    Q_OBJECT

public:
    selfDriving(QWidget *parent = Q_NULLPTR);
protected:
    DataContainer *dataContainer;

private:
    Ui::selfDrivingClass ui;

public slots:
	void clicked_btn_mission0();
    void clicked_btn_win_gps();
    void set_ProgessBar_steer(int value);
};


class PlatformComThread :public QThread
{
protected:
    void comPlatform(); // HyeAhnView.cpp ~2621
};

class LidarComThread :public QThread
{
protected:
};

class CameraComThread :public QThread
{
protected:
};

class AutoModeThread : public QThread
{

};