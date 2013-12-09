#ifndef FANCYWINDOW_H
#define FANCYWINDOW_H
#include <boost/signal.hpp>
#include <boost/bind.hpp>
#include <QDialog>
#include <QMainWindow>
#include <QThread>
#include <QLabel>
#include <QTime>
#include <QImage>
#include "ui_fancyWindow.h" //remember me
#include <unistd.h>
#include <iostream>
#include <QLineEdit>
#include <stdio.h>
#include <QStatusBar>

namespace Ui {
    class FancyWindow;
}


class FancyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FancyWindow(QWidget *parent = 0);
    ~FancyWindow();

private:
    Ui::FancyWindow *ui;

};

#endif
