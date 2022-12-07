#include "pilha.h"
#include "ui_pilha.h"

#define TAM 10

int arr2[TAM];
int cont2=0;
//QString texto2;

Pilha::Pilha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pilha)
{
    ui->setupUi(this);
    ui->lbl_quantidade_pilha->setText("Quantidade: " + QString::number(cont2));
    printListaPilha();
}

Pilha::~Pilha()
{
    delete ui;
}

void Pilha::printListaPilha(){
    ui->lbl_p1->setStyleSheet("");
    ui->lbl_p1->setText("");
    ui->lbl_p2->setStyleSheet("");
    ui->lbl_p2->setText("");
    ui->lbl_p3->setStyleSheet("");
    ui->lbl_p3->setText("");
    ui->lbl_p4->setStyleSheet("");
    ui->lbl_p4->setText("");
    ui->lbl_p5->setStyleSheet("");
    ui->lbl_p5->setText("");
    ui->lbl_p6->setStyleSheet("");
    ui->lbl_p6->setText("");
    ui->lbl_p7->setStyleSheet("");
    ui->lbl_p7->setText("");
    ui->lbl_p8->setStyleSheet("");
    ui->lbl_p8->setText("");
    ui->lbl_p9->setStyleSheet("");
    ui->lbl_p9->setText("");
    ui->lbl_p10->setStyleSheet("");
    ui->lbl_p10->setText("");
    for(int i=0; i<cont2; i++){
        switch (i) {
        case 0:
            ui->lbl_p1->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p1->setText(QString::number(arr2[i]));
            break;
        case 1:
            ui->lbl_p2->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p2->setText(QString::number(arr2[i]));
            break;
        case 2:
            ui->lbl_p3->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p3->setText(QString::number(arr2[i]));
            break;
        case 3:
            ui->lbl_p4->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p4->setText(QString::number(arr2[i]));
            break;
        case 4:
            ui->lbl_p5->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p5->setText(QString::number(arr2[i]));
            break;
        case 5:
            ui->lbl_p6->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p6->setText(QString::number(arr2[i]));
            break;
        case 6:
            ui->lbl_p7->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p7->setText(QString::number(arr2[i]));
            break;
        case 7:
            ui->lbl_p8->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p8->setText(QString::number(arr2[i]));
            break;
        case 8:
            ui->lbl_p9->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p9->setText(QString::number(arr2[i]));
            break;
        case 9:
            ui->lbl_p10->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_p10->setText(QString::number(arr2[i]));
            break;
        }
    }
    ui->lbl_quantidade_pilha->setText("Quantidade: " + QString::number(cont2));
}

void Pilha::on_btn_adicionar_clicked()
{
    if(ui->txt_valor_adicionar->text().isEmpty()){
        QMessageBox::warning(this, "Alerta", "Preencha os campos");
    }else if(cont2==TAM){
        QMessageBox::warning(this, "Alerta", "A pilha está cheia");
    }else if (!ui->txt_valor_adicionar->text().isEmpty() && cont2<TAM){
        int valor = ui->txt_valor_adicionar->text().toInt();
        arr2[cont2]=valor;
        cont2++;
        printListaPilha();
    }
}


void Pilha::on_btn_remover_clicked()
{
    if(cont2==0){
        QMessageBox::warning(this, "Alerta", "A pilha está vazia");
    }else if(cont2>0){
        cont2--;
        printListaPilha();
    }
}


void Pilha::on_btn_resetar_clicked()
{
    cont2=0;
    printListaPilha();
}

