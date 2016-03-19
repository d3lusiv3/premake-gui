#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QAction* taction = new QAction( this );
    taction->setText( "CHICKEN" );
    ui->menuRecent->addAction( taction );



}

MainWindow::~MainWindow()
{
    delete ui;
}
