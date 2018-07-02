#ifndef COMPARACAO_H
#define COMPARACAO_H
#include "plot.h"
#include <QWidget>

namespace Ui {
class comparacao;
}

class comparacao : public QWidget
{
    Q_OBJECT

public:
    explicit comparacao(QWidget *parent = 0);
    void criar(QBarSet *set, QBarSet *set1);
    ~comparacao();

private:
    Ui::comparacao *ui;
    QList<QBarSet *> set;
    QChartView b_chartView;
};

#endif // COMPARACAO_H
