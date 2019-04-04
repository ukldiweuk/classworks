#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <ctime>
#include<QFileDialog>
#include <Qdebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   srand(time(NULL));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_generateNumButton_clicked()
{

    int from = ui->from->value();
    int to = ui->to->value();
    int random  = rand() % (to - from + 1) + from ;
    ui->ShowNumber->display(random);
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "C:\\Users\\Default\\Documents");
    qDebug() << fileName;
    QFile file(fileName);
    file.open(QIODevice::ReadWrite);
    QTextStream stream(&file);
    stream << ui->ShowNumber->intValue();
    file.close();











}
