#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Hello Qt World");

    connect(this, &MainWindow::init, this, &MainWindow::onInit);
    connect(ui->actionMyAction, &QAction::triggered, this, &MainWindow::onShowPopup);
    emit init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onInit()
{
    qDebug("init");
}

void MainWindow::onShowPopup()
{
    Dialog *popup = new Dialog(this);
    popup->show();
    qDebug("onShowPopup finished");
}
