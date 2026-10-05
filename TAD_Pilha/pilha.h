#ifndef __PILHA_H__
#define __PILHA_H__

typedef struct Pilha Pilha, *PPilha;

PPilha push(char valor, PPilha topoPilha);

PPilha pop(PPilha topoPilha);

void exibirPilha(PPilha topoPilha);

PPilha esvaziarPilha(PPilha topoPilha);

#endif