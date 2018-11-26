#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLineEdit *edit = new QLineEdit("New Edit", this);
    qobject_cast<QFormLayout*>(ui->centralWidget->layout())->addRow("New Label", edit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
