#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cuboiditem.h"
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QGraphicsScene *scene = new QGraphicsScene();
    CuboidItem *cuboid = new CuboidItem(100,100,100);
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    scene->addItem(cuboid);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onthirdFloorDownBtnClicked()
{

}

void MainWindow::onfirstFloorDownBtnClicked()
{

}

void MainWindow::onfirstFloorUpBtnClicked()
{

}

void MainWindow::onsecondFloorDownBtnClicked()
{

}

void MainWindow::onsecondFloorUpBtnClicked()
{

}

void MainWindow::ongroundFloorUpBtnClicked()
{

}



