#include <iostream>
#include <ros/ros.h>
#include <string>
#include <boost/signal.hpp>
#include <boost/bind.hpp>
#include <QApplication>
#include "fancyWindow.h"


int main(int argc, char **argv)
{
    std::cout<<"init"<<std::endl;
    QApplication qapp(argc, argv);
    FancyWindow w;
    w.show();
    return qapp.exec();
}
