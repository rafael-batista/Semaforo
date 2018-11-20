#include "controle.h"
#include "ui_controle.h"

Controle::Controle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Controle)
{
    ui->setupUi(this);

        ConfigInicial_Semaforos_1_2_3_4 = new QTimer(this);
        connect(ConfigInicial_Semaforos_1_2_3_4,SIGNAL(timeout()),this,SLOT(Semaforos_1_2_3_4()));
        ConfigInicial_Semaforos_1_2_3_4->start(100);
        boolConfigInicial_Semaforos_1_2_3_4 = true;

        ConfigInicial_Semaforos_6_7 = new QTimer(this);
        connect(ConfigInicial_Semaforos_6_7,SIGNAL(timeout()),this,SLOT(Semaforos_6_7()));
        ConfigInicial_Semaforos_6_7->start(100);
        boolConfigInicial_Semaforos_6_7 = true;

        ConfigInicial_Pedestre_1_2_3 = new QTimer(this);
        connect(ConfigInicial_Pedestre_1_2_3,SIGNAL(timeout()),this,SLOT(SemaforosPedestre_1_2_3()));
        ConfigInicial_Pedestre_1_2_3->start(200);
        boolConfigInicial_Pedestre_1_2_3 = true;

}

Controle::~Controle()
{
    delete ui;
}

void Controle::Semaforos_1_2_3_4(){
    QPixmap semaforoVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoVermelho.png");
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoVerde.png");

    ui->lbl_semaforo1->setPixmap(semaforoVerde);
    ui->lbl_semaforo2->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVerde);
    ui->lbl_semaforo4->setPixmap(semaforoVerde);
    delay(1500);

    ui->lbl_semaforo1->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo2->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_norte->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_sul->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo4->setPixmap(semaforoAmarelo);
    delay(750);

    ui->lbl_semaforo1->setPixmap(semaforoVermelho);
    ui->lbl_semaforo2->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVermelho);
    ui->lbl_semaforo4->setPixmap(semaforoVermelho);
}

void Controle::SemaforosPedestre_1_2_3(){
    QPixmap semaforoPedestreVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVerde.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");
    QPixmap semaforoPedestreDesabilitado("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreDesabilitado.png");

        ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
        delay(100);
        ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreDesabilitado);
        delay(100);
}

void Controle::SemaforosPedestre_6_7(){
    QPixmap semaforoPedestreVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVerde.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");


}

void Controle::Semaforos_6_7(){
    QPixmap semaforoVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoVermelho.png");
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoVerde.png");

    ui->lbl_semaforo6->setPixmap(semaforoVermelho);
    ui->lbl_semaforo7->setPixmap(semaforoVermelho);
    delay(1000);

    ui->lbl_semaforo6->setPixmap(semaforoVerde);
    ui->lbl_semaforo7->setPixmap(semaforoVerde);
    delay(1500);

    ui->lbl_semaforo6->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo7->setPixmap(semaforoAmarelo);
    delay(750);
}

void Controle::ConfiguracaoInicial(){
    Semaforos_6_7();
}

//1. o fechamento do cruzamento de veículos (Luz amarela e posterior Luz Vermelho)
void Controle::TestaFechamento(){
    QPixmap semaforoVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoVermelho.png");
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoVerde.png");

    QPixmap semaforoPedestreVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVerde.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");

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
    delay(500);

    ui->lbl_semaforo1->setPixmap(semaforoVermelho);
    ui->lbl_semaforo2->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVermelho);
    ui->lbl_semaforo4->setPixmap(semaforoVermelho);
    ui->lbl_semaforo6->setPixmap(semaforoVermelho);
    ui->lbl_semaforo7->setPixmap(semaforoVermelho);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);
    delay(1500);

    ui->lbl_semaforo1->setPixmap(semaforoVerde);
    ui->lbl_semaforo2->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVerde);
    ui->lbl_semaforo4->setPixmap(semaforoVerde);
    ui->lbl_semaforo6->setPixmap(semaforoVerde);
    ui->lbl_semaforo7->setPixmap(semaforoVerde);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVerde);
    delay(1500);
}

//2. a abertura do cruzamento de veículos (Luz Verde)
void Controle::TestaAbertura(){
    QPixmap semaforoVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoVermelho.png");
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoVerde.png");

    QPixmap semaforoPedestreVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVerde.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");

    ui->lbl_semaforo1->setPixmap(semaforoVerde);
    ui->lbl_semaforo2->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVerde);
    ui->lbl_semaforo4->setPixmap(semaforoVerde);
    ui->lbl_semaforo6->setPixmap(semaforoVerde);
    ui->lbl_semaforo7->setPixmap(semaforoVerde);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVerde);
    delay(1500);

    ui->lbl_semaforo1->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo2->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_norte->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_sul->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo4->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo6->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo7->setPixmap(semaforoAmarelo);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVerde);
    delay(500);

    ui->lbl_semaforo1->setPixmap(semaforoVermelho);
    ui->lbl_semaforo2->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVermelho);
    ui->lbl_semaforo4->setPixmap(semaforoVermelho);
    ui->lbl_semaforo6->setPixmap(semaforoVermelho);
    ui->lbl_semaforo7->setPixmap(semaforoVermelho);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);
    delay(1500);
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
    delay(10);

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
    delay(10);
}

void Controle::LiberaObjetos(){
    if(boolConfigInicial_Pedestre_1_2_3){
        delete ConfigInicial_Pedestre_1_2_3;
        boolConfigInicial_Pedestre_1_2_3 = false;
    }

    if(boolConfigInicial_Pedestre_6_7){
        delete ConfigInicial_Pedestre_6_7;
        boolConfigInicial_Pedestre_6_7 = false;
    }

    if(boolConfigInicial_Semaforos_1_2_3_4){
        delete ConfigInicial_Semaforos_1_2_3_4;
        boolConfigInicial_Semaforos_1_2_3_4 = false;
    }

    if(boolConfigInicial_Semaforos_6_7){
        delete ConfigInicial_Semaforos_6_7;
        boolConfigInicial_Semaforos_6_7 = false;
    }

    if(boolSinalDeAlerta){
        delete SinalDeAlerta;
        boolSinalDeAlerta = false;
    }

    if(boolTestaFechamentoCruzamento){
        delete TestaFechamentoCruzamento;
        boolTestaFechamentoCruzamento = false;
    }

    if(boolTestaAberturaCruzamento){
        delete TestaAberturaCruzamento;
        boolTestaAberturaCruzamento = false;
    }

    if(boolConfigInicial_Pedestre_1_2_3){
        delete ConfigInicial_Pedestre_1_2_3;
        boolConfigInicial_Pedestre_1_2_3 = false;
    }
}

void Controle::on_bt_acionar_clicked()
{
    if(ui->cmb_comandos->currentText() == "1. Fechamento do cruzamento de veículos"){
        LiberaObjetos();

        qDebug() << "1. Fechamento do cruzamento de veículos";
        ui->statusBar->showMessage("Comando 1: Luz amarela e posterior Luz vermelha");

        TestaFechamentoCruzamento = new QTimer(this);
        connect(TestaFechamentoCruzamento,SIGNAL(timeout()),this,SLOT(TestaFechamento()));
        TestaFechamentoCruzamento->start(100);
        boolTestaFechamentoCruzamento = true;
    }

    if(ui->cmb_comandos->currentText() == "2. Abertura do cruzamento de veículos"){
        LiberaObjetos();

        qDebug() << "2. Abertura do cruzamento de veículos";
        ui->statusBar->showMessage("Comando 2: Luz verde do sinal de veículos");

        TestaAberturaCruzamento = new QTimer(this);
        connect(TestaAberturaCruzamento,SIGNAL(timeout()),this,SLOT(TestaAbertura()));
        TestaAberturaCruzamento->start(100);
        boolTestaAberturaCruzamento = true;
    }

    if(ui->cmb_comandos->currentText() == "3. Sinal de alerta"){
        LiberaObjetos();

        qDebug() << "3. Sinal de alerta";
        ui->statusBar->showMessage("Comando 3: Luz Amarela intermitente");

        SinalDeAlerta = new QTimer(this);
        connect(SinalDeAlerta,SIGNAL(timeout()),this,SLOT(AmareloIntermitente()));
        SinalDeAlerta->start(100);
        boolSinalDeAlerta = true;
    }

    if(ui->cmb_comandos->currentText() == "4. Abertura do cruzamento de pedestres"){
        LiberaObjetos();

        qDebug() << "4. Abertura do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 4: Luz verde no sinal de pedestres");
    }
    if(ui->cmb_comandos->currentText() == "5. Fechamento do cruzamento de pedestres"){
        LiberaObjetos();

        qDebug() << "5. Fechamento do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 5: Luz vermelha no sinal de pedestres");
    }

    if(ui->cmb_comandos->currentText() == "6. Sinal de alerta para fechamento do cruzamento de pedestres"){
        LiberaObjetos();

        qDebug() << "6. Sinal de alerta para fechamento do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 6: Luz vermelha intermitente no sinal de pedestres");
    }
    if(ui->cmb_comandos->currentText() == "7.  Abertura do cruzamento de veículos parar virar à esquerda"){
        LiberaObjetos();

        qDebug() << "7.  Abertura do cruzamento de veículos parar virar à esquerda";
        ui->statusBar->showMessage("Comando 7: Apenas para o cruzamento entre os pontos 2 e 6");
    }

    if(ui->cmb_comandos->currentText() == "8. Fechamento do cruzamento de veículos para virar à esquerda"){
        LiberaObjetos();

        qDebug() << "8. Fechamento do cruzamento de veículos para virar à esquerda";
        ui->statusBar->showMessage("Comando 8: Apenas para o cruzamento entre os pontos 2 e 6");
    }
}

void Controle::delay(int milisegundos)
{
    QTime dieTime = QTime::currentTime().addMSecs( milisegundos );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
