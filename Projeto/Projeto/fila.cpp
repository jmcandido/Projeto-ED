#include "fila.h"
#include "ui_fila.h"

Fila::Fila(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fila)
{
    ui->setupUi(this);
    nelementos = 0;
    fim = -1;
    inicio = 0;
    tamMax = 100;
    dados = new int[tamMax];
}

Fila::~Fila()
{
    delete ui;
}


bool Fila::cheia(){
    if (nelementos == tamMax){
        return true;
    }else{
        return false;
    }
}

bool Fila::vazia(){
    if (nelementos == 0){
        return true;
    }else{
        return false;
    }
}
int Fila::tamanho(){
    return nelementos;
}

void Fila::inserir(int valor){
    fim = (fim + 1) % tamMax;

    dados[fim] = valor;
    nelementos++;
}

int Fila::remover(){
    int res = dados[inicio];
    inicio = (inicio + 1) % tamMax;
    return res;
    nelementos--;
}

void Fila::on_btn_adicionar_clicked()
{
    if(cheia() == true){
        QMessageBox::about(this, "Caixa de aviso", "Fila cheia");
    }else{
        int A = ui->txt_valor->text().toInt();
        inserir(A);
        for(int i = inicio; i < tamanho();i++){
            texto = texto +QString::number(dados[i])+" ";
        }
        ui->label_valor->setText(texto);
        texto = "";
    }
}

void Fila::on_btn_remover_clicked()
{
    if(vazia() == true){
        QMessageBox::about(this, "Caixa de aviso", "Fila vazia");
    }else{
        remover();
        for(int i = inicio; i < tamanho();i++){
            texto = texto + QString::number(dados[i])+" ";
        }

        ui->label_valor->setText(texto);
        texto = "";
    }
}


void Fila::on_btn_resetar_clicked()
{
    nelementos = 0;
    fim = -1;
    inicio = 0;
    texto = "";
    ui->label_valor->setText(texto);
}
