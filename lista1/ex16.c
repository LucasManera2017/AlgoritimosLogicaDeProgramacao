#include <stdio.h>

int main (void){
  int ano;

  printf("Digite o ano: \n");
  scanf("%d", &ano);

  if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
    printf("%d e um ano bissexto.\n", ano);
  } else {
    printf("%d nao e um ano bissexto.\n", ano);
  }
  return 0;
}