#include "selfDriving.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	selfDriving Window;
    Window.show();
    return a.exec();
}
