#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arvore.h"
#include "fila.h"
#include "listaenc.h"
#include "listaseq.h"
#include "pilha.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_listaSeq_clicked();
    void on_btn_listaEnc_clicked();
    void on_btn_pilha_clicked();
    void on_btn_fila_clicked();
    void on_btn_arvore_clicked();

private:
    Ui::MainWindow *ui;
    Arvore *arv;
    Fila *fila;
    ListaEnc *listaEnc;
    ListaSeq *listaSeq;
    Pilha *pil;
};
#endif // MAINWINDOW_H
