#include "arvore.h"
#include "ui_arvore.h"

QString texto_1;
QString texto_2;
QString texto_3;
QString texto_4;
int valor[14];
namespace Globais {
    int cont_esq;
    int cont_dirt;
}

Arvore::Arvore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Arvore)
{
    ui->setupUi(this);
}

Arvore::~Arvore()
{
    delete ui;
}

bool Arvore::vazia(){
    return (raiz == NULL);
}

int Arvore::insereRaiz(int valor){
    No *novoNo = new No();

    if (raiz != NULL){
        return 0;
    }

    if(novoNo == NULL){
        return 0;
    }

    novoNo->setconteudo(valor);
    novoNo->setdireita(NULL);
    novoNo->setesquerda(NULL);

    raiz = novoNo;
    return 1;
}

No *Arvore::busca(No *t,int dado){
    No *aux = raiz;
    No *aux2;

    if(raiz == NULL){
        return NULL;
    }

    if(aux->getconteudo() == dado){
        return aux;
    }

    aux2 = busca(aux->getesquerda(),dado);
    if (aux2 == NULL){
        aux2 = busca(aux->getdireita(), dado);
    }

    return aux2;
}

No* Arvore::inserir(No* arvore, int valor){
    //se a arvore estiver vazia
    if(arvore == NULL){

        arvore = new No(); //instancia o root
        arvore->setconteudo(valor);
        arvore->setdireita(NULL);
        arvore->setesquerda(NULL);
    }else if (valor < arvore->getconteudo()){//se o valor for menor que o do no, parte para inserir na esquerda
        Globais::cont_esq++;
        arvore->setesquerda(inserir(arvore->getesquerda(), valor));
    }else{ // se for maior, insere na direita
        Globais::cont_dirt++;
        arvore->setdireita(inserir(arvore->getdireita(), valor));
    }
    return arvore;
}

void Arvore::create_text(int text, int vezes){
    int cont;
    if(text == 1){
        cont = 0;
    }else if(text == 2){
        cont = 2;
    }else{
        cont = 6;
    }
    while(vezes--){
        if(text == 1){
            for(int i = 0; i< 35;i++){
                texto_2 = texto_2 + " ";

            }
            if(valor[cont] != 0){
                texto_2 = texto_2 + QString::number(valor[cont]);
            }
            cont++;
        }else if(text ==2){
            for(int i = 1; i<=20;i++){
                texto_3 = texto_3 + " ";
            }
            if(valor[cont] != 0){
                texto_3 = texto_3 + QString::number(valor[cont]);
            }
            cont++;
        }else{
            for(int i = 1; i<=12;i++){
                texto_4 = texto_4 + " ";
            }
            if(valor[cont] != 0){
                texto_4 = texto_4 + QString::number(valor[cont]);
            }
            cont++;
        }
    }
    ui->lbl_2->setText(texto_2);
    ui->lbl_3->setText(texto_3);
    ui->lbl_4->setText(texto_4);
}

void Arvore::on_btn_adicionar_clicked()
{
    int A = ui->txt_valor->text().toInt();
    if(vazia() == true){
        insereRaiz(A);
        texto_1 = "                                                        "+QString::number(A);
        ui->lbl_1->setText(texto_1);
        texto_1 = "";
    }else{
        inserir(raiz,A);
        if(A < raiz->getconteudo()){
            if((Globais::cont_esq + Globais::cont_dirt) == 1){
                texto_2 = "";
                valor[0] = A;
                create_text(1,2);
            }else if ((Globais::cont_esq + Globais::cont_dirt) == 2){
                texto_3 = "";
                if(Globais::cont_esq == 2){
                   valor[2] = A;
                   create_text(2,4);
                }else{
                    valor[3] = A;
                    create_text(2,4);
                }
            }else{
                texto_4 = "";
                if(Globais::cont_esq == 3){
                    valor[6] = A;
                    create_text(3,8);
                }else if((Globais::cont_esq == 2) && (Globais::cont_dirt == 1)){
                    if((valor[2] !=0 ) && (valor[3] == 0)){
                        valor[7] = A;
                    }else if((valor[2] ==0 ) && (valor[3] != 0)){
                        valor[8] = A;
                    }else if((valor[2] !=0) && (valor[7] == 0)){
                        valor[7] = A;
                    }else{
                        valor[8] = A;
                    }
                    create_text(3,8);
                }else{
                    valor[9] = A;
                    create_text(3,8);
                }
            }
        }else{
            if((Globais::cont_esq + Globais::cont_dirt) == 1){
                texto_2 = "";
                valor[1] = A;
                create_text(1,2);
            }else if ((Globais::cont_esq + Globais::cont_dirt) == 2){
                texto_3 = "";
                if(Globais::cont_dirt == 2){
                   valor[5] = A;
                   create_text(2,4);
                }else{
                    valor[4] = A;
                    create_text(2,4);
                }
            }else{
                texto_4 = "";
                if(Globais::cont_dirt == 3){
                    valor[13] = A;
                    create_text(3,8);
                }else if((Globais::cont_esq == 1) && (Globais::cont_dirt == 2)){
                    if((valor[4] !=0 ) && (valor[5] == 0)){
                        valor[11] = A;
                    }else if((valor[4] ==0 ) && (valor[5] != 0)){
                        valor[12] = A;
                    }else if((valor[4] !=0) && (valor[11] == 0)){
                        valor[11] = A;
                    }else{
                        valor[12] = A;
                    }
                    create_text(3,8);
                }else{
                    valor[10] = A;
                    create_text(3,8);
                }
            }

        }
    }

    texto_teste = QString::number(Globais::cont_dirt) + QString::number(Globais::cont_esq);
    ui->lbl_teste->setText(texto_teste);
    Globais::cont_dirt = 0;
    Globais::cont_esq = 0;
}
