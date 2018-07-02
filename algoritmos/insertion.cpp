#include "insertion.h"
#include "ui_insertion.h"

Insertion::Insertion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Insertion)
{
    ui->setupUi(this);
}

Insertion::~Insertion()
{
    delete ui;
}
