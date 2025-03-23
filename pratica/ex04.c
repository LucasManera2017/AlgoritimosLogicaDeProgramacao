#include <stdio.h>

int main (void) {
    int num1,num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    if (num1<num2) {
      printf("%d e menor do que %d \n", num1, num2);
    } else if (num1>num2){
      printf("%d e maior do que %d \n", num1, num2);
    } else {
      printf("%d e igual a %d \n", num1, num2);
    }

    return 0;
}