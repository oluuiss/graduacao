/* QUESTÃO 12
FAÇA UM PROGRAMA USANDO A SUA CRIATIVIDADE UTILIZANDO VETORES E FUNÇÃO
Descrição: Um programa que soma os elementos do vetor */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define t 5

void ler_vetor (int v[t]) {
    for (int i = 0; i < t; i++) {
        printf( "Digite o elemento %d: ", i + 1);
        scanf ("%d", &v[1]);
    }
}

int somar(int v[t]) {
    int soma = 0;
    for (int i = 0; i < t; i++) {
        soma += v[i];
    }
    return soma;
}

int main() {
    int v[t];

    printf ("Digite %d números inteiros: \n", t);
    ler_vetor (v);

    int soma = somar (v);
    printf("A soma dos elementos do vetor é: %d\n", soma);
    
    return 0;

}