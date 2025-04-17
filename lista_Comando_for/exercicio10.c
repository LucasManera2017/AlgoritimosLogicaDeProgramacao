#include <stdio.h>

int main (){

  int soma = 0; 

  for (int i = 1; i <= 100; i++)
  {
    if (i % 3 == 0) soma += 1;
  }

  printf("%d", soma);
  


  return 0;
}