//==============================================================================
// Name        : EditionMetadonnees.cpp
// Author      : Alexis Foerster (alexis.foerster@gmail.com)
// Version     : 1.0.1 (05/04/2019)
// Description : Main file of the EditionMetadonnees project
//==============================================================================

#include "MainWindow.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication application(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return application.exec();
}
