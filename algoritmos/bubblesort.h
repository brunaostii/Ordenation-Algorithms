#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <QObject>
#include <QtCharts>

class BubbleSort : public QObject
{
    Q_OBJECT
public:
    explicit BubbleSort(QObject *parent = nullptr);
    void bubble_sort();
    void setSet(QBarSet * barra);

    int comp = 0, troca = 0;
signals:
    void resultReady();


public slots:
    void doWork();

private:
    QBarSet * barra;
};

#endif // BUBBLESORT_H
