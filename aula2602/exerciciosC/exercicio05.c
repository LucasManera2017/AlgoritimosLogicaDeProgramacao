#include <stdio.h>

int main (void) {
    int base, altura;
    printf("Digite a base do retangulo: \n");
    scanf("%d", &base);
    printf("Digite a altura do retangulo: \n");
    scanf("%d", &altura);

    int per = (base + altura) * 2;
    int area = base * altura;

    printf("O perimetro do retangulo e: %d e a area: %d \n", per, area);
    return 0;
}