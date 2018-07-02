#ifndef TIMSORT_H
#define TIMSORT_H

#include <QObject>
#include <QtCharts>

class TimSort : public QObject
{
    Q_OBJECT

public:
    explicit TimSort(QObject *parent = nullptr);
    ~TimSort();
    void setSet(QBarSet * s);
    void insertionSort(int left, int right);
    void merge(int p, int q, int r);
    void timSort(int tamanho);

    int comp = 0, swap = 0;

signals:
    void resultReady();

public slots:
    void doWork();
private:
    QBarSet * set;

};

#endif // TIMSORT_H
