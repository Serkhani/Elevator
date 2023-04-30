#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cuboidobj.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void moveCuboid(const QPointF& targetPos);
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
    CuboidObj *elevator;
    CuboidObj *groundFloor;
    CuboidObj *firstFloor;
    CuboidObj *secondFloor;
    CuboidObj *thirdFloor;
};
#endif // MAINWINDOW_H
