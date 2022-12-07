#ifndef FILA_H
#define FILA_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Fila;
}

class Fila : public QDialog
{
    Q_OBJECT

public:
    explicit Fila(QWidget *parent = nullptr);
    ~Fila();
    bool cheia();
    bool vazia();
    int tamanho();
    int PrimeiraEle();
    void inserir(int valor);
    int remover();

private:
    Ui::Fila *ui;
    int nelementos;
    int inicio;
    int fim;
    int *dados;
    int tamMax;
};

#endif // FILA_H
