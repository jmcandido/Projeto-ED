#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_listaSeq_clicked()
{
    listaSeq = new ListaSeq(this);
    listaSeq->showFullScreen();
}


void MainWindow::on_btn_listaEnc_clicked()
{
    listaEnc = new ListaEnc(this);
    listaEnc->showFullScreen();
}

void MainWindow::on_btn_pilha_clicked()
{
    pilha = new Pilha(this);
    pilha->showFullScreen();
}

void MainWindow::on_btn_fila_clicked()
{
    fila = new Fila(this);
    fila->showFullScreen();
}


void MainWindow::on_btn_arvore_clicked()
{
    arv = new Arvore(this);
    arv->showFullScreen();
}

