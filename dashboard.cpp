#include "dashboard.h"
#include "ui_dashboard.h"

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);
    showMaximized();
}

dashboard::~dashboard()
{
    delete ui;
}
