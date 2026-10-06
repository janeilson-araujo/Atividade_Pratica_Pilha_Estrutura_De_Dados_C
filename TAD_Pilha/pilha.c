#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct Pilha Pilha, *PPilha;

struct Pilha
{
    char valor;
    PPilha proximo;
};

PPilha push(PPilha topoPilha)
{
    PPilha p;
    char valor;

    if ((p = (PPilha)calloc(1, sizeof(Pilha))) == NULL)
    {
        printf("Erro ao Alocar memoria");
        exit(1);
    }

    scanf("%c",&valor);

    p->proximo = topoPilha;
    p->valor = valor;

    return p;
}

PPilha pop(PPilha topoPilha)
{
    PPilha proximoTopo;

    if (topoPilha == NULL)
    {
        return NULL;
    }

    proximoTopo = topoPilha->proximo;
    free(topoPilha);
    return proximoTopo;
}

void exibirPilha(PPilha topoPilha)
{
    if (topoPilha != NULL)
    {
        printf("%c ", topoPilha->valor);
        exibirPilha(topoPilha->proximo);
    }
}

PPilha esvaziarPilha(PPilha topoPilha)
{
    if(topoPilha == NULL){
        printf("Pilha vazia");
        return NULL;
    }
    if(topoPilha->proximo != NULL)
    {
        esvaziarPilha(topoPilha->proximo);
    }
    free(topoPilha);

    return NULL;
}