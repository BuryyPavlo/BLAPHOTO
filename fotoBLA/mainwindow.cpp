#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QTextEdit>
#include  <cstring>
#include <QChar>
#include <QStringList>

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

void MainWindow::on_openTxt_clicked()
{// вибір файлу через діалог
    QString fileName = QFileDialog::getOpenFileName(this,QString::fromUtf8("Відкрити файл"),QDir::currentPath(),
                                                    "*txt file (*.txt);;");
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
        {
           QMessageBox::critical(this,"Помилка ",QString::fromUtf8("Помилка читання файлу!"),
                                 QMessageBox::Ok);
            return;
        }
    QTextStream stream(&file);
    QStringList str;
    int numberRows=0;
    while (!stream.atEnd())
    {
        str.append(stream.readLine());
        numberRows++;
    }
    QMessageBox::critical(this,"file ", QString::number(numberRows),QMessageBox::Ok);
    int i=0;
    for (i=0; i<=numberRows; i++){
    QMessageBox::information(this,"file ", str.at(i),QMessageBox::Ok);
    }

}
