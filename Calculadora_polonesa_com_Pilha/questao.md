# Exercício: Calculadora em Notação Polonesa

## Objetivo
Utilizar o Tipo Abstrato de Dados Pilha para desenvolver uma aplicação capaz de interpretar e calcular expressões matemáticas escritas em notação polonesa reversa (pós-fixa).

## Enunciado
Para demonstrar o funcionamento da estrutura de Pilha, implemente uma calculadora capaz de reconhecer e resolver expressões matemáticas escritas em notação polonesa reversa.

Nesse tipo de notação, os operandos são informados antes do operador. Assim, uma operação que normalmente seria escrita como:

```text
4 + 3
```

é representada por:

```text
4 3 +
```
A calculadora deverá utilizar uma pilha durante o processamento da expressão. Cada número encontrado deverá ser empilhado. Quando um operador for encontrado, os operandos necessários deverão ser retirados da pilha, a operação deverá ser realizada e o resultado obtido deverá ser novamente empilhado.

Considere, pelo menos, os seguintes operadores:

- `+`: adição;
- `-`: subtração;
- `*`: multiplicação;
- `/`: divisão.
Ao final do processamento, a pilha deverá conter o resultado da expressão.

## Exemplos

### Exemplo 1
Considere a seguinte expressão:

```text
4 3 +
```

A calculadora deverá realizar:

```text
4 + 3 = 7
```

Resultado esperado:

```text
7
```

### Exemplo 2
Considere a expressão:

```text
4 3 + 5 2 - *
```

O processamento deverá ocorrer da seguinte forma:

```text
4 3 +  →  7
5 2 -  →  3
7 3 *  →  21
```
Portanto, a expressão equivale a:

```text
(4 + 3) * (5 - 2) = 21
```

Resultado esperado:

```text
21
```

## Requisitos
A solução deverá obrigatoriamente utilizar o TAD Pilha desenvolvido anteriormente. A manipulação dos elementos deverá ser realizada por meio das operações disponibilizadas pelo TAD, especialmente as operações de empilhar (push) e desempilhar (pop).

O programa deverá receber uma expressão em notação polonesa reversa, processá-la e apresentar o resultado final da operação.

> **Importante:** não implemente a solução utilizando outra estrutura de dados em substituição à pilha. O objetivo do exercício é demonstrar, na prática, uma aplicação da estrutura LIFO (Last In, First Out).




## Entrega

Este exercício aceita o seguinte tipo de arquivo:

- `Makefile`

Para que o código seja corrigido corretamente, caso seja entregue em um único arquivo ZIP:

- O arquivo `Makefile` deve estar na raiz do ZIP;
- A diretiva `all` deve conter apenas o comando de compilação. Será executado `make all`;
- A diretiva `run` deve conter apenas o comando de execução. Será executado `make run`.