#include "selfDriving.h"
#include "DataContainer.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	DataContainer* dataContainer = DataContainer::getInstance();
	selfDriving Window;
	dataContainer->setWindow(&Window);
    Window.show();
    return a.exec();
}
