#include "timsort.h"
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include <QTime>

const int RUN = 32;

TimSort::TimSort(QObject *parent) :
    QObject(parent)
{

}

TimSort::~TimSort()
{
}

void TimSort::insertionSort(int left, int right) {

    for (int i = left + 1; i <= right; i++)
    {
        int temp = set->at(i);
        int j = i - 1;
        while (set->at(j) > temp && j >= left)
        {
            set->replace(j+1, set->at(j));
            j--;
        }
        set->replace(j+1, temp);

        QTime *tmp = new QTime();
        tmp->start();
        while(tmp->elapsed() < 200){

        }
    }
}


void TimSort::merge(int p, int q, int r) {

    int i, j;
    int n1 = q - p + 1;
    int n2 = r - q;
    int *L1 = (int*) malloc((n1 + 1) * sizeof(int));
    int *L2 = (int*) malloc((n2 + 1) * sizeof(int));

    for(i = 0; i < n1; i++)
        L1[i] = set->at(p + i);
    for(j = 0; j < n2; j++)
        L2[j] = set->at(q + j + 1);

    L1[n1] = INT_MAX;
    L2[n2] = INT_MAX;

    i = j = 0;

    int k;
    for(k = p; k <= r; k++) {
        if(L1[i] <= L2[j]) {
            set->replace(k,  L1[i]);
            i++;
        }
        else {
            set->replace(k, L2[j]);
            j++;
        }
        QTime *tmp = new QTime();
        tmp->start();
        while(tmp->elapsed() < 200){

        }
    }

    free(L1);
    free(L2);
}

int min(int a, int b) {
    if(a < b) return a;
    else return b;
}


void TimSort::timSort(int tamanho) {

    int i;
    for(i = 0; i < tamanho; i += RUN) {
        insertionSort(i, min((i + 31), (tamanho - 1)));
    }


    int size, left, right, mid;
    for(size = RUN; size < tamanho; size *= 2){
        for(left = 0; left < tamanho; left += 2 * size){
            mid = left + size - 1;
            right = min((left + 2 * size - 1), (tamanho - 1));

            merge(left, mid, right);
        }
    }
}

void TimSort::setSet(QBarSet *s){
    this->set = s;
}

void TimSort::doWork(){
    this->timSort(set->count());

    emit resultReady();

}
