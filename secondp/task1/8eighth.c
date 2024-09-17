/* QUESTÃO 8
FAÇA UM PROGRAMA UTILIZANDO FUNÇÃO PARA ELEVAR AO CUBO UM NÚMERO; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float cubo(float n) {
    return n * n * n;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    float n, resultado;

    printf("Digite um número: ");
    scanf("%f", &n);

    resultado = cubo(n);

    printf("O número %.2f ao cubo é: %.2f\n", n, resultado);

    return 0;
}
