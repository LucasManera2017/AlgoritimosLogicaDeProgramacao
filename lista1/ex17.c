#include <stdio.h>

int main (void){
  double salarioMensal, impostoDeRenda; 

  printf("Informe o salario mensal: \n");
  scanf("%lf", &salarioMensal);

  if (salarioMensal <= 2112.00){
    printf("Isento de imposto de renda\n");
  } else if (salarioMensal <= 2826.65) {
    impostoDeRenda = salarioMensal * 0.075;
    printf("Valor do imposto de renda: %.2lf", impostoDeRenda);
  } else if (salarioMensal <= 3751.05) {
    impostoDeRenda = salarioMensal * 0.15;
    printf("Valor do imposto de renda: %.2lf", impostoDeRenda);
  } else {
    impostoDeRenda = salarioMensal * 0.225;
    printf("Valor do imposto de renda: %.2lf", impostoDeRenda);
  }
  return 0;
}