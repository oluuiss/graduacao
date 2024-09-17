/* QUESTÃO 1.
FAZER UM PROGRAMA PARA CALCULAR AS MÉDIAS DE CADA DISCIPLINA UTILIZANDO FUNÇÃO, ONDE CADA DISCIPLINA É UMA FUNÇÃO
DIFERENTE E NA FUNÇÃO PRINCIPAL MOSTRE TODAS AS MÉDIAS; */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Matemática
float mmat() {
    float n1, n2, n3;
    printf("--- Sistema para calcular a média de 3 matérias. ---\n");
    printf("Digite as 3 notas de Matemática:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    return (n1 + n2 + n3) / 3;
}

// Português
float mpt() {
    float n1, n2, n3;
    printf("Digite as 3 notas de Português:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    return (n1 + n2 + n3) / 3;
}

// Química
float mquim() {
    float n1, n2, n3;
    printf("Digite as 3 notas de Química:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    return (n1 + n2 + n3) / 3;
}

// Médias
int main() {
    setlocale(LC_ALL, "portuguese");

    float mediaMat, mediaPt, mediaQuim;

    // Calcular as médias 
    mediaMat = mmat();
    mediaPt = mpt();
    mediaQuim = mquim();

    // Exibir médias
    printf("----------------------------------");
    printf("Suas médias são:\n");
    printf("Matemática: %.2f\n", mediaMat);
    printf("Português: %.2f\n", mediaPt);
    printf("Química: %.2f\n", mediaQuim);

    return 0;
}





