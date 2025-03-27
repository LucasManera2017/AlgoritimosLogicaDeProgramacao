
#include <stdio.h>

int main (void){
  int a,b,c, maior;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &a);
  printf("Digite o segundo numero: \n");
  scanf("%d", &b);
  printf("Digite o terceiro numero: \n");
  scanf("%d", &c);

  maior = a; 

  if (b > a) maior = b; 
  if (c > maior) maior = c;
  printf("O maior numero e: %d\n", maior);

  return 0;
}