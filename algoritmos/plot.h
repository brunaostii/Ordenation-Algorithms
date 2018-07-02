#ifndef PLOT_H
#define PLOT_H
#include <QtCharts>


#include <QWidget>
#include "sorts.h"

namespace Ui {
class Plot;
}

class Plot : public QWidget
{
    Q_OBJECT

public:
    explicit Plot(QWidget *parent = 0);
    void ordenado(QString arg, int tam);
    void criar();
    void invertido(QString arg, int tam);
    void semi(QString arg, int tam);
    void desordenado(QString arg, int tam);
    int aleatorio(int n);
    void vetor(int tam);
    ~Plot();


public slots:
    void plot();

private:
    Ui::Plot *ui;
    QList<QBarSet *> set;
    QList<QChartView *> b_chartView;
    QList<QChart *> teste;
    QList<QBarSeries *> serie;

    QBarSet *ref;
    Sorts *sort;
};

#endif // PLOT_H
