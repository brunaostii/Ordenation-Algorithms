#include "plot.h"
#include "ui_plot.h"
#include "comparacao.h"



Plot::Plot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Plot){
    ui->setupUi(this);


}


Plot::~Plot()
{
    delete ui;
}

void Plot::criar(){

    b_chartView.append(ui->Oi);
    b_chartView.append(ui->Oi2);
    QString teste;
    sort = new Sorts();

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

    connect(sort, &Sorts::graph, this, &Plot::plot);

    sort->startAll(2);



}
void Plot::ordenado(QString arg, int tam){
    QBarSet *barra = new QBarSet(arg);

    for(int i=0; i < tam; i++){
        barra->append(i);
    }
    set.append(barra);
}

void Plot::invertido(QString arg, int tam){

    QBarSet *barra = new QBarSet(arg);
    for(int i = (tam-1); i >= 0; i--){
        barra->append(i);
    }
    set.append(barra);
}

void Plot::semi(QString arg, int tam){

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

void Plot::desordenado(QString arg, int tam){

        QBarSet *barra = new QBarSet(arg);
        for(int i = 0; i < tam; i++){
            barra->append(ref->at(i));
        }
        set.append(barra);
}

int Plot::aleatorio(int n){
   return rand() % n +1;

}

void Plot::vetor(int tam){
    int aux;
    ref = new QBarSet("Referencia");
    for(int i = 0; i < tam; i++){
        aux = aleatorio(tam);
        ref->append(aux);
    }
}

void Plot::plot(){
    comparacao *comp = new comparacao();

    QBarSet *resul = new QBarSet("Comparações");
    QBarSet *resul1 = new QBarSet("Trocas");
    QString teste;

    for(int i = 0; i < set.count(); i++){
        if(teste.compare(set.at(i)->label(), (QString)"QuickSort", Qt::CaseInsensitive) == 0){
            resul->append(sort->quick->comp);
            resul1->append(sort->quick->swap);
        }
        if(teste.compare(set.at(i)->label(), (QString)"Intercalação (Merge-Sort)", Qt::CaseInsensitive) == 0){
            resul->append(sort->mer->comp);
            resul1->append(sort->mer->swap);
        }
        if(teste.compare(set.at(i)->label(), (QString)"ShellSort", Qt::CaseInsensitive) == 0){
            resul->append(sort->shell->comp);
            resul1->append(sort->shell->swap);
        }
        if(teste.compare(set.at(i)->label(), (QString)"Bolha", Qt::CaseInsensitive) == 0){
            resul->append(sort->bubble->comp);
            resul1->append(sort->bubble->troca);
        }
        if(teste.compare(set.at(i)->label(), (QString)"Seleção", Qt::CaseInsensitive) == 0){
            resul->append(sort->sel->comp);
            resul1->append(sort->sel->swap);
        }
        if(teste.compare(set.at(i)->label(), (QString)"Inserção", Qt::CaseInsensitive) == 0){
            resul->append(sort->inser->comp);
            resul1->append(sort->inser->swap);
        }
        if(teste.compare(set.at(i)->label(), (QString)"TimSort", Qt::CaseInsensitive) == 0){
            resul->append(sort->tim->comp);
            resul1->append(sort->tim->swap);
        }
    }

    //comp->criar(resul, resul1);
    //comp->show();
}
