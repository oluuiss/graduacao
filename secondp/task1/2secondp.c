/* QUESTÃO 2
FAÇA UM PROGRAMA USANDO A SUA CRIATIVIDADE UTILIZANDO FUNÇÃO
Descrição: Programa que calcula a média de 3 números */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Calcular a média
float cm(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3, m;

    printf("--- Programa para calcular média de 3 números ---\n");
    printf("1 - Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("2 - Digite o segundo número: ");
    scanf("%f", &n2);

    printf("3 - Digite o terceiro número: ");
    scanf("%f", &n3);

    // Chamando a função para calcular a média
    m = cm(n1, n2, n3);

    // Resultado
    printf("---------------------------------------------\n");
    printf("A média dos três números é: %.2f\n", m);

    return 0;
}
