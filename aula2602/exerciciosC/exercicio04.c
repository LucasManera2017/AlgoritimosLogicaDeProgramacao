#include <stdio.h>

int main (void) {
    int valor1;
    printf("Digite um valor em metros: \n");
    scanf("%d", &valor1);
    int cm = valor1 * 100;

    printf("O valor em cm de %dm: %d cm \n", valor1, cm);
    return 0;
}