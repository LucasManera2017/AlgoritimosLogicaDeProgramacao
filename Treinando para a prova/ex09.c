#include <stdio.h>

int main (void){
  float notaA, notaB, media; 
  
  printf("Digite as duas notas entre 0 a 10: \n");
  scanf("%f %f", &notaA,&notaB);

  media = (notaA + notaB)/ 2;

  if (media < 3){
    printf("Reprovado!");
  } else if (media < 7){
    printf("Exame");
  } else if (media < 10){
    printf ("Aprovado");
  } else if (media == 10){
    printf("Aprovado com distincao");
  } else {
    printf ("Voce digitou uma nota invalida!");
  }

  return 0;
}