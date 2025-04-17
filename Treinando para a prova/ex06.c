#include <stdio.h>

int main (void){
  int codigo; 

  printf("Digite o codigo do produto: \n");
  scanf("%d", &codigo);

  if (codigo == 1) {
    printf("Alimento nao perecivel.\n");
  } else if (codigo <=4) {
    printf("Alimento  perecivel.\n");
  } else if (codigo <= 6) {
    printf("Vestuario.\n");
  } else if (codigo == 7) {
    printf("Higiene pessoal.\n");
  } else if (codigo <= 10) {
    printf("Utensilios domesticos.\n");
  } else {
    printf("Codigo invalido.\n");
  }

  return 0;
}