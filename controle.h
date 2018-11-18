#ifndef CONTROLE_H
#define CONTROLE_H

#include <QMainWindow>
#include <QDebug>
#include <QPixmap>
#include <QTimer>
#include <QTime>
#include <Windows.h>

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
    void AmareloIntermitente();

private slots:
    void on_bt_acionar_clicked();

    void delay(int millisecondsToWait);

private:
    Ui::Controle *ui;
    QTimer *tempo;
};

#endif // CONTROLE_H
