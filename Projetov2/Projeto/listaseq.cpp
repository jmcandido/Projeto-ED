#include "listaseq.h"
#include "ui_listaseq.h"

#define TAM 10

int arr1[TAM];
int cont1=0;

ListaSeq::ListaSeq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaSeq)
{
    ui->setupUi(this);
    ui->lbl_quantidade_ls->setText("Quantidade: " + QString::number(cont1));
    printListaSeq();
}

ListaSeq::~ListaSeq()
{
    delete ui;
}

void ListaSeq::printListaSeq(){
    ui->lbl_ls_1->setStyleSheet("");
    ui->lbl_ls_1->setText("");
    ui->lbl_ls_2->setStyleSheet("");
    ui->lbl_ls_2->setText("");
    ui->lbl_ls_3->setStyleSheet("");
    ui->lbl_ls_3->setText("");
    ui->lbl_ls_4->setStyleSheet("");
    ui->lbl_ls_4->setText("");
    ui->lbl_ls_5->setStyleSheet("");
    ui->lbl_ls_5->setText("");
    ui->lbl_ls_6->setStyleSheet("");
    ui->lbl_ls_6->setText("");
    ui->lbl_ls_7->setStyleSheet("");
    ui->lbl_ls_7->setText("");
    ui->lbl_ls_8->setStyleSheet("");
    ui->lbl_ls_8->setText("");
    ui->lbl_ls_9->setStyleSheet("");
    ui->lbl_ls_9->setText("");
    ui->lbl_ls_10->setStyleSheet("");
    ui->lbl_ls_10->setText("");
    for(int i=0; i<cont1; i++){
        switch (i) {
        case 0:
            ui->lbl_ls_1->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_1->setText(QString::number(arr1[i]));
            break;
        case 1:
            ui->lbl_ls_2->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_2->setText(QString::number(arr1[i]));
            break;
        case 2:
            ui->lbl_ls_3->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_3->setText(QString::number(arr1[i]));
            break;
        case 3:
            ui->lbl_ls_4->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_4->setText(QString::number(arr1[i]));
            break;
        case 4:
            ui->lbl_ls_5->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_5->setText(QString::number(arr1[i]));
            break;
        case 5:
            ui->lbl_ls_6->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_6->setText(QString::number(arr1[i]));
            break;
        case 6:
            ui->lbl_ls_7->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_7->setText(QString::number(arr1[i]));
            break;
        case 7:
            ui->lbl_ls_8->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_8->setText(QString::number(arr1[i]));
            break;
        case 8:
            ui->lbl_ls_9->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_9->setText(QString::number(arr1[i]));
            break;
        case 9:
            ui->lbl_ls_10->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_ls_10->setText(QString::number(arr1[i]));
            break;
        }
    }
    ui->lbl_quantidade_ls->setText("Quantidade: " + QString::number(cont1));
}

void ListaSeq::on_btn_adicionar_clicked()
{
    if(ui->txt_valor_adicionar->text().isEmpty() || ui->txt_posicao_adicionar->text().isEmpty()){
            QMessageBox::warning(this, "Alerta", "Preencha ambos os campos");
        }else if(cont1==TAM){
            QMessageBox::warning(this, "Alerta", "Lista cheia");
        }else if(!ui->txt_valor_adicionar->text().isEmpty() && !ui->txt_posicao_adicionar->text().isEmpty() && cont1<TAM){
            int valor = ui->txt_valor_adicionar->text().toInt();
            int posicao = ui->txt_posicao_adicionar->text().toInt();
            if(posicao <= 0 || posicao > cont1+1){
                QMessageBox::warning(this, "Alerta", "Posição invalida");
            }else if(posicao == cont1+1){
                arr1[cont1] = valor;
                cont1++;
            }else if(posicao > 0 && posicao <=cont1){
                for(int i=cont1; i>=posicao; i--){
                    arr1[i]=arr1[i-1];
                }
                arr1[posicao-1] = valor;
                cont1++;
            }
            printListaSeq();
        }
}


void ListaSeq::on_btn_remover_clicked()
{
    if(ui->txt_posicao_remover->text().isEmpty()){
            QMessageBox::warning(this, "Alerta", "Insira uma posição");
        }else if(cont1==0){
            QMessageBox::warning(this, "Alerta", "Lista vazia");
        }else if(!ui->txt_posicao_remover->text().isEmpty() && cont1>0){
            int posicao = ui->txt_posicao_remover->text().toInt();
            if(posicao <= 0 || posicao > cont1){
                QMessageBox::warning(this, "Alerta", "Posição invalida");
            }else if(posicao == cont1){
                cont1--;
            }else{
                for(int i=posicao-1; i<cont1; i++){
                    arr1[i]=arr1[i+1];
                }
                cont1--;
            }
            printListaSeq();
        }
}


void ListaSeq::on_btn_reset_clicked()
{
    cont1=0;
    printListaSeq();
}

//teste[1]
