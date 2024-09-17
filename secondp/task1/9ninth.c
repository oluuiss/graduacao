/* QUESTÃO 9
FAÇA UM PROGRAMA QUE PEÇA DUAS MATRIZES E CALCULE A ADIÇÃO DESTAS, ISSO UTILIZANDO 2 FUNÇÕES */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 3

void ler_matriz(int m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void somar_matrizes(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int m1[LINHAS][COLUNAS], m2[LINHAS][COLUNAS], resultado[LINHAS][COLUNAS];

    printf("Digite os elementos da primeira matriz:\n");
    ler_matriz(m1);

    printf("Digite os elementos da segunda matriz:\n");
    ler_matriz(m2);

    somar_matrizes(m1, m2, resultado);

    printf("Resultado da soma das matrizes:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
