#include <stdio.h>

int main() {
  int num, i, ehPrimo = 1; 

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num <= 1) {
      ehPrimo = 0; 
  } else {
      for (i = 2; i < num; i++) {
          if (num % i == 0) {
              ehPrimo = 0;
              break; 
          }
      }
  }

  if (ehPrimo) {
      printf("%d eh um numero primo.\n", num);
  } else {
      printf("%d nao eh um numero primo.\n", num);
  }

  return 0;
}