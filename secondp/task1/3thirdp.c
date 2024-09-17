/* QUESTÃO 3
CRIAR UMA FUNÇÃO RECURSIVA PARA CALCULAR O FATORIAL DE UM NÚMERO */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Função recursiva para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Caso base: fatorial de 0 ou 1 é 1
    } else {
        return n * fatorial(n - 1);  // Chamada recursiva
    }
}


int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);


    if (num < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        printf("O fatorial de %d é: %d\n", num, fatorial(num));
    }

    return 0;
}

