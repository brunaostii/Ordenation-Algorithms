#include "comparacao.h"
#include "ui_comparacao.h"

comparacao::comparacao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::comparacao)
{
    ui->setupUi(this);
}

comparacao::~comparacao()
{
    delete ui;
}

void comparacao::criar(QBarSet *set, QBarSet *set1){
    QBarSeries *serie = new QBarSeries();
    serie->append(set);
    QChart *chart = new QChart();
    chart->addSeries(serie);
    chart->legend()->hide();
    chart->setTitle("Comparações");
    chart->createDefaultAxes();

    ui->resul->setChart(chart);

    serie = new QBarSeries();
    serie->append(set1);
    chart = new QChart();
    chart->addSeries(serie);
    chart->legend()->hide();
    chart->setTitle("Trocas");
    chart->createDefaultAxes();

    ui->resul1->setChart(chart);

}

