#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int n, anterior = 0, proximo = 1; 

  scanf("%d", &n);

  if (n >= 0 && n <= 20)
  {
    for (int i = 1; i < n; i++)
    {
      proximo += anterior;
      anterior = proximo - anterior;
    }
    printf("%d", proximo);
    
  } else {
    return 0;
  }
  
  return 0; 
}