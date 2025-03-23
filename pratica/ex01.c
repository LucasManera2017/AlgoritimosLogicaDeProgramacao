#include <stdio.h>

int main (void) {
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    int soma = num1 + num2; 
    int sub = num1 - num2; 
    int div = num1 / num2; 
    int mult = num1 * num2; 
    int resto = num1 % num2; 

    printf("O valor da soma e = %d \n", soma);
    printf("O valor da subtraco e = %d \n", sub);
    printf("O valor da divisao e = %d \n", div);
    printf("O valor da multiplicacao e = %d \n", mult);
    printf("O valor do resto e = %d \n", resto);
    return 0;
}