#include <stdio.h>

int main (void){
  float valorEmprestimo, numParcelas, salMensal; 

  printf("Digite o seu salario mensal: \n");
  scanf("%f", &salMensal);
  printf("Digite o valor do emprestimo solicitado: \n");
  scanf("%f", &valorEmprestimo);
  printf("Digite o numero de parcelas: \n");
  scanf("%f", &numParcelas);

  float valorParcelas = valorEmprestimo/numParcelas;
  
  if (valorParcelas <= salMensal * 0.3) {
    printf("Emprestimo aprovado\n");
  } else{
    printf("Emprestimo negado"); 
  }

  return 0;
}