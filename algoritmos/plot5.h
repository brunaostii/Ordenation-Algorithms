#ifndef PLOT5_H
#define PLOT5_H
#include "plot.h"
#include <QWidget>
#include "comparacao.h"

namespace Ui {
class plot5;
}

class plot5 : public QWidget
{
    Q_OBJECT

public:
    explicit plot5(QWidget *parent = 0);
    void criar();
    void ordenado(QString arg, int tam);
    void invertido(QString arg, int tam);
    void semi(QString arg, int tam);
    void desordenado(QString arg, int tam);
    int aleatorio(int n);
    void vetor(int tam);
    ~plot5();

public slots:
    void plot();

private:
    Ui::plot5 *ui;
    QList<QBarSet *> set;
    QList<QChartView *> b_chartView;
    QList<QChart *> teste;
    QList<QBarSeries *> serie;
     QBarSet *ref;
};

#endif // PLOT5_H
