#include <stdio.h>

int main() {
  int ano; 

  printf("Digite um ano qualquer: \n");
  scanf("%d", &ano);

  if (ano % 4 == 0 && !(ano % 100 == 0 && ano % 400 != 0)){
    printf("Eh um ano bissexto!");
  } else {
    printf("Nao eh um ano bissexto!");
  }

  return 0;
}
