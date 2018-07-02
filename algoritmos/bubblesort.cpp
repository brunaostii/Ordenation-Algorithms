#include "bubblesort.h"
#include <QTime>
#include <cstdlib>

BubbleSort::BubbleSort(QObject *parent) : QObject(parent)
{

}

void BubbleSort::setSet(QBarSet *barra){
    this->barra = barra;
}

void BubbleSort::bubble_sort(){

    int i, j, aux;

    for(i = 1; i < barra->count(); i++){

        for(j = 0;  j< barra->count() -i; j++){

            if(++comp && barra->at(j) > barra->at(j+1)){
                aux = barra->at(j);
                barra->replace(j, barra->at(j+1));
                barra->replace(j+1, aux);
                ++troca;
            }

            QTime *tmp = new QTime();
            tmp->start();
            while(tmp->elapsed() <200){

            }
        }
    }
}

void BubbleSort::doWork(){
    comp = 0; troca = 0;
    this->bubble_sort();
    emit resultReady();
}

