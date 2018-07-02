#include "plot7.h"
#include "ui_plot7.h"
#include "sorts.h"

plot7::plot7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plot7)
{
    ui->setupUi(this);
}

plot7::~plot7()
{
    delete ui;
}

void plot7::criar(){

    b_chartView.append(ui->a1);
    b_chartView.append(ui->a2);
    b_chartView.append(ui->a3);
    b_chartView.append(ui->a4);
    b_chartView.append(ui->a5);
    b_chartView.append(ui->a6);
    b_chartView.append(ui->a7);

    QString teste;
    Sorts *sort = new Sorts();

    for(int i =0; i < set.count(); i++){
        if(teste.compare(set.at(i)->label(), (QString)"QuickSort", Qt::CaseInsensitive) == 0){
            sort->startQuick(set.at(i));
        }
        if(teste.compare(set.at(i)->label(), (QString)"Intercalação (Merge-Sort)", Qt::CaseInsensitive) == 0){
            sort->startMerge(set.at(i));
        }
        if(teste.compare(set.at(i)->label(), (QString)"ShellSort", Qt::CaseInsensitive) == 0){
            sort->startShellSort(set.at(i));
        }
        if(teste.compare(set.at(i)->label(), (QString)"Bolha", Qt::CaseInsensitive) == 0){
            sort->startBubbleSort(set.at(i));
        }
        if(teste.compare(set.at(i)->label(), (QString)"Seleção", Qt::CaseInsensitive) == 0){
            sort->startSelectionSort(set.at(i));
        }
        if(teste.compare(set.at(i)->label(), (QString)"Inserção", Qt::CaseInsensitive) == 0){
            sort->startinsertionSort(set.at(i));
        }
        if(teste.compare(set.at(i)->label(), (QString)"TimSort", Qt::CaseInsensitive) == 0){
            sort->startTimSort(set.at(i));
        }
        QBarSeries *serie = new QBarSeries();

        serie->append(set.at(i));
        QChart *chart = new QChart();
        //chart->addSeries(serie);
        chart->addSeries(serie);
        chart->legend()->hide();
        chart->setTitle(set.at(i)->label());
        b_chartView.at(i)->setChart(chart);
        //teste.at(i)->legend()->hide();
        //chart->setTitle("Quicksort");
        //chart->legend()->hide();
        //chart->createDefaultAxes();

    }
    connect(sort, &Sorts::graph, this, &plot7::plot);
    sort->startAll(7);
}

void plot7::ordenado(QString arg, int tam){

    QBarSet *barra = new QBarSet(arg);

    for(int i=0; i < tam; i++){
        barra->append(i);
    }
    set.append(barra);
}

void plot7::invertido(QString arg, int tam){

    QBarSet *barra = new QBarSet(arg);
    for(int i = (tam-1); i >= 0; i--){
        barra->append(i);
    }
    set.append(barra);
}

void plot7::semi(QString arg, int tam){

    QBarSet *barra = new QBarSet(arg);

    for(int j = 1, i=0; j <= tam; j++ ){
        if(j%5==0){
          i=j+5;
          if(i>=tam){
             i=tam;
          }
          barra->append(i);
        }else{
          barra->append(j);
        }
        set.append(barra);

    }
}

void plot7::desordenado(QString arg, int tam){

        QBarSet *barra = new QBarSet(arg);
        for(int i = 0; i < tam; i++){
            barra->append(ref->at(i));
        }
        set.append(barra);
}

int plot7::aleatorio(int n){
   return rand() % n +1;

}

void plot7::vetor(int tam){
    int aux;
    ref = new QBarSet("Referencia");
    for(int i = 0; i < tam; i++){
        aux = aleatorio(tam);
        ref->append(aux);
    }
}

void plot7::plot(){
    //comparacao *comp = new comparacao();

    //comp->show();
}

