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
