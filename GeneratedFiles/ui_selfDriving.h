/********************************************************************************
** Form generated from reading UI file 'selfDriving.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFDRIVING_H
#define UI_SELFDRIVING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selfDrivingClass
{
public:
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QPushButton *Btn_mission4;
    QPushButton *Btn_mission3;
    QPushButton *Btn_mission0;
    QPushButton *Btn_mission1;
    QPushButton *Btn_mission2;
    QGroupBox *groupBox_2;
    QPushButton *btn_win_lidar;
    QPushButton *btn_win_gps;
    QPushButton *btn_win_camera;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_3;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *selfDrivingClass)
    {
        if (selfDrivingClass->objectName().isEmpty())
            selfDrivingClass->setObjectName(QString::fromUtf8("selfDrivingClass"));
        selfDrivingClass->resize(1178, 777);
        centralWidget = new QWidget(selfDrivingClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(200, 10, 701, 561));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 580, 881, 131));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 40, 94, 22));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 190, 161, 231));
        Btn_mission4 = new QPushButton(groupBox);
        Btn_mission4->setObjectName(QString::fromUtf8("Btn_mission4"));
        Btn_mission4->setGeometry(QRect(30, 150, 93, 28));
        Btn_mission3 = new QPushButton(groupBox);
        Btn_mission3->setObjectName(QString::fromUtf8("Btn_mission3"));
        Btn_mission3->setGeometry(QRect(30, 120, 93, 28));
        Btn_mission0 = new QPushButton(groupBox);
        Btn_mission0->setObjectName(QString::fromUtf8("Btn_mission0"));
        Btn_mission0->setGeometry(QRect(30, 30, 93, 28));
        Btn_mission0->setAutoDefault(false);
        Btn_mission1 = new QPushButton(groupBox);
        Btn_mission1->setObjectName(QString::fromUtf8("Btn_mission1"));
        Btn_mission1->setGeometry(QRect(30, 60, 93, 28));
        Btn_mission2 = new QPushButton(groupBox);
        Btn_mission2->setObjectName(QString::fromUtf8("Btn_mission2"));
        Btn_mission2->setGeometry(QRect(30, 90, 93, 28));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 440, 161, 121));
        btn_win_lidar = new QPushButton(groupBox_2);
        btn_win_lidar->setObjectName(QString::fromUtf8("btn_win_lidar"));
        btn_win_lidar->setGeometry(QRect(30, 80, 93, 28));
        btn_win_gps = new QPushButton(groupBox_2);
        btn_win_gps->setObjectName(QString::fromUtf8("btn_win_gps"));
        btn_win_gps->setGeometry(QRect(30, 50, 93, 28));
        btn_win_camera = new QPushButton(groupBox_2);
        btn_win_camera->setObjectName(QString::fromUtf8("btn_win_camera"));
        btn_win_camera->setGeometry(QRect(30, 20, 93, 28));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 70, 94, 22));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(100, 100, 94, 22));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(920, 90, 241, 271));
        horizontalSlider = new QSlider(groupBox_3);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 30, 181, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(groupBox_3);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(10, 70, 22, 161));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(groupBox_3);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(210, 180, 22, 51));
        verticalSlider_2->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(920, 40, 93, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 40, 93, 28));
        selfDrivingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(selfDrivingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1178, 21));
        selfDrivingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(selfDrivingClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        selfDrivingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(selfDrivingClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        selfDrivingClass->setStatusBar(statusBar);

        retranslateUi(selfDrivingClass);

        QMetaObject::connectSlotsByName(selfDrivingClass);
    } // setupUi

    void retranslateUi(QMainWindow *selfDrivingClass)
    {
        selfDrivingClass->setWindowTitle(QApplication::translate("selfDrivingClass", "selfDriving", nullptr));
        groupBox->setTitle(QApplication::translate("selfDrivingClass", "Mission Set", nullptr));
        Btn_mission4->setText(QApplication::translate("selfDrivingClass", "Mission4", nullptr));
        Btn_mission3->setText(QApplication::translate("selfDrivingClass", "Mission3", nullptr));
        Btn_mission0->setText(QApplication::translate("selfDrivingClass", "Mission0", nullptr));
        Btn_mission1->setText(QApplication::translate("selfDrivingClass", "Mission1", nullptr));
        Btn_mission2->setText(QApplication::translate("selfDrivingClass", "Mission2", nullptr));
        groupBox_2->setTitle(QApplication::translate("selfDrivingClass", "Window Set", nullptr));
        btn_win_lidar->setText(QApplication::translate("selfDrivingClass", "Lidar Map", nullptr));
        btn_win_gps->setText(QApplication::translate("selfDrivingClass", "GPS map", nullptr));
        btn_win_camera->setText(QApplication::translate("selfDrivingClass", "Camera", nullptr));
        groupBox_3->setTitle(QApplication::translate("selfDrivingClass", "\355\224\214\353\236\253\355\217\274\354\203\201\355\203\234", nullptr));
        pushButton->setText(QApplication::translate("selfDrivingClass", "AutoMode", nullptr));
        pushButton_2->setText(QApplication::translate("selfDrivingClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selfDrivingClass: public Ui_selfDrivingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFDRIVING_H
