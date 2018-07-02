#include "mainwindow.h"
#include "random.h"
#include "obn.h"
#include "ui_mainwindow.h"
#include "random.cpp"
#include "formapop.h"
#include "plot.h"
#include "plot3.h"
#include "plot4.h"
#include "plot5.h"
#include "plot6.h"
#include "plot7.h"
#include "comparacao.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL (clicked(bool)), this, SLOT (inicia()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::inicia(){
    FormaPop *pop = new FormaPop();


    nome.append(ui->quicksort);
    nome.append(ui->selecao);
    nome.append(ui->intercalacao);
    nome.append(ui->shellsort);
    nome.append(ui->bolha);
    nome.append(ui->tomsort);
    nome.append(ui->insercao);

    QString box[45];
    int tam = ui->spinBox->value();
    int cont = 0;
    QString tipo = ui->comboBox->currentText();
    QList <QString> metodo;

    for(int i=0; i < 7; i++){
        if(nome.at(i)->checkState() == Qt::Checked){
            cont++;
            metodo.append(nome.at(i)->text());
        }
    }


       if(cont == 1){
           pop->show();
       }
       else{

       int ord = (ui->comboBox->currentIndex());
       interface(cont, ord, tam, metodo);

}

 }

void MainWindow::interface(int qt, int ord, int tam, QList<QString> metodo){



    if(qt == 2){
        Plot *plotabruna = new Plot();
        switch(ord){
        case 0:
             plotabruna->ordenado(metodo.at(0), tam);
             plotabruna->ordenado(metodo.at(1), tam);
            break;
        case 1:

            plotabruna->semi(metodo.at(0), tam);
            plotabruna->semi(metodo.at(1), tam);
            break;

        case 2:
            plotabruna->vetor(tam);
            plotabruna->desordenado(metodo.at(0), tam);
            plotabruna->desordenado(metodo.at(1), tam);
            break;
        case 3:
            plotabruna->invertido(metodo.at(0), tam);
            plotabruna->invertido(metodo.at(1), tam);
           break;
        }
        plotabruna->criar();
        plotabruna->show();
    }
    if(qt == 3){
        plot3 *plotabruna = new plot3();
        switch(ord){
        case 0:
             plotabruna->ordenado(metodo.at(0), tam);
             plotabruna->ordenado(metodo.at(1),tam);
             plotabruna->ordenado(metodo.at(2), tam);
            break;
        case 1:

            plotabruna->semi(metodo.at(0), tam);
            plotabruna->semi(metodo.at(1), tam);
            plotabruna->semi(metodo.at(2),tam);


            break;

        case 2:
             plotabruna->vetor(tam);
            plotabruna->desordenado(metodo.at(0), tam);
            plotabruna->desordenado(metodo.at(1), tam);
            plotabruna->desordenado(metodo.at(2), tam);

            break;
        case 3:
            plotabruna->invertido(metodo.at(0), tam);
            plotabruna->invertido(metodo.at(1), tam);
            plotabruna->invertido(metodo.at(2), tam);

           break;
        }
        plotabruna->criar();
        plotabruna->show();
    }
    if(qt == 4){
        plot4 *plotabruna = new plot4();
        switch(ord){
        case 0:
             plotabruna->ordenado(metodo.at(0), tam);
             plotabruna->ordenado(metodo.at(1), tam);
             plotabruna->ordenado(metodo.at(2), tam);
             plotabruna->ordenado(metodo.at(3), tam);
            break;
        case 1:
            plotabruna->semi(metodo.at(0), tam);
            plotabruna->semi(metodo.at(1), tam);
            plotabruna->semi(metodo.at(2), tam);
            plotabruna->semi(metodo.at(3), tam);
            break;

        case 2:
             plotabruna->vetor(tam);
            plotabruna->desordenado(metodo.at(0), tam);
            plotabruna->desordenado(metodo.at(1), tam);
            plotabruna->desordenado(metodo.at(2), tam);
            plotabruna->desordenado(metodo.at(3), tam);
            break;
        case 3:
            plotabruna->invertido(metodo.at(0), tam);
            plotabruna->invertido(metodo.at(1), tam);
            plotabruna->invertido(metodo.at(2), tam);
            plotabruna->invertido(metodo.at(3), tam);
           break;
        }
        plotabruna->criar();
        plotabruna->show();
    }
    if(qt == 5){
        plot5 *plotabruna = new plot5();
        switch(ord){
        case 0:
             plotabruna->ordenado(metodo.at(0), tam);
             plotabruna->ordenado(metodo.at(1), tam);
             plotabruna->ordenado(metodo.at(2), tam);
             plotabruna->ordenado(metodo.at(3), tam);
             plotabruna->ordenado(metodo.at(4), tam);
            break;
        case 1:

            plotabruna->semi(metodo.at(0), tam);
            plotabruna->semi(metodo.at(1), tam);
            plotabruna->semi(metodo.at(2), tam);
            plotabruna->semi(metodo.at(3), tam);
            plotabruna->semi(metodo.at(4), tam);
            break;

        case 2:
             plotabruna->vetor(tam);
            plotabruna->desordenado(metodo.at(0), tam);
            plotabruna->desordenado(metodo.at(1), tam);
            plotabruna->desordenado(metodo.at(2), tam);
            plotabruna->desordenado(metodo.at(3), tam);
            plotabruna->desordenado(metodo.at(4), tam);
            break;
        case 3:
            plotabruna->invertido(metodo.at(0), tam);
            plotabruna->invertido(metodo.at(1), tam);
            plotabruna->invertido(metodo.at(2), tam);
            plotabruna->invertido(metodo.at(3), tam);
            plotabruna->invertido(metodo.at(4), tam);
           break;
        }
        plotabruna->criar();
        plotabruna->show();
    }
    if(qt == 6){
        plot6 *plotabruna = new plot6();
        switch(ord){
        case 0:
            plotabruna->ordenado(metodo.at(0), tam);
            plotabruna->ordenado(metodo.at(1), tam);
            plotabruna->ordenado(metodo.at(2), tam);
            plotabruna->ordenado(metodo.at(3), tam);
            plotabruna->ordenado(metodo.at(4), tam);
             plotabruna->ordenado(metodo.at(5), tam);
            break;
        case 1:

            plotabruna->semi(metodo.at(0), tam);
            plotabruna->semi(metodo.at(1), tam);
            plotabruna->semi(metodo.at(2), tam);
            plotabruna->semi(metodo.at(3), tam);
            plotabruna->semi(metodo.at(4), tam);
            plotabruna->semi(metodo.at(5), tam);
            break;

        case 2:
             plotabruna->vetor(tam);
            plotabruna->desordenado(metodo.at(0), tam);
            plotabruna->desordenado(metodo.at(1), tam);
            plotabruna->desordenado(metodo.at(2), tam);
            plotabruna->desordenado(metodo.at(3), tam);
            plotabruna->desordenado(metodo.at(4), tam);
            plotabruna->desordenado(metodo.at(5), tam);
            break;
        case 3:
            plotabruna->invertido(metodo.at(0), tam);
            plotabruna->invertido(metodo.at(1), tam);
            plotabruna->invertido(metodo.at(2), tam);
            plotabruna->invertido(metodo.at(3), tam);
            plotabruna->invertido(metodo.at(4), tam);
            plotabruna->invertido(metodo.at(5), tam);
           break;
        }
        plotabruna->criar();
        plotabruna->show();
    }
    if(qt == 7){
        plot7 *plotabruna = new plot7();
        switch(ord){
        case 0:
            plotabruna->ordenado(metodo.at(0), tam);
            plotabruna->ordenado(metodo.at(1), tam);
            plotabruna->ordenado(metodo.at(2), tam);
            plotabruna->ordenado(metodo.at(3), tam);
            plotabruna->ordenado(metodo.at(4), tam);
             plotabruna->ordenado(metodo.at(5), tam);
             plotabruna->ordenado(metodo.at(6), tam);
            break;
        case 1:

            plotabruna->semi(metodo.at(0), tam);
            plotabruna->semi(metodo.at(1), tam);
            plotabruna->semi(metodo.at(2), tam);
            plotabruna->semi(metodo.at(3), tam);
            plotabruna->semi(metodo.at(4), tam);
            plotabruna->semi(metodo.at(5), tam);
            plotabruna->semi(metodo.at(6), tam);
            break;

        case 2:
             plotabruna->vetor(tam);
            plotabruna->desordenado(metodo.at(0), tam);
            plotabruna->desordenado(metodo.at(1), tam);
            plotabruna->desordenado(metodo.at(2), tam);
            plotabruna->desordenado(metodo.at(3), tam);
            plotabruna->desordenado(metodo.at(4), tam);
            plotabruna->desordenado(metodo.at(5), tam);
            plotabruna->desordenado(metodo.at(6), tam);
            break;
        case 3:
            plotabruna->invertido(metodo.at(0), tam);
            plotabruna->invertido(metodo.at(1), tam);
            plotabruna->invertido(metodo.at(2), tam);
            plotabruna->invertido(metodo.at(3), tam);
            plotabruna->invertido(metodo.at(4), tam);
            plotabruna->invertido(metodo.at(5), tam);
            plotabruna->invertido(metodo.at(6), tam);
           break;
        }
        plotabruna->criar();
        plotabruna->show();
    }

}

