#include <stdio.h>

int main(void){
  int x;
  printf("Entre com valor de x: \n");
  scanf("%d", &x);

  if(x < 0){
    printf("Elemento negativo.\n");
  } else {
    if (x == 0){
      printf("Elemento igual a zero.\n");
    } else {
      if (x < 10){
        printf("Elemento entre 1 e 9.\n");
      } else {
        printf("Elemento maior ou igual a 10.\n");
      }
    } 
  }
  
  return 0;
}

