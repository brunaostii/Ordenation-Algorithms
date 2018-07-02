#ifndef SORTS_H
#define SORTS_H

#include <QWidget>
#include <QObject>
#include "quicksort.h"
#include "merge.h"
#include <QThread>
#include "shellsort.h"
#include "bubblesort.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "timsort.h"

class Sorts : public QWidget
{
    Q_OBJECT
public:
    explicit Sorts(QWidget *parent = nullptr);
    void startQuick(QBarSet * set);
    void startMerge(QBarSet *set);
    void startShellSort(QBarSet *set);
    void startBubbleSort(QBarSet *set);
    void startSelectionSort(QBarSet *set);
    void startinsertionSort(QBarSet *set);
    void startTimSort(QBarSet *set);
    void startAll(int n);

    QuickSort * quick;
    Merge * mer;
    ShellSort * shell;
    BubbleSort * bubble;
    InsertionSort * inser;
    SelectionSort * sel;
    TimSort *tim;

signals:
    void operate();
    void graph();

public slots:
    void finish();

private:

    QList<QThread *> threads;


    int n;
    int conta_finish = 0;
};

#endif // SORTS_H
