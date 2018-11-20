#ifndef CONTROLE_H
#define CONTROLE_H

#include <QMainWindow>
#include <QDebug>
#include <QPixmap>
#include <QTimer>
#include <QTime>
#include <thread>

using namespace std;

namespace Ui {
class Controle;
}

class Controle : public QMainWindow
{
    Q_OBJECT

public:
    bool boolConfigInicial_Pedestre_1_2_3 = false;
    bool boolConfigInicial_Pedestre_6_7 = false;
    bool boolConfigInicial_Semaforos_1_2_3_4 = false;
    bool boolConfigInicial_Semaforos_6_7 = false;
    bool boolSinalDeAlerta = false;
    bool boolTestaFechamentoCruzamento = false;
    bool boolTestaAberturaCruzamento = false;

public:
    explicit Controle(QWidget *parent = nullptr);
    ~Controle();

public slots:
    void AmareloIntermitente();

    void ConfiguracaoInicial();

    void Semaforos_1_2_3_4();

    void Semaforos_6_7();

    void SemaforosPedestre_1_2_3();

    void SemaforosPedestre_6_7();

    void TestaAbertura();

    void TestaFechamento();

    void FechaPedestre();

    void on_bt_acionar_clicked();

    void delay(int milisegundos);

    void LiberaObjetos();


public:
    Ui::Controle *ui;
    QTimer *SinalDeAlerta;
    QTimer *ConfigInicial_Semaforos_1_2_3_4;
    QTimer *ConfigInicial_Semaforos_6_7;
    QTimer *ConfigInicial_Pedestre_1_2_3;
    QTimer *ConfigInicial_Pedestre_6_7;
    QTimer *TestaFechamentoCruzamento;
    QTimer *TestaAberturaCruzamento;
};

#endif // CONTROLE_H
