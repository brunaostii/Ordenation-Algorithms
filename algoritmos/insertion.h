#ifndef INSERTION_H
#define INSERTION_H

#include <QWidget>

namespace Ui {
class Insertion;
}

class Insertion : public QWidget
{
    Q_OBJECT

public:
    explicit Insertion(QWidget *parent = 0);
    ~Insertion();

private:
    Ui::Insertion *ui;
};

#endif // INSERTION_H
