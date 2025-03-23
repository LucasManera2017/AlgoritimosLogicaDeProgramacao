#include <stdio.h>

int main (void) {
  int idade, faltIdade;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  faltIdade = 16 - idade; 

  if (idade >= 16) {
    printf("Voce esta apto a votar!");
  } else {
    printf("Voce nao esta apto a votar, faltam: %d anos", faltIdade);
  }

  return 0;
}