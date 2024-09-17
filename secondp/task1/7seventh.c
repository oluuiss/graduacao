/* QUESTÃO 7
FAÇA UM PROGRAMA UTILIZANDO FUNÇÃO PARA SUBTRAIR DOIS NÚMEROS; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Função para subtrair dois números
int sub(int a, int b) {
    return a - b;
}

// Função principal
int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2, resultado;

    // Entrada dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    // Chamando a função de subtração
    resultado = sub(n1, n2);

    // Exibindo o resultado
    printf("A subtração de %d e %d é: %d\n", n1, n2, resultado);

    return 0;
}



