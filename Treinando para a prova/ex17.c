#include <stdio.h>

int main() {
  double salarioMensal, iR;

  printf("Digite o seu salario mensal: \n");
  scanf("%lf", &salarioMensal);

  if (salarioMensal <= 2112.00) {
    printf("Isento de Imposto de Renda!\n");
  } else if (salarioMensal <= 2826.65) {
    iR = salarioMensal * 0.075;
    printf("O valor do seu Imposto de Renda (7,5) sera de: %.2lf\n", iR);
  } else if (salarioMensal <= 3751.05) {
    iR = salarioMensal * 0.15;
    printf("O valor do seu Imposto de Renda (15) sera de: %.2lf\n", iR);
  } else {
    iR = salarioMensal * 0.225;
    printf("O valor do seu Imposto de Renda (22,5) sera de: %.2lf\n", iR);
  }

  return 0;
}
