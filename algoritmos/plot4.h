#ifndef PLOT4_H
#define PLOT4_H
#include "plot.h"
#include <QWidget>
#include "comparacao.h"

namespace Ui {
class plot4;
}

class plot4 : public QWidget
{
    Q_OBJECT

public:
    explicit plot4(QWidget *parent = 0);
    void criar();
    void ordenado(QString arg, int tam);
    void invertido(QString arg, int tam);
    void semi(QString arg, int tam);
    void desordenado(QString arg, int tam);
    int aleatorio(int n);
    void vetor(int tam);
    ~plot4();

public slots:
    void plot();

private:
    Ui::plot4 *ui;
    QList<QBarSet *> set;
    QList<QChartView *> b_chartView;
    QList<QChart *> teste;
    QList<QBarSeries *> serie;
     QBarSet *ref;
};

#endif // PLOT4_H
