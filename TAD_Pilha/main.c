#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    char caracter;
    char comando[3];
    PPilha topo = NULL;

    scanf();
    while (getchar() != '\n')

    while (true)
    {
       ;

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
            scanf("%c", caracter);
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