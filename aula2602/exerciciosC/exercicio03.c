#include <stdio.h>

int main(void) {
    double valor1;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    double dobro = valor1 * 2;
    double triplo = valor1 * 3;

    printf("O dobro de %d e %d e o triplo e %d \n", valor1, dobro, triplo);
    return 0;
}