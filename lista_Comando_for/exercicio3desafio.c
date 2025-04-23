#include <stdio.h>

int main () {
  int a,x = 1; 

  printf ("Digite um numero inteiro positivo: \n");
  scanf("%d", &a);

  for (int i=1; i<=a; i++){
    x *= i; 
  }

  printf("O resultado de %d! eh: %d\n", a, x);


  return 0; 
}