#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    plainText = true;
    ui->setupUi(this);

    connect(ui->comboBox, &QComboBox::currentTextChanged, this, &MainWindow::onComboBoxChanged);
    connect(ui->textEdit, &QTextEdit::textChanged, this, &MainWindow::updateTextBrowser);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTextBrowser()
{
    QString text = ui->textEdit->document()->toPlainText();
    if (plainText) {
        ui->textBrowser->setPlainText(text);
    } else {
        ui->textBrowser->setHtml(text);
    }
}

void MainWindow::onComboBoxChanged(const QString &text)
{
    plainText = (text == "Plain");
    updateTextBrowser();
}
