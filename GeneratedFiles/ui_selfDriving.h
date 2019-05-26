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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selfDrivingClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QWidget *tab_2;
    QMdiArea *mdiArea;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
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
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(910, 70, 251, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalSlider = new QSlider(tab);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 10, 211, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(tab);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(10, 40, 22, 191));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(tab);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(220, 170, 22, 61));
        verticalSlider_2->setOrientation(Qt::Vertical);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
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
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 150, 93, 28));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 120, 93, 28));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 93, 28));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 60, 93, 28));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 90, 93, 28));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 440, 161, 121));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 80, 93, 28));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 50, 93, 28));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 20, 93, 28));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 70, 94, 22));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(100, 100, 94, 22));
        selfDrivingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(selfDrivingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1178, 26));
        selfDrivingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(selfDrivingClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        selfDrivingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(selfDrivingClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        selfDrivingClass->setStatusBar(statusBar);

        retranslateUi(selfDrivingClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(selfDrivingClass);
    } // setupUi

    void retranslateUi(QMainWindow *selfDrivingClass)
    {
        selfDrivingClass->setWindowTitle(QApplication::translate("selfDrivingClass", "selfDriving", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("selfDrivingClass", "\355\224\214\353\236\253\355\217\274 \354\203\201\355\203\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("selfDrivingClass", "\355\224\214\353\236\253\355\217\274 \353\241\234\352\267\270", nullptr));
        groupBox->setTitle(QApplication::translate("selfDrivingClass", "Mission Set", nullptr));
        pushButton_5->setText(QApplication::translate("selfDrivingClass", "Mission5", nullptr));
        pushButton_4->setText(QApplication::translate("selfDrivingClass", "Mission4", nullptr));
        pushButton->setText(QApplication::translate("selfDrivingClass", "Mission1", nullptr));
        pushButton_2->setText(QApplication::translate("selfDrivingClass", "Mission2", nullptr));
        pushButton_3->setText(QApplication::translate("selfDrivingClass", "Mission3", nullptr));
        groupBox_2->setTitle(QApplication::translate("selfDrivingClass", "Window Set", nullptr));
        pushButton_11->setText(QApplication::translate("selfDrivingClass", "Lidar Map", nullptr));
        pushButton_10->setText(QApplication::translate("selfDrivingClass", "GPS map", nullptr));
        pushButton_9->setText(QApplication::translate("selfDrivingClass", "Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selfDrivingClass: public Ui_selfDrivingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFDRIVING_H
