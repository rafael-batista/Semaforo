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
    bool boolConfigInicial_Pedestre_1_2_3 = false;
    bool boolConfigInicial_Pedestre_6_7 = false;
    bool boolConfigInicial_SemaforosCruzamento = false;
    bool boolConfigInicial_Semaforos_6_7 = false;
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
    void SemaforosCruzamento();
    void Semaforos_6_7();
    void SemaforosPedestre_1_2_3();
    void FechaPedestre();
    void on_bt_acionar_clicked();
    void delay(int milissegundos);
    void LiberaObjetos();

public:
    Ui::Controle *ui;
    QTimer *SinalDeAlerta;
    QTimer *ConfigInicial_SemaforosCruzamento;
    QTimer *ConfigInicial_Semaforos_6_7;
    QTimer *ConfigInicial_Pedestre_1_2_3;
    QTimer *ConfigInicial_Pedestre_6_7;
    QTimer *Comando1Cruzamento;
};

#endif // CONTROLE_H
