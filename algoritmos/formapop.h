#ifndef FORMAPOP_H
#define FORMAPOP_H

#include <QWidget>

namespace Ui {
class FormaPop;
}

class FormaPop : public QWidget
{
    Q_OBJECT

public:
    explicit FormaPop(QWidget *parent = 0);
    ~FormaPop();

private:
    Ui::FormaPop *ui;
};

#endif // FORMAPOP_H
