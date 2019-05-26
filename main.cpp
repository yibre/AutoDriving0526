#include "selfDriving.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	selfDriving * MainWindow = selfDriving::getInstance();
    MainWindow->show();
    return a.exec();
}
