#include <stdio.h>

int main (void) {
  int a;
  printf("Digite um valor qualquer: \n");
  scanf("%d", &a);

  if (a % 2 == 1) {
    printf("%d e um numero impar", a);
  } else {
    printf("%d e um numero par", a);
  }

  return 0;
}