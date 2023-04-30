#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cuboiditem.h"
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QGraphicsScene *scene = new QGraphicsScene();
    CuboidItem *groundFloor = new CuboidItem(100, 100, 100);
    CuboidItem *firstFloor = new CuboidItem(100, 100, 100);
    CuboidItem *secondFloor = new CuboidItem(100, 100, 100);
    CuboidItem *thirdFloor = new CuboidItem(100, 100, 100);
    firstFloor->setPos(0, 100);
    secondFloor->setPos(0, 200);
    thirdFloor->setPos(0, 300);
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    // Add cuboids to the scene
    scene->addItem(groundFloor);
    scene->addItem(firstFloor);
    scene->addItem(secondFloor);
    scene->addItem(thirdFloor);
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



