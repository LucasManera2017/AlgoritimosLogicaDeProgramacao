#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int n, cont = 0, soma = 0; 
  scanf("%d", &n);
  if (n >= 1 && n <= 1000)
  {
    for (int i = 2; i <= n; i++)
    {
      cont = 0; 
      for (int j = 1; j <= i; j++)
      {
        if (i%j == 0){
          cont++;
        }
      }
        if (cont <= 2){
          soma += i;
        }
    }
    printf("%d", soma);
  } else {
    return 0;
  }
  
  return 0; 
}