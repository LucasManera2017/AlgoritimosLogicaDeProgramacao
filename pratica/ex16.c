#include <stdio.h>

int main() {
  float a, cotDolar; 
  printf("Digite um valor em dolar: ");
  scanf("%f", &a);
  printf("Digite a cotacao do dolar atual: ");
  scanf("%f", &cotDolar);

  float reais = a * cotDolar; 
  printf("O valor em reais eh de: R$%.2f\n", reais); 


  return 0;
}