#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    char comando[3];
    PPilha topo = NULL;

    while (true)
    {
        scanf();
        while (getchar() != '\n');

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
            topo = push(topo);
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