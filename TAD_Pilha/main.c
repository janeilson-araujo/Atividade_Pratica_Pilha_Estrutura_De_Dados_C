#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    char comando;
    PPilha topo;

    while (true)
    {
        scanf("%c", &comando);
        while (getchar() != '\n')

        switch (comando)
        {
        case '-s':
            exibirPilha(topo);

            break;
        case '-c':
            topo = esvaziarPilha(topo);

            break;
        case '-i':
            topo = push(topo);

            break;
        case '-r':
            topo = pop(topo);

            break;
        case '-f':

            exit(0);
        }
    }
}