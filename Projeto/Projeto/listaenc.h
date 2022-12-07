#ifndef LISTAENC_H
#define LISTAENC_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class ListaEnc;
}

class ListaEnc : public QDialog
{
    Q_OBJECT

public:
    explicit ListaEnc(QWidget *parent = nullptr);
    ~ListaEnc();

private slots:
    void on_btn_adicionar_clicked();
    void on_btn_remover_clicked();
    void on_btn_reset_clicked();
    void printListaEnc();

private:
    Ui::ListaEnc *ui;
};

#endif // LISTAENC_H
