#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Retour->setStyleSheet("background-color: red;");
    ui->Avancer->setStyleSheet("background-color: yellow;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

