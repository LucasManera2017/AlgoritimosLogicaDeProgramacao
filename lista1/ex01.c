
#include <stdio.h>

int main (void){
  float a,b, media; 
  
  printf("Digite as duas notas: \n");
  scanf("%f%f",&a, &b);

  media = (a + b)/2;

  if (media >= 7) {
    printf("Aprovado\n");
  } else {
    printf("Reprovado\n");
  }

  printf("A media foi igual a: %.2f\n", media);


  return 0;
}