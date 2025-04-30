#include <stdio.h>


int main () {
  int horasObservacao, meteoros, visualMeteoro, somaMeteoros = 0;

  printf("Digite a quantidade de horas de observação: \n");
  scanf("%d", &horasObservacao);

  for (int i = 1; i <= horasObservacao; i++) {
    printf("Digite quantos meteoros voce viu na hora %d: \n", i);
    scanf("%d", &meteoros);
    printf ("Hora %d: ", i);
    for (int j = 1; j <= meteoros; j++) {
      printf("*");
    }
    printf("(%d meteoros)\n", meteoros);
    somaMeteoros += meteoros;
  }
  printf("Total de meteoros vistos em %d horas: %d \n", horasObservacao, somaMeteoros);
  printf("-- Fim da observação --\n");

  return 0;
}