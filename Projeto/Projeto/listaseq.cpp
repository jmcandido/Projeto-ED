#include "listaseq.h"
#include "ui_listaseq.h"

int A;

ListaSeq::ListaSeq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaSeq)
{
    ui->setupUi(this);
    ui->lbl_print->setNum(A);
}

ListaSeq::~ListaSeq()
{
    delete ui;
}

void ListaSeq::on_btn_adicionarListaSeq_clicked()
{
    A = ui->txt_valorAdicionar->text().toInt();
    ui->lbl_print->setNum(A);
}

