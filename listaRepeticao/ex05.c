#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int n, digito = 0, soma = 0; 

  scanf("%d", &n);

  if (n >= 0 && n <= 1000000)
  {
    for (; n > 0; n /=10) {
      digito = n % 10; 
      soma += digito; 
    }
    printf("%d", soma);
  } else {
    return 0;
  }
  
  return 0; 
}