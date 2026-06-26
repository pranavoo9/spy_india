#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "dashboard.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if(username == "kssl" && password == "9090")
    {
        dashboard *dash = new dashboard();

        dash->show();

        this->hide();
    }
     else {
        QMessageBox::warning(this, "Error", "Invalid Username or Password");
    }
}