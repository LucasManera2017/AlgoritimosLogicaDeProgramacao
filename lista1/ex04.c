
#include <stdio.h>

int main (void){
  double salario, bonus;
  int tempoEmpresa;

  printf("Informe seu salario: \n");
  scanf("%lf", &salario);

  printf("Informe o tempo de trabalho na empresa (em anos): \n");
  scanf("%d", &tempoEmpresa);

  if (tempoEmpresa >= 5) {
    bonus = salario * 0.2;
  } else {
    bonus = salario * 0.1;
  }
  printf("Seu bonus eh de: %.2lf\n", bonus);

  return 0;
}