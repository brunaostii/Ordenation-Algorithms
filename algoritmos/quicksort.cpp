#include "quicksort.h"
#include <QTime>
#include <cstdlib>

QuickSort::QuickSort(QObject *parent) : QObject(parent)
{

}

void QuickSort::setSet(QBarSet *s){
    this->s = s;
}

void QuickSort::quicksort(int left, int right){

    int i = left, j = right;
    int aux;
    int pivot = s->at((left + right) / 2);

    while (i <= j) {
       while (++comp && s->at(i) < pivot)
           i++;
       while (++comp && s->at(j) > pivot)
           j--;
       if (i <= j) {
           aux = s->at(i);
           s->replace(i, s->at(j));
           s->replace(j, aux);
           i++;
           j--;
           ++swap;
      }
      QTime *tmp = new QTime();
      tmp->start();
      while(tmp->elapsed() < 200){

      }


    };

      /* recursion */
      if (left < j)
          quicksort(left, j);
      if (i < right)
          quicksort(i, right);

}

void QuickSort::doWork(){
    comp = 0; swap = 0;
    this->quicksort(0, s->count() -1);
    emit resultReady();
}
