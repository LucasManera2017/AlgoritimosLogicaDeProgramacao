#include <stdio.h>

double main(void) {
    double valor1, valor2, valor3;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3);
    double media = (valor1 + valor2 + valor3) / 3;
    printf("A media de %d + %d + %d = %d \n", valor1, valor2, valor3, media);
    return 0;
}