#ifndef NO_H
#define NO_H
#include <stdlib.h>


class No
{
    public:
        No();
        void setconteudo(int conteudo);
        void setesquerda(No *esquerda);
        void setdireita(No *direita);

        int getconteudo();
        No *getesquerda();
        No *getdireita();

    private:
        int conteudo;
        No *esquerda;
        No *direita;
};

#endif // NO_H

