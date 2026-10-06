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
        fgets(comando, sizeof(comando), stdin);
        while (getchar() != '\n')
            ;

        if (strcmp(comando, '-s'))
        {
            exibirPilha(topo);
        }
        else if (strcmp(comando, '-c'))
        {
        }
        else if (strcmp(comando, '-i'))
        {
            topo = push(topo);
        }
        else if (strcmp(comando, '-r'))
        {
            topo = pop(topo);
        }
        else if (strcmp(comando, '-f'))
        {
            exit(0);
        }
    }
}