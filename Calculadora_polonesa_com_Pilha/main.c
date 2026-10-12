#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main()
{
    PPilha topo = NULL;
    char linha[100];
    char *entrada;
    int valor1;
    int valor2;
    int resultado;

    if (fgets(linha, sizeof(linha), stdin) != NULL)
    {
        entrada = strtok(linha, " \n");

        while (entrada != NULL)
        {
            if (strcmp(entrada, "+") == 0)
            {
                valor2 = topo->valor;
                topo = pop(topo);
                valor1 = topo->valor;
                topo = pop(topo);
                resultado = valor1 + valor2;
                topo = push(topo, resultado);
            }
            else if (strcmp(entrada, "-") == 0)
            {
                valor2 = topo->valor;
                topo = pop(topo);
                valor1 = topo->valor;
                topo = pop(topo);
                resultado = valor1 - valor2;
                topo = push(topo, resultado);
            }
            else if (strcmp(entrada, "*") == 0)
            {
                valor2 = topo->valor;
                topo = pop(topo);
                valor1 = topo->valor;
                topo = pop(topo);
                resultado = valor1 * valor2;
                topo = push(topo, resultado);
            }
            else if (strcmp(entrada, "/") == 0)
            {
                valor2 = topo->valor;
                topo = pop(topo);
                valor1 = topo->valor;
                topo = pop(topo);
                resultado = valor1 / valor2;
                topo = push(topo, resultado);
            }
            else
            {
                topo = push(topo, atoi(entrada));
            }

            entrada = strtok(NULL, " \n");
        }
    }

    printf("\n%d ",topo->valor);

    esvaziarPilha(topo);
    return 0;
}