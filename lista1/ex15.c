#include <stdio.h>

int main (void){
  float altura, pesoIdeal; 
  char sexo; 

  printf("Digite a altura: \n");
  scanf("%f", &altura);
  printf("Digite o sexo (M/F): \n");
  scanf(" %c", &sexo);

  if (sexo == 'M') {
    pesoIdeal = (72.7 * altura) - 58.0;
  } else {
    pesoIdeal = (62.1 * altura) - 44.7;
  }

  printf("Seu peso ideal eh: %.2f kg\n", pesoIdeal);

  return 0;
}