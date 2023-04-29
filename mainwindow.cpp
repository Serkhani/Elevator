#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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



