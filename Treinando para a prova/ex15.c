#include <stdio.h>

int main() {
  float altura, pesoIdeal;
  char sexo; 
    

  printf ("Digite sua altura em m: \n");
  scanf("%f", &altura);
  fflush (stdin);
  printf ("Digite seu sexo M/F: \n");
  scanf("%c", &sexo);
  
    

  if (sexo == 'M' || sexo == 'm') {
    pesoIdeal = (72.7 * altura) - 58;
    printf("Seu peso ideal eh de: %.2f\n", pesoIdeal);
  } else if (sexo == 'F' || sexo == 'f') {
    pesoIdeal = (62.1 * altura) - 44.7; 
    printf("Seu peso ideal eh de: %.2f\n", pesoIdeal);
  } else {
    printf ("Sexo digitado invalido!\n");
  }

  return 0;
}
