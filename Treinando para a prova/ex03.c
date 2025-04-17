#include <stdio.h>

int main (void){
  int a,b,c;

  printf("Digite tres numeros inteiros: \n");
  scanf("%d %d %d", &a, &b, &c);

  int maior = a;

  if (b > a) maior = b;
  if (c > b) maior = c; 

  printf ("O maior valor eh %d", maior); 

  return 0;
}