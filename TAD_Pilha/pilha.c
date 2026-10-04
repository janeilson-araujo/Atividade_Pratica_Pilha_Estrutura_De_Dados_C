#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct Pilha
{
    char valor;
    PPilha proximo;
} Pilha, *PPilha;

PPilha push(char valor, PPilha topoPilha)
{
    PPilha p;

    p = (PPilha)calloc(1, sizeof(Pilha));
    if (topoPilha = !NULL)
    {
        p->proximo = topoPilha;
    }
    p->valor = valor;

    return p;
}

PPilha pop(PPilha topoPilha)
{
    PPilha proximoTopo;

    proximoTopo = topoPilha->proximo;
    free(topoPilha);

    return proximoTopo;
}

void exibirPilha(PPilha topoPilha)
{
    if (topoPilha->proximo = !NULL)
    {
        exibirPilha(topoPilha->proximo);
    }
    printf("%c ", topoPilha->valor);

    return;
}

void esvaziarPilha(PPilha topoPilha)
{
    if (topoPilha->proximo = !NULL)
    {
        exibirPilha(topoPilha->proximo);
    }
    free(topoPilha);

    return ;
}