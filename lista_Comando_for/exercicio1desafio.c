#include <stdio.h>

int main () {
  int a;

  printf("Digite um numero inteiro positivo: \n");
  scanf("%d", &a);

  if (a<= 1) {
    printf("Nao eh um numero primo.\n");
  } else {
    for (int i = 2; i <= a/2; i++) {
      if (a % i == 0) {
        printf("Nao eh um numero primo\n");
        return 0;
      }
    }
    printf("Eh um numero primo\n");
    return 0;
  }
}