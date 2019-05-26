#include "selfDriving.h"

bool selfDriving::ProgramOn = false;
selfDriving* selfDriving::MainWindow = NULL;

selfDriving::selfDriving(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

}

selfDriving* selfDriving::getInstance() {
	if (!ProgramOn) {
		MainWindow = new selfDriving();
		ProgramOn = true;
	}
	return MainWindow;
}
