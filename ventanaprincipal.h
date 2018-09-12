#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QDialog>

namespace Ui {
class ventanaprincipal;
}

class ventanaprincipal : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaprincipal(QWidget *parent = 0);
    ~ventanaprincipal();

private:
    Ui::ventanaprincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
