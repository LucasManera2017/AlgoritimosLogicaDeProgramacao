#include <stdio.h>

int main (void){
  double salario; 
  int tempo; 

  printf("Digite seu salario mensal: \n");
  scanf("%lf", &salario);

  printf("Digite o tempo que esta na empresa em anos: \n");
  scanf("%d", &tempo);

  if (tempo >= 5)
  {
    salario *= 0.20; 
    printf("O valor do bonus sera de %.2lf\n", salario);
  } else {
    salario *= 0.10;
    printf("O valor do bonus sera de %.2lf\n", salario);
  }
  

  return 0;
}