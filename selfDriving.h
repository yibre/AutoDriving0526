#pragma once

#include <QtWidgets/QMainWindow>
#include <QTimer>
#include "ui_selfDriving.h"

class selfDriving : public QMainWindow
{
    Q_OBJECT

public:
    selfDriving(QWidget *parent = Q_NULLPTR);

private:
    Ui::selfDrivingClass ui;
};
