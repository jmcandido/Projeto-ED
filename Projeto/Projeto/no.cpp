#include "No.h"

No::No()
{
    setesquerda(NULL);
    setdireita(NULL);
}

void No::setconteudo(int conteudo){
    this->conteudo = conteudo;
}

void No::setesquerda(No *esquerda){
    this->esquerda = esquerda;
}

void No::setdireita(No *direita){
    this->direita = direita;
}

int No::getconteudo(){
    return conteudo;
}
No *No::getesquerda(){
    return esquerda;
}

No *No::getdireita(){
    return direita;
}
