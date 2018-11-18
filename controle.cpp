#include "controle.h"
#include "ui_controle.h"

Controle::Controle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Controle)
{
    ui->setupUi(this);
}

Controle::~Controle()
{
    delete ui;
}

void Controle::AmareloIntermitente()
{
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");
    //Muda os semaforos para amarelo e os semaforos de pedestre para vermelho
    ui->lbl_semaforo1->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo2->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_norte->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_sul->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo4->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo6->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo7->setPixmap(semaforoAmarelo);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);
    qDebug() << "Fim da execução da função SemaforoAmarelo()";
    delay(25);

    QPixmap semaforoDesligado("D:/Rafael Documentos/Documents/Git/resources/semaforoDesligado.png");
    QPixmap semaforoPedestreDesligado("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreDesabilitado.png");
    //Muda os semaforos para a imagem desabilitada
    ui->lbl_semaforo1->setPixmap(semaforoDesligado);
    ui->lbl_semaforo2->setPixmap(semaforoDesligado);
    ui->lbl_semaforo3_norte->setPixmap(semaforoDesligado);
    ui->lbl_semaforo3_sul->setPixmap(semaforoDesligado);
    ui->lbl_semaforo4->setPixmap(semaforoDesligado);
    ui->lbl_semaforo6->setPixmap(semaforoDesligado);
    ui->lbl_semaforo7->setPixmap(semaforoDesligado);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreDesligado);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreDesligado);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreDesligado);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreDesligado);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreDesligado);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreDesligado);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreDesligado);
    qDebug() << "Fim da execução da função SemaforoDesabilitado()";
    delay(25);
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

        tempo = new QTimer(this);
        connect(tempo,SIGNAL(timeout()),this,SLOT(AmareloIntermitente()));
        tempo->start(250);
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

void Controle::delay(int millisecondsToWait)
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
