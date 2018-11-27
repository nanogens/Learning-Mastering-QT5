#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel *newLabel = new QLabel("Hello New Tab", this);
    ui->tabWidget->addTab(newLabel, "New Tab");

    // you can use this or the line below to select the tab to make active
    // ui->tabWidget->setCurrentWidget(newLabel);
    ui->tabWidget->setCurrentIndex(1);

    // use the line below if you want to remove a tab (the second tab in this case)
    //ui->tabWidget->removeTab(1);

}

MainWindow::~MainWindow()
{
    delete ui;
}
