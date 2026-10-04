# Exercício: Implementando o Tipo Abstrato Pilha

## Objetivo
Praticar a implementação e manipulação de estruturas de dados do tipo Pilha, utilizando um TAD (Tipo Abstrato de Dados).

## Enunciado
Especifique e implemente um Tipo Abstrato de Dados chamado TPilha, que manipule dados do tipo char e ofereça os seguintes serviços:

- Exibir todos os elementos armazenados na pilha;
- Esvaziar completamente a pilha;
- Inserir (empilhar) um novo elemento na pilha (push);
- Remover (desempilhar) um elemento da pilha (pop).
Lembre-se de que a pilha segue o princípio LIFO (Last In, First Out) – ou seja, o último elemento inserido será o primeiro a ser removido.

O programa principal (main.c) deve ler comandos via entrada padrão (teclado) para manipular a pilha. Os comandos possíveis são:

| Comando | Ação |
| --- | --- |
| `-s` | Exibe o estado atual da pilha. |
| `-c` | Esvazia a pilha. |
| `-i X` | Insere o caractere `X` na pilha. |
| `-r` | Remove um elemento da pilha. |
| `-f` | Finaliza a execução do programa. |

## Exemplo de uso

### Entrada

```text
-i A -i B -i C -s -r -s -f
```

### Saída esperada

```text
Pilha: C B A
Pilha: B A
```
## Entrega

Este exercício aceita o seguinte tipo de arquivo:
- `Makefile`

Para que o código seja corrigido corretamente, caso seja entregue em um único arquivo ZIP:

- O arquivo `Makefile` deve estar na raiz do ZIP;
- A diretiva `all` deve conter apenas o comando de compilação. Será executado `make all`;
- A diretiva `run` deve conter apenas o comando de execução. Será executado `make run`.