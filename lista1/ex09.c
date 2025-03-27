
#include <stdio.h>

int main (void){
  float nota1, nota2, media;

  printf("Digite as duas notas: \n");
  scanf("%f %f", &nota1, &nota2);

  media = (nota1 + nota2)/2;

  if (media < 3){
    printf("Reprovado! Media: %.2f\n", media);
  } else if (media < 7) {
    printf("Exame! Media: %.2f\n", media);
  } else if (media < 10) {
    printf("Aprovado! Media: %.2f\n", media);
  } else {
    printf("Parabens! Aprovado com distincao! Media: %.2f\n", media);
  }

  return 0;
}