#ifndef CONTROLE_H
#define CONTROLE_H

#include <QMainWindow>
#include <QDebug>
#include <QPixmap>
#include <QTimer>
#include <QTime>

namespace Ui {
class Controle;
}

class Controle : public QMainWindow
{
    Q_OBJECT

public:
    bool boolConfigInicial_Comando2 = false;
    bool boolSinalDeAlerta = false;
    bool boolComando1Cruzamento = false;

public:
    explicit Controle(QWidget *parent = nullptr);
    ~Controle();

public slots:
    void ConfigDefault();
    void Comando1Fechamento();
    void Comando1();
    void AmareloIntermitente();
    void Comando2();
    void Comando4();
    void Comando5();
    void on_bt_acionar_clicked();
    void delay(int milissegundos);
    void LiberaObjetos();

public:
    Ui::Controle *ui;
    QTimer *SinalDeAlerta;
    QTimer *ConfigInicial_Comando2;
    QTimer *ConfigInicial_Semaforos_6_7;
    QTimer *ConfigInicial_Pedestre_1_2_3;
    QTimer *ConfigInicial_Pedestre_6_7;
    QTimer *Comando1Cruzamento;
};

#endif // CONTROLE_H
