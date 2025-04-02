
#include <stdio.h>

int main (void){
  int cod;

  printf("Digite o codigo do produto: \n");
  scanf("%d", &cod);

  if (cod == 1){
    printf("alimento nao perecivel\n");
  } else {
    if (cod <= 4){
      printf("alimento perecivel\n");
    } else {
      if (cod <= 6) {
        printf("vestuario\n");
      } else {
        if (cod == 7) {
          printf("higiene pessoal\n");
        } else {
          if (cod <= 10) {
            printf("Utensilios domesticos\n");
          } else {
              printf("codigo invalido\n");
          }
        }
      }
    }
  }

  return 0;
}