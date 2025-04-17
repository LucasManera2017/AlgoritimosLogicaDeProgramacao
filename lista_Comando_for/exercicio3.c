#include <stdio.h>

int main (){
  double preco; 

  printf("Digite o preco unitario da fruta: \n");
  scanf("%lf", &preco);

  for (int i = 1; i <= 10; i++)
  {
    printf("O valor de %2d fruta eh: %6.2lf\n", i, preco * i);
  }
  



  return 0;
}