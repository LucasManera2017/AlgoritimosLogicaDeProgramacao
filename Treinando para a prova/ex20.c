#include <stdio.h>

int main() {
  int numFaltas;
  float media; 

  printf("Digite sua media: \n");
  scanf("%f", &media);
  printf("Digite o numero de faltas: \n");
  scanf("%d", &numFaltas); 

  if (numFaltas >= 100*0.25) {
    printf("Reprovado por faltas!\n");
    if (media < 7)
    {
      printf ("Reprovado por nota tambem!");
    }
    
  } else if (media < 7){
    printf("Reprovado por nota!\n");
  } else {
    printf("Aprovado!\n");
  }


  return 0;
}
