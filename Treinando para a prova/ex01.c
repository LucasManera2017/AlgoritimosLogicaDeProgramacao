#include <stdio.h>

int main (void){
  float notaA, notaB;

  printf("Digite as duas notas da disciplina: \n");
  scanf("%f %f", &notaA,&notaB);

  float mediaFinal = (notaA + notaB)/ 2;

  if (mediaFinal >= 7) {
    printf("Aprovado com media %.2f\n", mediaFinal);
  } else {
    printf ("Reprovado com media %.2f\n", mediaFinal);
  }

  return 0;
}