#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<time.h>
#include<stdlib.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    srand(time(0));
    int n=rand()%6+1;
    QString s;
    s.sprintf("%d",n);
    ui->label_2->setText(s);
}

