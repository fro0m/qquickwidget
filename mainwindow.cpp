#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQuickWidget>
#include "datamodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qmlRegisterType<DataModel>("vmix.datamodel", 1, 0, "DataModel");

    QQuickWidget *view = new QQuickWidget;
    view->setSource(QUrl("qrc:/main.qml"));
    view->setResizeMode(QQuickWidget::SizeRootObjectToView);
    //connect(view, &QQuickWidget::statusChanged, this, &MainWindow::onStatusChangedView);
    //connect(view, &QQuickWidget::sceneGraphError, this, &MainWindow::onSceneGraphError);
    //view->show();
    ui->gridLayout->addWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}
