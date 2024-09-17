/* QUESTÃO 6
FAÇA UM PROGRAMA UTILIZANDO FUNÇÃO PARA SOMAR DOIS NÚMEROS; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int somar(int a, int b) {
    return a + b;
}


int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2, resultado;


    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    resultado = somar(n1, n2);

    // Exibindo o resultado
    printf("A soma de %d e %d é: %d\n", n1, n2, resultado);

    return 0;
}

