#include "controle.h"
#include "ui_controle.h"

Controle::Controle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Controle)
{
    ui->setupUi(this);
    tempo = new QTimer(this);
    connect(tempo,SIGNAL(timeout()),this,SLOT(AmareloIntermitente0()));
    tempo->start(1000);
    connect(tempo,SIGNAL(timeout()),this,SLOT(AmareloIntermitente1()));
    tempo->start(1000);

}

Controle::~Controle()
{
    delete ui;
}

void Controle::AmareloIntermitente0()
{
    QPixmap semaforoDesligado("/Users/rafael/Documents/Qt creator/Semaforo/resources/semaforoDesligado.png");
    ui->lbl_semaforo1->setPixmap(semaforoDesligado);
}

void Controle::AmareloIntermitente1()
{
    QPixmap semaforoAmarelo("/Users/rafael/Documents/Qt creator/Semaforo/resources/semaforoAmarelo.png");
    ui->lbl_semaforo1->setPixmap(semaforoAmarelo);
}

void Controle::on_bt_acionar_clicked()
{
    if(ui->cmb_comandos->currentText() == "1. Fechamento do cruzamento de veículos"){
        qDebug() << "1. Fechamento do cruzamento de veículos";
        ui->statusBar->showMessage("Comando 1: Luz amarela e posterior Luz vermelha");
    }

    if(ui->cmb_comandos->currentText() == "2. Abertura do cruzamento de veículos"){
        qDebug() << "2. Abertura do cruzamento de veículos";
        ui->statusBar->showMessage("Comando 2: Luz verde do sinal de veículos");
    }

    if(ui->cmb_comandos->currentText() == "3. Sinal de alerta"){
        qDebug() << "3. Sinal de alerta";
        ui->statusBar->showMessage("Comando 3: Luz Amarela intermitente");
    }

    if(ui->cmb_comandos->currentText() == "4. Abertura do cruzamento de pedestres"){
        qDebug() << "4. Abertura do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 4: Luz verde no sinal de pedestres");
    }
    if(ui->cmb_comandos->currentText() == "5. Fechamento do cruzamento de pedestres"){
        qDebug() << "5. Fechamento do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 5: Luz vermelha no sinal de pedestres");
    }

    if(ui->cmb_comandos->currentText() == "6. Sinal de alerta para fechamento do cruzamento de pedestres"){
        qDebug() << "6. Sinal de alerta para fechamento do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 6: Luz vermelha intermitente no sinal de pedestres");
    }
    if(ui->cmb_comandos->currentText() == "7.  Abertura do cruzamento de veículos parar virar à esquerda"){
        qDebug() << "7.  Abertura do cruzamento de veículos parar virar à esquerda";
        ui->statusBar->showMessage("Comando 7: Apenas para o cruzamento entre os pontos 2 e 6");
    }

    if(ui->cmb_comandos->currentText() == "8. Fechamento do cruzamento de veículos para virar à esquerda"){
        qDebug() << "8. Fechamento do cruzamento de veículos para virar à esquerda";
        ui->statusBar->showMessage("Comando 8: Apenas para o cruzamento entre os pontos 2 e 6");
    }
}
