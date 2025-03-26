#include <stdio.h>
int main(void) {
  int seguro;
  double salario;

  printf("Digite 1 se possui seguro ou 0 se nao possui:\n");
  scanf("%d", &seguro);
  printf("Digite seu salario:\n");
  scanf("%lf", &salario);

  if (salario < 2000.0 && seguro ==1){
    salario *= 1.10;
  } else {
    salario *= 1.07;
  }
  printf("Seu novo salario e: %.2lf\n", salario);


  return 0;
}
