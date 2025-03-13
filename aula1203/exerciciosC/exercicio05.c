#include <stdio.h>

int main(void) {
  double cotdolar, dolar, real;

    //%lf utilizado para variavel double (long float)
  printf("Digite o valor da cotacao de dolar atual: \n");
  scanf("%lf", &cotdolar);
  printf("Digite um valor em dolar: \n");
  scanf("%lf", &dolar);
  real = dolar * cotdolar;


  printf("O valor em Real e: %.2lf\n", real);

  return 0;
 }