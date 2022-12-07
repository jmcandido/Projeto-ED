#ifndef LISTASEQ_H
#define LISTASEQ_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class ListaSeq;
}

class ListaSeq : public QDialog
{
    Q_OBJECT

public:
    explicit ListaSeq(QWidget *parent = nullptr);
    ~ListaSeq();

private slots:
    void on_btn_adicionar_clicked();
    void on_btn_remover_clicked();
    void on_btn_reset_clicked();
    void printListaSeq();

private:
    Ui::ListaSeq *ui;
};

#endif // LISTASEQ_H
