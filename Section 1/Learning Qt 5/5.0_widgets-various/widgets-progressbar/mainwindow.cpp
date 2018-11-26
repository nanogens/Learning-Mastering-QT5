#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // create a timer that times out every half second
    QTimer *timer = new QTimer(this);
    timer->setInterval(500);
    // by default, the QTimer emits timeout repeatedly after the interval time
    connect(timer,&QTimer::timeout,this,&MainWindow::OnTimeOut);
    //timer->setSingleShot(true);
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnTimeOut()
{
    int value = ui->progressBar->value();
    if(value >= 100)
    {
        return;
    }
    value += 1;
    ui->progressBar->setValue(value);
}
