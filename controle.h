#ifndef CONTROLE_H
#define CONTROLE_H

#include <QMainWindow>

namespace Ui {
class Controle;
}

class Controle : public QMainWindow
{
    Q_OBJECT

public:
    explicit Controle(QWidget *parent = nullptr);
    ~Controle();

private:
    Ui::Controle *ui;
};

#endif // CONTROLE_H
