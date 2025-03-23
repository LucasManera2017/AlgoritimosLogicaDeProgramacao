#include <stdio.h>

int main (void) {
  int a; 
  printf("Digite um numero: \n");
  scanf("%d", &a);

  if (a >=10 && a <= 50) {
    printf("%d esta entre 10 e 50", a);
  } else {
    printf("%d nao esta entre 10 e 50", a);
  }

  return 0;
}