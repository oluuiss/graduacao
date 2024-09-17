/* QUESTÃO 10
FAÇA UM PROGRAMA USANDO A SUA CRIATIVIDADE QUE UMA FUNÇÃO CHAME A OUTRA;
Descrição: Um programa que uma função puxe a outra */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void f1() {
    printf("Esta mensagem foi impressa pela função 'f1'.\n");
}

void f2() {
    printf("A função 'f2' está chamando a função 'f1'.\n");
    f1();
}

int main() {
    setlocale(LC_ALL, "portuguese");
    f2();

    return 0;

}
