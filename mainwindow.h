#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cuboiditem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onthirdFloorDownBtnClicked();
    void onsecondFloorUpBtnClicked();
    void onsecondFloorDownBtnClicked();
    void onfirstFloorUpBtnClicked();
    void onfirstFloorDownBtnClicked();
    void ongroundFloorUpBtnClicked();
    void onthirdFloorSelectBtnClicked();
    void onsecondFloorSelectBtnClicked();
    void onfirstFloorSelectBtnClicked();
    void ongroundFloorSelectBtnClicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    CuboidItem *elevator;
    CuboidItem *groundFloor;
    CuboidItem *firstFloor;
    CuboidItem *secondFloor;
    CuboidItem *thirdFloor;
};
#endif // MAINWINDOW_H
