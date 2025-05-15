#include <stdio.h>
#include <stdlib.h>

int main(void){

  int n, soma = 0;

  
  do {
    scanf("%d", &n);

    if (n >= -1000 && n <= 1000) {
    soma += n;
    } else {
      return 0;
    }
  } while (n != 0);
  
  

  printf("%d", soma);



  return 0;
}