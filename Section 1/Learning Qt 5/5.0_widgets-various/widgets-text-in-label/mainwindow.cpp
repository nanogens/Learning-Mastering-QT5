#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    const QString textSrc("Hello World.  This is some demo text."
                          "This doesn't mean much but we will test the "
                          "label widget in the text browser widget.");
    ui->label->setText(textSrc);
    ui->textBrowser->setText(textSrc);
}

MainWindow::~MainWindow()
{
    delete ui;
}
