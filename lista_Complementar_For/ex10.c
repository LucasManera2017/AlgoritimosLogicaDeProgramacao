#include <stdio.h>

int main () {
  int num;
  printf("Digite um numero inteiro positivo: \n");
  scanf("%d", &num);
  
  for (int i = 1; i <= num; i++) {
    printf("*");
  }


  return 0;
}