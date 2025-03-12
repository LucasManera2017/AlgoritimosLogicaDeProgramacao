#include <stdio.h>

int main(void) {
    //Variavel declarada
    int valor1;
    printf("Digite um valor:\n");
    scanf("%d", &valor1);

    //Comparando
    if (valor1 % 2 == 0) {
        printf("Valor par\n");
    } else {
        printf("Valor impar\n");
    }
    return 0;
}