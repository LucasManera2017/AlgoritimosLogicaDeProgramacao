#include <stdio.h>

int main (void) {
  int a,b,c;
  printf("Digite o primeiro numero: \n");
  scanf("%d", &a);
  printf("Digite o segundo numero: \n");
  scanf("%d", &b);
  printf("Digite o terceiro numero: \n");
  scanf("%d", &c);

  if (a < 0 || b < 0 || c < 0) {
    printf("Pelo menos um dos valores e negativo: %d, %d, %d;", a,b,c);
  } else { 
    printf("nenhum dos valores e negativo: %d, %d, %d;", a,b,c);
  }

  return 0;
}