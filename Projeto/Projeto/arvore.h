#ifndef ARVORE_H
#define ARVORE_H

#include <QDialog>
#include <QMessageBox>
#include "no.h"

namespace Ui {
class Arvore;
}

class Arvore : public QDialog
{
    Q_OBJECT

public:
    explicit Arvore(QWidget *parent = nullptr);
    ~Arvore();
    int insereRaiz (int valor);
    bool vazia();
    No *busca(No *t,int dado);
    No* inserir (No* arvore, int valor);
    void create_text(int text, int vezes);

private:
    Ui::Arvore *ui;
    No *raiz;
};

#endif // ARVORE_H
