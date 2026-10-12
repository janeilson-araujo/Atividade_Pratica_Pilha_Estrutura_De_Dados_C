#ifndef __PILHA_H__
#define __PILHA_H__

typedef struct Pilha Pilha, *PPilha;

struct Pilha
{
    int valor;
    PPilha proximo;
};

PPilha push(PPilha topoPilha, int valor);

PPilha pop(PPilha topoPilha);

void exibirPilha(PPilha topoPilha);

PPilha esvaziarPilha(PPilha topoPilha);

#endif