#ifndef PILHA_H
#define PILHA_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Pilha;
}

class Pilha : public QDialog
{
    Q_OBJECT

public:
    explicit Pilha(QWidget *parent = nullptr);
    ~Pilha();

private slots:
    void on_btn_adicionar_clicked();
    void on_btn_remover_clicked();
    void on_btn_resetar_clicked();
    void printListaPilha();

private:
    Ui::Pilha *ui;
};

#endif // PILHA_H
