/* QUESTÃO 4
UMA FUNÇÃO É UM CONJUNTO DE INSTRUÇÕES CRIADAS PARA CUMPRIR UMA TAREFA PARTICULAR E AGRUPADAS NUMA UNIDADE COM UM
NOME PARA REFERENCIÁ-LA. A EXISTÊNCIA DE FUNÇÕES EVITA QUE O PROGRAMADOR TENHA DE ESCREVER O MESMO CÓDIGO REPETIDAS
VEZES. TENDO ESSAS INFORMAÇÕES, E LEMBRANDO O QUE APRENDEMOS COM VETORES. FAÇA UM PROGRAMA QUE LEIA UM VETOR E
MOSTRE O MAIOR E O MENOR VALOR UTILIZANDO FUNÇÕES */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int encontrar_maior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}


int encontrar_menor(int vetor[], int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}


int main() {
    setlocale(LC_ALL, "portuguese");

    int tamanho;

   
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

   
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

  
    int maior = encontrar_maior(vetor, tamanho);
    int menor = encontrar_menor(vetor, tamanho);


    printf("Maior valor no vetor: %d\n", maior);
    printf("Menor valor no vetor: %d\n", menor);

    return 0;
}


