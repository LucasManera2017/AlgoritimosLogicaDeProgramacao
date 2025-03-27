
#include <stdio.h>

int main (void){
  double valorEmp,salario; 
  int numParcelas;

  printf("Informe o salario: ");
  scanf("%lf", &salario);
  printf("Informe o valor do emprestimo: ");
  scanf("%lf", &valorEmp);
  printf("Informe o numero de parcelas: ");
  scanf("%d", &numParcelas);

  double valorParcela = valorEmp / numParcelas;

  if(valorParcela <= salario*0.3){
    printf("Emprestimo concedido.\n");
  } else {
    printf("Emprestimo não concedido.\n");
  }

  return 0;
}