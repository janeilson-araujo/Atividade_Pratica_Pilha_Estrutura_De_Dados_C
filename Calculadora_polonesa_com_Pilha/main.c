#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main()
{
    PPilha topo = NULL;
    char entrada[3];
    int valor1;
    int valor2;
    int resultado;

    while (scanf("%2s", entrada) == 1)
    {
        if (strcmp(entrada, "+") == 0)
        {
            valor2 = topo->valor;
            topo= pop(topo);
            valor1 = topo->valor;
            topo = pop(topo);
            resultado = valor1 + valor2;

            topo = push(topo, resultado);
            
        }
        else if (strcmp(entrada, "-") == 0)
        {
            valor2 = topo->valor;
            topo= pop(topo);
            valor1 = topo->valor;
            topo = pop(topo);
            resultado = valor1 - valor2;

            topo = push(topo, resultado);
        }
        else if (strcmp(entrada, "*") == 0)
        {
            valor2 = topo->valor;
            topo= pop(topo);
            valor1 = topo->valor;
            topo = pop(topo);
            resultado = valor1 * valor2;

            topo = push(topo, resultado);
        }
        else if (strcmp(entrada, "/") == 0)
        {
            valor2 = topo->valor;
            topo= pop(topo);
            valor1 = topo->valor;
            topo = pop(topo);
            resultado = valor1 / valor2;

            topo = push(topo, resultado);
        }
        else{
            
            topo = push(topo, atoi(entrada));
        }
    }

    printf("\n%d ",topo->valor);

    esvaziarPilha(topo);
    return 0;
}