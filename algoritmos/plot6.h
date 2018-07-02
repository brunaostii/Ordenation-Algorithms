#ifndef PLOT6_H
#define PLOT6_H
#include "plot.h"
#include <QWidget>
#include "comparacao.h"
namespace Ui {
class plot6;
}

class plot6 : public QWidget
{
    Q_OBJECT

public:
    explicit plot6(QWidget *parent = 0);
    void criar();
    void ordenado(QString arg, int tam);
    void invertido(QString arg, int tam);
    void semi(QString arg, int tam);
    void desordenado(QString arg, int tam);
    int aleatorio(int n);
    void vetor(int tam);
    ~plot6();

public slots:
    void plot();


private:
    Ui::plot6 *ui;
    QList<QBarSet *> set;
    QList<QChartView *> b_chartView;
    QList<QChart *> teste;
    QList<QBarSeries *> serie;
     QBarSet *ref;
};

#endif // PLOT6_H
