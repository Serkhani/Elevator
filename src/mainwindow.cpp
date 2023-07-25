#include "Headers/mainwindow.h"
#include "Headers/ui_mainwindow.h"
#include "Headers/cuboidobj.h"
#include <QGraphicsScene>
#include <QPropertyAnimation>
#include <QGraphicsItemAnimation>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , scene(new QGraphicsScene())
    , elevator (new CuboidObj(90,90,90)),
    groundFloor(new CuboidObj(100, 100, 100)),
    firstFloor(new CuboidObj(100, 100, 100)),
    secondFloor(new CuboidObj(100, 100, 100)),
    thirdFloor(new CuboidObj(100, 100, 100))

{
    elevator->setPos(0,300);
    firstFloor->setPos(0, 100);
    secondFloor->setPos(0, 200);
    thirdFloor->setPos(0, 300);
    ui->setupUi(this);
    connect(ui->firstFloorSelectBtn, SIGNAL(clicked(bool)),
            this, SLOT(onfirstFloorSelectBtnClicked()));
    connect(ui->secondFloorSelectBtn, SIGNAL(clicked(bool)),
            this, SLOT(onsecondFloorSelectBtnClicked()));
    connect(ui->thirdFloorSelectBtn, SIGNAL(clicked(bool)),
            this, SLOT(onthirdFloorSelectBtnClicked()));
    connect(ui->groundFloorSelectBtn, SIGNAL(clicked(bool)),
            this, SLOT(ongroundFloorSelectBtnClicked()));
    connect(ui->firstFloorDownBtn, SIGNAL(clicked(bool)),
            this, SLOT(onfirstFloorDownBtnClicked()));
    connect(ui->firstFloorUpBtn, SIGNAL(clicked(bool)),
            this, SLOT(onfirstFloorUpBtnClicked()));
    connect(ui->secondFloorDownBtn, SIGNAL(clicked(bool)),
            this, SLOT(onsecondFloorDownBtnClicked()));
    connect(ui->secondFloorUpBtn, SIGNAL(clicked(bool)),
            this, SLOT(onsecondFloorUpBtnClicked()));
    connect(ui->gFloorUpBtn, SIGNAL(clicked(bool)),
            this, SLOT(ongroundFloorUpBtnClicked()));
    connect(ui->thirdFloorDownBtn, SIGNAL(clicked(bool)),
            this, SLOT(onthirdFloorDownBtnClicked()));


    ui->graphicsView->setScene(scene);
    // Add cuboids to the scene
    scene->addItem(elevator);
    scene->addItem(groundFloor);
    scene->addItem(firstFloor);
    scene->addItem(secondFloor);
    scene->addItem(thirdFloor);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
    delete firstFloor;
    delete secondFloor;
    delete thirdFloor;
    delete elevator;
}


void MainWindow::onthirdFloorDownBtnClicked()
{
    this->moveCuboid(QPointF(0,0));
}

void MainWindow::onfirstFloorDownBtnClicked()
{
    this->moveCuboid(QPointF(0,200));
}

void MainWindow::onfirstFloorUpBtnClicked()
{
    this->moveCuboid(QPointF(0,200));
}

void MainWindow::onsecondFloorDownBtnClicked()
{
    this->moveCuboid(QPointF(0,100));
}

void MainWindow::onsecondFloorUpBtnClicked()
{
    this->moveCuboid(QPointF(0,100));
}

void MainWindow::ongroundFloorUpBtnClicked()
{
    this->moveCuboid(QPointF(0,300));
}

void MainWindow::onthirdFloorSelectBtnClicked()
{
    this->moveCuboid(QPointF(0, 0));
}


void MainWindow::onsecondFloorSelectBtnClicked()
{
    this->moveCuboid(QPointF(0, 100));
}


void MainWindow::onfirstFloorSelectBtnClicked()
{
    this->moveCuboid(QPointF(0, 200));
}


void MainWindow::ongroundFloorSelectBtnClicked()
{
    this->moveCuboid(QPointF(0, 300));

}

void MainWindow::moveCuboid(const QPointF& targetPos)
{
    QPropertyAnimation* animation = new QPropertyAnimation(elevator, "pos");
    connect(animation, &QPropertyAnimation::valueChanged, this, [this]() {
//            elevator->update(); // update the view after each step of the animation
//        elevator->paint(QPainter(),QStyleOptionGraphicsItem());
        ui->graphicsView->scene()->update();
        });
    animation->setDuration(2000); // Set the animation duration to 1 second
    animation->setStartValue(elevator->pos());
    animation->setEndValue(targetPos); // Set the target position
    animation->start(QAbstractAnimation::DeleteWhenStopped); // Start the animation

}


