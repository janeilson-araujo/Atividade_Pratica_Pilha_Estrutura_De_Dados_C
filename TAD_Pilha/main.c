#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    char comando[3];
    char caracter;
    PPilha topo = NULL;

    while (scanf("%2s", comando) == 1)
    {
        if (strcmp(comando, "-s") == 0)
        {
            printf("Pilha: ");
            exibirPilha(topo);
            printf("\n");
        }
        else if (strcmp(comando, "-c") == 0)
        {
            topo = esvaziarPilha(topo);
        }
        else if (strcmp(comando, "-i") == 0)
        {
            if (scanf(" %c", &caracter) != 1)
            {
                break;
            }
            topo = push(topo, caracter);
        }
        else if (strcmp(comando, "-r") == 0)
        {
            topo = pop(topo);
        }
        else if (strcmp(comando, "-f") == 0)
        {
            topo = esvaziarPilha(topo);
            break;
        }
    }

    esvaziarPilha(topo);
    return 0;
}