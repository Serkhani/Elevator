/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QDockWidget *selectFloorDockWidget;
    QWidget *dockWidgetContents_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *thirdFloorSelectBtn;
    QPushButton *secondFloorSelectBtn;
    QPushButton *firstFloorSelectBtn;
    QPushButton *groundFloorSelectBtn;
    QDockWidget *summonElevatorDockWidget;
    QWidget *dockWidgetContents_4;
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *thirdFloorDownBtn;
    QHBoxLayout *horizontalLayout;
    QPushButton *secondFloorDownBtn;
    QPushButton *secondFloorUpBtn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *firstFloorDownBtn;
    QPushButton *firstFloorUpBtn;
    QPushButton *gFloorUpBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks|QMainWindow::GroupedDragging|QMainWindow::VerticalTabs);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(graphicsView, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        selectFloorDockWidget = new QDockWidget(MainWindow);
        selectFloorDockWidget->setObjectName("selectFloorDockWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectFloorDockWidget->sizePolicy().hasHeightForWidth());
        selectFloorDockWidget->setSizePolicy(sizePolicy1);
        selectFloorDockWidget->setMinimumSize(QSize(150, 40));
        selectFloorDockWidget->setMaximumSize(QSize(150, 524287));
        selectFloorDockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        selectFloorDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName("dockWidgetContents_3");
        verticalLayoutWidget = new QWidget(dockWidgetContents_3);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 151, 571));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        thirdFloorSelectBtn = new QPushButton(verticalLayoutWidget);
        thirdFloorSelectBtn->setObjectName("thirdFloorSelectBtn");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(thirdFloorSelectBtn->sizePolicy().hasHeightForWidth());
        thirdFloorSelectBtn->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(thirdFloorSelectBtn);

        secondFloorSelectBtn = new QPushButton(verticalLayoutWidget);
        secondFloorSelectBtn->setObjectName("secondFloorSelectBtn");
        sizePolicy2.setHeightForWidth(secondFloorSelectBtn->sizePolicy().hasHeightForWidth());
        secondFloorSelectBtn->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(secondFloorSelectBtn);

        firstFloorSelectBtn = new QPushButton(verticalLayoutWidget);
        firstFloorSelectBtn->setObjectName("firstFloorSelectBtn");
        sizePolicy2.setHeightForWidth(firstFloorSelectBtn->sizePolicy().hasHeightForWidth());
        firstFloorSelectBtn->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(firstFloorSelectBtn);

        groundFloorSelectBtn = new QPushButton(verticalLayoutWidget);
        groundFloorSelectBtn->setObjectName("groundFloorSelectBtn");
        sizePolicy2.setHeightForWidth(groundFloorSelectBtn->sizePolicy().hasHeightForWidth());
        groundFloorSelectBtn->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(groundFloorSelectBtn);

        selectFloorDockWidget->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, selectFloorDockWidget);
        summonElevatorDockWidget = new QDockWidget(MainWindow);
        summonElevatorDockWidget->setObjectName("summonElevatorDockWidget");
        sizePolicy1.setHeightForWidth(summonElevatorDockWidget->sizePolicy().hasHeightForWidth());
        summonElevatorDockWidget->setSizePolicy(sizePolicy1);
        summonElevatorDockWidget->setMinimumSize(QSize(150, 624));
        summonElevatorDockWidget->setMaximumSize(QSize(150, 524287));
        summonElevatorDockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        summonElevatorDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName("dockWidgetContents_4");
        dockWidgetContents_4->setMinimumSize(QSize(150, 600));
        gridLayoutWidget = new QWidget(dockWidgetContents_4);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 151, 571));
        verticalLayout = new QVBoxLayout(gridLayoutWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 0);
        thirdFloorDownBtn = new QPushButton(gridLayoutWidget);
        thirdFloorDownBtn->setObjectName("thirdFloorDownBtn");
        sizePolicy.setHeightForWidth(thirdFloorDownBtn->sizePolicy().hasHeightForWidth());
        thirdFloorDownBtn->setSizePolicy(sizePolicy);
        thirdFloorDownBtn->setMinimumSize(QSize(90, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down"), QSize(), QIcon::Normal, QIcon::Off);
        thirdFloorDownBtn->setIcon(icon);
        thirdFloorDownBtn->setIconSize(QSize(45, 45));

        verticalLayout->addWidget(thirdFloorDownBtn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        secondFloorDownBtn = new QPushButton(gridLayoutWidget);
        secondFloorDownBtn->setObjectName("secondFloorDownBtn");
        sizePolicy.setHeightForWidth(secondFloorDownBtn->sizePolicy().hasHeightForWidth());
        secondFloorDownBtn->setSizePolicy(sizePolicy);
        secondFloorDownBtn->setIcon(icon);
        secondFloorDownBtn->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(secondFloorDownBtn);

        secondFloorUpBtn = new QPushButton(gridLayoutWidget);
        secondFloorUpBtn->setObjectName("secondFloorUpBtn");
        sizePolicy.setHeightForWidth(secondFloorUpBtn->sizePolicy().hasHeightForWidth());
        secondFloorUpBtn->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/up"), QSize(), QIcon::Normal, QIcon::Off);
        secondFloorUpBtn->setIcon(icon1);
        secondFloorUpBtn->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(secondFloorUpBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        firstFloorDownBtn = new QPushButton(gridLayoutWidget);
        firstFloorDownBtn->setObjectName("firstFloorDownBtn");
        sizePolicy.setHeightForWidth(firstFloorDownBtn->sizePolicy().hasHeightForWidth());
        firstFloorDownBtn->setSizePolicy(sizePolicy);
        firstFloorDownBtn->setIcon(icon);
        firstFloorDownBtn->setIconSize(QSize(45, 45));

        horizontalLayout_2->addWidget(firstFloorDownBtn);

        firstFloorUpBtn = new QPushButton(gridLayoutWidget);
        firstFloorUpBtn->setObjectName("firstFloorUpBtn");
        sizePolicy.setHeightForWidth(firstFloorUpBtn->sizePolicy().hasHeightForWidth());
        firstFloorUpBtn->setSizePolicy(sizePolicy);
        firstFloorUpBtn->setIcon(icon1);
        firstFloorUpBtn->setIconSize(QSize(45, 45));

        horizontalLayout_2->addWidget(firstFloorUpBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        gFloorUpBtn = new QPushButton(gridLayoutWidget);
        gFloorUpBtn->setObjectName("gFloorUpBtn");
        sizePolicy.setHeightForWidth(gFloorUpBtn->sizePolicy().hasHeightForWidth());
        gFloorUpBtn->setSizePolicy(sizePolicy);
        gFloorUpBtn->setIcon(icon1);
        gFloorUpBtn->setIconSize(QSize(45, 45));

        verticalLayout->addWidget(gFloorUpBtn);

        summonElevatorDockWidget->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, summonElevatorDockWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Elevator", nullptr));
#if QT_CONFIG(tooltip)
        selectFloorDockWidget->setToolTip(QCoreApplication::translate("MainWindow", "Select the floor you want to go to", nullptr));
#endif // QT_CONFIG(tooltip)
        selectFloorDockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Select Floor", nullptr));
        thirdFloorSelectBtn->setText(QCoreApplication::translate("MainWindow", "3rd floor", nullptr));
        secondFloorSelectBtn->setText(QCoreApplication::translate("MainWindow", "2nd floor", nullptr));
        firstFloorSelectBtn->setText(QCoreApplication::translate("MainWindow", "1st floor", nullptr));
        groundFloorSelectBtn->setText(QCoreApplication::translate("MainWindow", "Ground floor", nullptr));
#if QT_CONFIG(tooltip)
        summonElevatorDockWidget->setToolTip(QCoreApplication::translate("MainWindow", "Summon the elevator in the direction you want to go to", nullptr));
#endif // QT_CONFIG(tooltip)
        summonElevatorDockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Summon Elevator", nullptr));
        thirdFloorDownBtn->setText(QString());
        secondFloorDownBtn->setText(QString());
        secondFloorUpBtn->setText(QString());
        firstFloorDownBtn->setText(QString());
        firstFloorUpBtn->setText(QString());
        gFloorUpBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
