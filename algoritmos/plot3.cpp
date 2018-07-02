#include "plot3.h"
#include "ui_plot3.h"
#include "sorts.h"

plot3::plot3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plot3)
{
    ui->setupUi(this);
}

plot3::~plot3()
{
    delete ui;
}

void plot3::criar(){

    b_chartView.append(ui->ac);
    b_chartView.append(ui->ad);
    b_chartView.append(ui->n1);
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
        chart->addSeries(serie);
        chart->legend()->hide();
        chart->setTitle(set.at(i)->label());
        b_chartView.at(i)->setChart(chart);



    }
    connect(sort, &Sorts::graph, this, &plot3::plot);
     sort->startAll(3);
}

void plot3::ordenado(QString arg, int tam){

    QBarSet *barra = new QBarSet(arg);

    for(int i=0; i < tam; i++){
        barra->append(i);
    }
    set.append(barra);
}

void plot3::invertido(QString arg, int tam){

    QBarSet *barra = new QBarSet(arg);
    for(int i = (tam-1); i >= 0; i--){
        barra->append(i);
    }
    set.append(barra);
}

void plot3::semi(QString arg, int tam){

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

void plot3::desordenado(QString arg, int tam){

        QBarSet *barra = new QBarSet(arg);
        for(int i = 0; i < tam; i++){
            barra->append(ref->at(i));
        }
        set.append(barra);
}

int plot3::aleatorio(int n){
   return rand() % n +1;

}

void plot3::vetor(int tam){
    int aux;
    ref = new QBarSet("Referencia");
    for(int i = 0; i < tam; i++){
        aux = aleatorio(tam);
        ref->append(aux);
    }
}

void plot3::plot(){
    //comparacao *comp = new comparacao();

    //comp->show();
}

