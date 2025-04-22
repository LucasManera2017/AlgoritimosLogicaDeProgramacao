#include <stdio.h>

int main () {
  int a, ehPrimo = 1;

  printf("Digite um numero inteiro positivo: \n");
  scanf("%d", &a);

  if (a<= 1) {
    ehPrimo = 0; 
  } else {
    for (int i = 2; i < a; i++) {
      if (a % i == 0) {
        ehPrimo = 0;
        break;
      }
    }

  }

  if (ehPrimo) {
    printf ("%d eh um numero primo.\n", a);
  } else {
    printf ("%d nao eh um numero primo.\n", a);
  }



  return 0; 
}