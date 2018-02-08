#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/Img/login-icon.png");
    int w =ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->Username -> text();
    QString password = ui->Password -> text();
    if (username == "test" && password == "test"){
        //We can add the QMessageBox too but we will try for statusBar
        //QMessageBox::information(this,"Login", "Welcome");
        //hide();
        //secDialog = new SecDialog(this);
        //secDialog->show();

        ui->statusBar->showMessage("Welcome", 1000);
    }
    else{
       // QMessageBox::warning(this,"Login","Username and Password is not correct!!");
        ui->statusBar->showMessage("Username and Password is not correct!!");
    }

}
