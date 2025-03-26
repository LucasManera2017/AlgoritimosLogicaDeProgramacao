#include <stdio.h>
int main(void) {
  double valor; 
  printf("Digite o valor da compra: \n");
  scanf("%lf", &valor);

  // Valor > ou = a 1000, desconto de 10%
  // Caso contrário desconto de 5% 
  valor *= valor>= 1000 ? 0.90 : 0.95;

  printf("Valor final da compra com desconto: %.2lf\n", valor);

  return 0;
}
