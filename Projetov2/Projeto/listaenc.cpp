#include "listaenc.h"
#include "ui_listaenc.h"

#define TAM 10

typedef struct no{
    int num;
    struct no *prox;
}No;

No *Cabeca = NULL;
int cont3=0;

void inserir_no_inicio(int dado){
    No *novo_no = (No*)malloc(sizeof(No));
    novo_no->num=dado;
    if(Cabeca == NULL){
        Cabeca = novo_no;
        novo_no->prox=NULL;
    }else{
        novo_no->prox=Cabeca;
        Cabeca = novo_no;
    }
}

void inserir_no_meio(int dado, int pos){
    No *novo_no = (No*)malloc(sizeof(No));
    novo_no->num=dado;
    if(Cabeca == NULL){
        Cabeca = novo_no;
        novo_no->prox=NULL;
    }else{
        No *aux = Cabeca;
        for(int i=1; i<pos-1; i++){
            aux=aux->prox;
        }
        novo_no->prox=aux->prox;
        aux->prox=novo_no;
    }
}

void inserir_no_fim(int dado){
    No *novo_no = (No*)malloc(sizeof(No));
    novo_no->num=dado;
    if(Cabeca == NULL){
        Cabeca = novo_no;
        novo_no->prox=NULL;
    }else{
        No *aux = Cabeca;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        novo_no->prox=NULL;
        aux->prox=novo_no;
    }
}

void remover_do_inicio(){
    Cabeca = Cabeca->prox;
}

void remover_do_meio(int pos){
    No *aux = Cabeca;
    for(int i=1; i<pos-1; i++){
            aux=aux->prox;
        }
    aux->prox = aux->prox->prox;
}

void remover_do_fim(){
    No *aux = Cabeca;
    while(aux->prox->prox!=NULL){
        aux=aux->prox;
    }
    aux->prox = NULL;
}

ListaEnc::ListaEnc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaEnc)
{
    ui->setupUi(this);
    ui->lbl_quantidade_le->setText("Quantidade: " + QString::number(cont3));
    printListaEnc();
}

ListaEnc::~ListaEnc()
{
    delete ui;
}

void ListaEnc::printListaEnc(){
    ui->lbl_le_1->setStyleSheet("");
    ui->lbl_le_1->setText("");
    ui->seta_1->setText("");
    ui->lbl_le_2->setStyleSheet("");
    ui->lbl_le_2->setText("");
    ui->seta_2->setText("");
    ui->lbl_le_3->setStyleSheet("");
    ui->lbl_le_3->setText("");
    ui->seta_3->setText("");
    ui->lbl_le_4->setStyleSheet("");
    ui->lbl_le_4->setText("");
    ui->seta_4->setText("");
    ui->lbl_le_5->setStyleSheet("");
    ui->lbl_le_5->setText("");
    ui->seta_5->setText("");
    ui->lbl_le_6->setStyleSheet("");
    ui->lbl_le_6->setText("");
    ui->seta_6->setText("");
    ui->lbl_le_7->setStyleSheet("");
    ui->lbl_le_7->setText("");
    ui->seta_7->setText("");
    ui->lbl_le_8->setStyleSheet("");
    ui->lbl_le_8->setText("");
    ui->seta_8->setText("");
    ui->lbl_le_9->setStyleSheet("");
    ui->lbl_le_9->setText("");
    ui->seta_9->setText("");
    ui->lbl_le_10->setStyleSheet("");
    ui->lbl_le_10->setText("");
    No *aux = Cabeca;
    for(int i=0; i<cont3; i++){
        switch (i) {
        case 0:
            ui->lbl_le_1->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_1->setText(QString::number(aux->num));
            break;
        case 1:
            ui->lbl_le_2->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_2->setText(QString::number(aux->num));
            ui->seta_1->setText("➜");
            break;
        case 2:
            ui->lbl_le_3->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_3->setText(QString::number(aux->num));
            ui->seta_2->setText("➜");
            break;
        case 3:
            ui->lbl_le_4->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_4->setText(QString::number(aux->num));
            ui->seta_3->setText("➜");
            break;
        case 4:
            ui->lbl_le_5->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_5->setText(QString::number(aux->num));
            ui->seta_4->setText("➜");
            break;
        case 5:
            ui->lbl_le_6->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_6->setText(QString::number(aux->num));
            ui->seta_5->setText("➜");
            break;
        case 6:
            ui->lbl_le_7->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_7->setText(QString::number(aux->num));
            ui->seta_6->setText("➜");
            break;
        case 7:
            ui->lbl_le_8->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_8->setText(QString::number(aux->num));
            ui->seta_7->setText("➜");
            break;
        case 8:
            ui->lbl_le_9->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_9->setText(QString::number(aux->num));
            ui->seta_8->setText("➜");
            break;
        case 9:
            ui->lbl_le_10->setStyleSheet("border-color: rgb(0, 0, 0); border: 1px solid black; color: rgb(0, 0, 0);");
            ui->lbl_le_10->setText(QString::number(aux->num));
            ui->seta_9->setText("➜");
            break;
        }
        aux=aux->prox;
    }
    ui->lbl_quantidade_le->setText("Quantidade: " + QString::number(cont3));
}

void ListaEnc::on_btn_adicionar_clicked()
{
    if(ui->txt_valor_adicionar->text().isEmpty() || ui->txt_posicao_adicionar->text().isEmpty()){
        QMessageBox::warning(this, "Alerta", "Preencha os campos");
    }else if(cont3 == TAM){
        QMessageBox::warning(this, "Alerta", "Lista cheia");
    }else if(!ui->txt_valor_adicionar->text().isEmpty() && !ui->txt_posicao_adicionar->text().isEmpty() && cont3 < TAM){
        int valor = ui->txt_valor_adicionar->text().toInt();
        int posicao = ui->txt_posicao_adicionar->text().toInt();
        if(posicao <= 0 || posicao > cont3+1){
            QMessageBox::warning(this, "Alerta", "Posição invalida");
        }else if(posicao == cont3+1){
            inserir_no_fim(valor);
            cont3++;
        }else if(posicao == 1){
            inserir_no_inicio(valor);
            cont3++;
        }else{
            inserir_no_meio(valor, posicao);
            cont3++;
        }
    }
    printListaEnc();
}


void ListaEnc::on_btn_remover_clicked()
{
    if(ui->txt_posicao_remover->text().isEmpty()){
        QMessageBox::warning(this, "Alerta", "Insira uma posição");
    }else if(cont3 == 0){
        QMessageBox::warning(this, "Alerta", "Lista vazia");
    }else if(!ui->txt_posicao_remover->text().isEmpty() && cont3 > 0){
        int posicao = ui->txt_posicao_remover->text().toInt();
        if(posicao <= 0 || posicao > cont3){
            QMessageBox::warning(this, "Alerta", "Posição invalida");
        }else if(posicao == 1){
            remover_do_inicio();
            cont3--;
        }else if(posicao == cont3){
            cont3--;
        }else{
            remover_do_meio(posicao);
            cont3--;
        }
    }
    printListaEnc();
}


void ListaEnc::on_btn_reset_clicked()
{
    Cabeca = NULL;
    cont3=0;
    printListaEnc();
}

