/* QUESTÃO 11
FAÇA UM PROGRAMA USANDO A SUA CRIATIVIDADE UTILIZANDO MATRIZ E FUNÇÃO
Descrição: Um programa que soma os elementos da matriz */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHAS 3
#define COLUNAS 3

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, j, soma = 0;
    int m[LINHAS][COLUNAS];

    // Input dos elementos da matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    // Soma dos elementos da matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            soma += m[i][j];
        }
    }

    // Impressão da matriz e da soma de seus elementos
    printf("\nA matriz é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da matriz é: %d\n", soma);

    return 0;
}
