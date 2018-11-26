#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic;
    pic.load("FlashLidarScanner.jpg");
    ui->label->setPixmap(pic);
}

MainWindow::~MainWindow()
{
    delete ui;
}
