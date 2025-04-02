#include <stdio.h>

int main(void) {
  int numFaltas;
  float media; 

  printf("Digite o numero de faltas: \n");
  scanf("%d", &numFaltas);
  printf("Digite a media das notas: \n");
  scanf("%f", &media);

  int aula = 100; 
  int naoFalta = aula - numFaltas; 

  if (media < 7 ) {
    printf("Reprovado por nota.\n");
  } else if (naoFalta <= aula * 0.75) {
    printf("Reprovado por falta.\n");
  } else {
    printf("Aprovado.\n");
  }

  return 0;
}