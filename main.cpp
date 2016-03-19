#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{

    std::ofstream out("out.txt");
    std::cout.rdbuf( out.rdbuf() );

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
