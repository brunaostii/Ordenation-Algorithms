#ifndef PLOT7_H
#define PLOT7_H
#include "plot.h"
#include <QWidget>
#include "comparacao.h"

namespace Ui {
class plot7;
}

class plot7 : public QWidget
{
    Q_OBJECT

public:
    explicit plot7(QWidget *parent = 0);
    void criar();
    void ordenado(QString arg, int tam);
    void invertido(QString arg, int tam);
    void semi(QString arg, int tam);
    void desordenado(QString arg, int tam);
    int aleatorio(int n);
    void vetor(int tam);
    ~plot7();

public slots:
    void plot();

private:
    Ui::plot7 *ui;
    QList<QBarSet *> set;
    QList<QChartView *> b_chartView;
    QList<QChart *> teste;
    QList<QBarSeries *> serie;
     QBarSet *ref;
};

#endif // PLOT7_H
