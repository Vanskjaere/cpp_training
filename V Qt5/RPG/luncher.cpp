#include "luncher.h"
#include "ui_luncher.h"

luncher::luncher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::luncher)
{
    ui->setupUi(this);
}

luncher::~luncher()
{
    delete ui;
}
