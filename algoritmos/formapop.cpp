#include "formapop.h"
#include "ui_formapop.h"

FormaPop::FormaPop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormaPop)
{
    ui->setupUi(this);
}

FormaPop::~FormaPop()
{
    delete ui;
}
