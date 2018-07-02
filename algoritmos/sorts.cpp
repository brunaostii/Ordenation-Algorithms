#include "sorts.h"


Sorts::Sorts(QWidget *parent) : QWidget(parent)
{

}

void Sorts::startQuick(QBarSet *set){
    quick = new QuickSort();
    quick->setSet(set);

    QThread *thread = new QThread();
    quick->moveToThread(thread);

    connect(thread, &QThread::finished, quick, &QObject::deleteLater);
    connect(this, &Sorts::operate, quick, &QuickSort::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startMerge(QBarSet *set){
    mer = new Merge();
    mer->setSet(set);

    QThread *thread = new QThread();
    mer->moveToThread(thread);

    connect(thread, &QThread::finished, mer, &QObject::deleteLater);
    connect(this, &Sorts::operate, mer, &Merge::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startShellSort(QBarSet *set){
    shell = new ShellSort();
    shell->setSet(set);

    QThread *thread = new QThread();
    shell->moveToThread(thread);

    connect(thread, &QThread::finished, shell, &QObject::deleteLater);
    connect(this, &Sorts::operate, shell, &ShellSort::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startBubbleSort(QBarSet *set){

    bubble = new BubbleSort();
    bubble->setSet(set);

    QThread *thread = new QThread();
    bubble->moveToThread(thread);

    connect(thread, &QThread::finished, bubble, &QObject::deleteLater);
    connect(this, &Sorts::operate, bubble, &BubbleSort::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startSelectionSort(QBarSet *set){
    sel = new SelectionSort();
    sel->setSet(set);

    QThread *thread = new QThread();
    sel->moveToThread(thread);

    connect(thread, &QThread::finished, sel, &QObject::deleteLater);
    connect(this, &Sorts::operate, sel, &SelectionSort::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startinsertionSort(QBarSet *set){
    inser = new InsertionSort();
    inser->setSet(set);

    QThread *thread = new QThread();
    inser->moveToThread(thread);

    connect(thread, &QThread::finished, inser, &QObject::deleteLater);
    connect(this, &Sorts::operate, inser, &InsertionSort::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startTimSort(QBarSet *set){
    tim = new TimSort();
    tim->setSet(set);

    QThread *thread = new QThread();
    tim->moveToThread(thread);

    connect(thread, &QThread::finished, tim, &QObject::deleteLater);
    connect(this, &Sorts::operate, tim, &TimSort::doWork);
    connect(quick, &QuickSort::resultReady, this, &Sorts::finish);

    thread->start();
    threads << thread;
}

void Sorts::startAll(int n){
    this->n = n;
    emit operate();
}

void Sorts::finish(){
    conta_finish++;
    if(conta_finish == n){
        emit graph();
    }
}
