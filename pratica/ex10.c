#include <stdio.h>

int main (void) {
  int soma = 0; 
  for (int i = 0; i < 101; i++)
  {
    soma = soma + i; 
  }

  printf("A soma de todos os numeros de 1 a 100 e: %d\n", soma);
  

  return 0;
}