#ifndef FANCYVIEWER_H
#define FANCYVIEWER_H

#include <boost/signal.hpp>
#include <boost/bind.hpp>
#include <QDialog>
#include <QThread>
#include <QLabel>
#include <QTime>
#include <QImage>
#include <unistd.h>
#include <iostream>
#include <QLineEdit>
#include <stdio.h>
#include <QGLViewer/qglviewer.h>


class FancyViewer : public QGLViewer
{
public:
    FancyViewer(QWidget *parent);

private :
    virtual void draw();
    virtual void init();

};

#endif
