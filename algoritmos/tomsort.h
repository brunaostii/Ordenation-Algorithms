#ifndef TOMSORT_H
#define TOMSORT_H

#include <QWidget>

namespace Ui {
class tomsort;
}

class tomsort : public QWidget
{
    Q_OBJECT

public:
    explicit tomsort(QWidget *parent = 0);
    ~tomsort();

private:
    Ui::tomsort *ui;
};

#endif // TOMSORT_H

