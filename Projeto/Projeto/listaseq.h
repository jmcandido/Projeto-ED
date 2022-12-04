#ifndef LISTASEQ_H
#define LISTASEQ_H

#include <QDialog>

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
    void on_btn_adicionarListaSeq_clicked();

private:
    Ui::ListaSeq *ui;
};

#endif // LISTASEQ_H
