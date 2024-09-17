/* QUESTÃO 5
FUNÇÕES FACILITAM AO PROGRAMADOR QUANDO HÁ NECESSIDADE DE SE REPETIR O MESMO CÓDIGO. SABENDO DISSO, E RELEMBRANDO O
QUE APRENDEMOS SOBRE MATRIZES. FAÇA UM PROGRAMA UTILIZANDO FUNÇÕES, UMA FUNÇÃO PARA A CRIAÇÃO DE MATRIZ E OUTRA
FUNÇÃO PARA MOSTRAR A MATRIZ E OUTRA FUNÇÃO PARA MOSTRAR A TRANSPOSTA DELA, OU SEJA, QUANDO INVERTEMOS A LINHA PELA COLUNA NA IMPRESSÃO. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void criar_matriz(int matriz[10][10], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}


void mostrar_matriz(int matriz[10][10], int linhas, int colunas) {
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void mostrar_transposta(int matriz[10][10], int linhas, int colunas) {
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");


    int linhas, colunas;
    int matriz[10][10]; 


    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    criar_matriz(matriz, linhas, colunas);
   
    mostrar_matriz(matriz, linhas, colunas);

    mostrar_transposta(matriz, linhas, colunas);

    return 0;
}


