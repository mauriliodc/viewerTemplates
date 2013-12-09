#include "fancyWindow.h"
#include <iostream>
#include <fstream>
#include <QTime>


FancyWindow::FancyWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::FancyWindow)
{
    ui->setupUi(this);
    QLabel *label = new QLabel(this);
    label->setText("this the status bar");
    this->ui->statusBar->addPermanentWidget(label,200);
}


FancyWindow::~FancyWindow()
{
    delete ui;
}
