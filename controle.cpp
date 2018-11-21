#include "controle.h"
#include "ui_controle.h"

Controle::Controle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Controle)
{
    ui->setupUi(this);
    ConfigDefault();
}

Controle::~Controle()
{
    delete ui;
}

void Controle::Comando1Fechamento(){
    Comando1Cruzamento = new QTimer(this);
    connect(Comando1Cruzamento,SIGNAL(timeout()),this,SLOT(Comando1()));
    Comando1Cruzamento->start(100);
    boolComando1Cruzamento = true;
}

//"1. Fechamento do cruzamento de veículos vias 1, 2, 3 e 4"
void Controle::Comando1(){
    QPixmap semaforoVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoVermelho.png");
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoVerde.png");

    QPixmap semaforoPedestreVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVerde.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");
    QPixmap semaforoPedestreDesabilitado("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreDesabilitado.png");

    ui->lbl_semaforo1->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo2->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_norte->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_sul->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo4->setPixmap(semaforoAmarelo);
    delay(750);

    for (int i=0; i<5;i++) {
        ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreDesabilitado);
        delay(100);
        ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);
        delay(100);
    }

    ui->lbl_semaforo6->setPixmap(semaforoVerde);
    ui->lbl_semaforo7->setPixmap(semaforoVerde);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);

    ui->lbl_semaforo1->setPixmap(semaforoVermelho);
    ui->lbl_semaforo2->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVermelho);
    ui->lbl_semaforo4->setPixmap(semaforoVermelho);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVerde);

    delay(750);
    ui->lbl_semaforo6->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo7->setPixmap(semaforoAmarelo);

    for (int i=0; i<5;i++) {
        ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreDesabilitado);
        delay(100);
        ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);
        delay(100);
    }

    ui->lbl_semaforo1->setPixmap(semaforoVerde);
    ui->lbl_semaforo2->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVerde);
    ui->lbl_semaforo4->setPixmap(semaforoVerde);
    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);

    ui->lbl_semaforo6->setPixmap(semaforoVermelho);
    ui->lbl_semaforo7->setPixmap(semaforoVermelho);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVerde);
    delay(1500);
}

void Controle::ConfigDefault(){
    ConfigInicial_Comando2 = new QTimer(this);
    connect(ConfigInicial_Comando2,SIGNAL(timeout()),this,SLOT(Comando2()));
    ConfigInicial_Comando2->start(100);
    boolConfigInicial_Comando2 = true;
}

//Configuração padrão e comando 2. Abertura do cruzamento de veículos vias 1, 2, 3 e 4
void Controle::Comando2(){
    QPixmap semaforoVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoVermelho.png");
    QPixmap semaforoAmarelo("D:/Rafael Documentos/Documents/Git/resources/semaforoAmarelo.png");
    QPixmap semaforoVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoVerde.png");

    QPixmap semaforoPedestreVerde("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVerde.png");
    QPixmap semaforoPedestreVermelho("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreVermelho.png");
    QPixmap semaforoPedestreDesabilitado("D:/Rafael Documentos/Documents/Git/resources/semaforoPedestreDesabilitado.png");

    for (int i=0; i<5;i++) {
        ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreDesabilitado);
        delay(100);
        ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);
        delay(100);
    }

    ui->lbl_semaforo1->setPixmap(semaforoVerde);
    ui->lbl_semaforo2->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVerde);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVerde);
    ui->lbl_semaforo4->setPixmap(semaforoVerde);
    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVermelho);

    ui->lbl_semaforo6->setPixmap(semaforoVermelho);
    ui->lbl_semaforo7->setPixmap(semaforoVermelho);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVerde);
    delay(1500);

    ui->lbl_semaforo1->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo2->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_norte->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo3_sul->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo4->setPixmap(semaforoAmarelo);
    delay(750);

    for (int i=0; i<5;i++) {
        ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreDesabilitado);
        ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreDesabilitado);
        delay(100);
        ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
        ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);
        delay(100);
    }

    ui->lbl_semaforo6->setPixmap(semaforoVerde);
    ui->lbl_semaforo7->setPixmap(semaforoVerde);
    ui->lbl_semaforoPedestre6->setPixmap(semaforoPedestreVermelho);
    ui->lbl_semaforoPedestre7->setPixmap(semaforoPedestreVermelho);

    ui->lbl_semaforo1->setPixmap(semaforoVermelho);
    ui->lbl_semaforo2->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_norte->setPixmap(semaforoVermelho);
    ui->lbl_semaforo3_sul->setPixmap(semaforoVermelho);
    ui->lbl_semaforo4->setPixmap(semaforoVermelho);

    ui->lbl_semaforoPedestre1->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre2->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_norte->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre3_sul->setPixmap(semaforoPedestreVerde);
    ui->lbl_semaforoPedestre4->setPixmap(semaforoPedestreVerde);

    delay(750);
    ui->lbl_semaforo6->setPixmap(semaforoAmarelo);
    ui->lbl_semaforo7->setPixmap(semaforoAmarelo);
}

//3. Sinal de alerta
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


//4. Abertura do cruzamento de pedestres vias 1, 2, 3 e 4
void Controle::Comando4(){
    Comando1Fechamento();
}

//5. Fechamento do cruzamento de pedestres vias 1, 2, 3 e 4
void Controle::Comando5(){
    ConfigDefault();
}

void Controle::LiberaObjetos(){
    if(boolConfigInicial_Comando2){
        delete ConfigInicial_Comando2;
        boolConfigInicial_Comando2 = false;
    }

    if(boolSinalDeAlerta){
        delete SinalDeAlerta;
        boolSinalDeAlerta = false;
    }

    if(boolComando1Cruzamento){
        delete Comando1Cruzamento;
        boolComando1Cruzamento = false;
    }
}

void Controle::on_bt_acionar_clicked()
{
    if(ui->cmb_comandos->currentText() == "1. Fechamento do cruzamento de veículos vias 1, 2, 3 e 4"){
        LiberaObjetos();

        qDebug() << "1. Fechamento do cruzamento de veículos";
        ui->statusBar->showMessage("Comando 1: Luz amarela e posterior Luz vermelha, vias 1, 2, 3 e 4");

        Comando1Fechamento();
    }

    if(ui->cmb_comandos->currentText() == "2. Abertura do cruzamento de veículos vias 1, 2, 3 e 4"){
        LiberaObjetos();

        qDebug() << "2. Abertura do cruzamento de veículos vias 1, 2, 3 e 4 ";
        ui->statusBar->showMessage("Comando 2: Luz verde do sinal de veículos, abertura das vias 1, 2, 3 e 4");

        ConfigDefault();
    }

    if(ui->cmb_comandos->currentText() == "3. Sinal de alerta"){
        LiberaObjetos();

        qDebug() << "3. Sinal de alerta";
        ui->statusBar->showMessage("Comando 3: Sinal de alerta, semáforos piscando de maneira intermitente");

        SinalDeAlerta = new QTimer(this);
        connect(SinalDeAlerta,SIGNAL(timeout()),this,SLOT(AmareloIntermitente()));
        SinalDeAlerta->start(100);
        boolSinalDeAlerta = true;
    }

    if(ui->cmb_comandos->currentText() == "4. Abertura do cruzamento de pedestres vias 1, 2, 3 e 4"){
        LiberaObjetos();

        qDebug() << "4. Abertura do cruzamento de pedestres";
        ui->statusBar->showMessage("Comando 4: Luz verde no sinal de pedestres vias 1, 2, 3 e 4");

        Comando4();
    }

    if(ui->cmb_comandos->currentText() == "5. Fechamento do cruzamento de pedestres vias 1, 2, 3 e 4"){
        LiberaObjetos();

        qDebug() << "5. Fechamento do cruzamento de pedestres vias 1, 2, 3 e 4";
        ui->statusBar->showMessage("Comando 5: Luz vermelha no sinal de pedestres vias 1, 2, 3 e 4");

        Comando5();

    }
}

void Controle::delay(int milissegundos)
{
    QTime dieTime = QTime::currentTime().addMSecs( milissegundos*3 );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
