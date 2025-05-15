#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int n, cont = 0; 

  scanf("%d", &n);

  if (n >= 1 && n <= 1000)
  {
    
    
    for (int i = 1; i <= n; i++)
    {
      if (n%i == 0){
        cont++;
      }
      
    }
    
  } else {
    return 0;
  }

  (cont > 2 || cont == 1) ? printf("NAO") : printf("SIM");
  
  return 0; 
}