#ifndef PLOT3_H
#define PLOT3_H
#include "plot.h"
#include <QtCharts>
#include <QWidget>
#include "comparacao.h"

namespace Ui {
class plot3;
}

class plot3 : public QWidget
{
    Q_OBJECT

public:
    explicit plot3(QWidget *parent = 0);
    void criar();
    void ordenado(QString arg, int tam);
    void invertido(QString arg, int tam);
    void semi(QString arg, int tam);
    void desordenado(QString arg, int tam);

    int aleatorio(int n);
    void vetor(int tam);

    ~plot3();

public slots:
    void plot();

private:
    Ui::plot3 *ui;
    QList<QBarSet *> set;
    QList<QChartView *> b_chartView;
    QList<QChart *> teste;
    QList<QBarSeries *> serie;
     QBarSet *ref;
};

#endif // PLOT3_H
