#ifndef CONTROLE_H
#define CONTROLE_H

#include <QMainWindow>
#include <QDebug>
#include <QPixmap>
#include <QTimer>

namespace Ui {
class Controle;
}

class Controle : public QMainWindow
{
    Q_OBJECT

public:
    explicit Controle(QWidget *parent = nullptr);
    ~Controle();

public slots:
    void AmareloIntermitente0();
    void AmareloIntermitente1();

private slots:
    void on_bt_acionar_clicked();

private:
    Ui::Controle *ui;
    QTimer *tempo;
};

#endif // CONTROLE_H
