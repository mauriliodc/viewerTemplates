#include "fancyViewer.h"

void FancyViewer::draw()
{

}

void FancyViewer::init()
{
    setGridIsDrawn();
    startAnimation();
    setSceneRadius(10);
    camera()->showEntireScene();

}

FancyViewer::FancyViewer(QWidget *parent) : QGLViewer(parent)
{
    printf("-> Viewer initialized\n");
}
