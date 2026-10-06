#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    char caracter[2];
    char comando[3];
    PPilha topo = NULL;

    

    while (true)
    {
        scanf("%2s", comando);
        while (getchar() != '\n')

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
            scanf("%1s", caracter);
            topo = push(topo, caracter);
        }
        else if (strcmp(comando, "-r") == 0)
        {
            topo = pop(topo);
        }
        else if (strcmp(comando, "-f") == 0)
        {
            topo = esvaziarPilha(topo);
            exit(0);
        }
    }
}