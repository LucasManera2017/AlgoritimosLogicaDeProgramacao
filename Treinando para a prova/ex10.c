#include <stdio.h>

int main (void){
  float notaA, notaB,notaC, media, notaExame, mediaFinal; 
  
  printf("Digite suas tres notas entre 0 a 10: \n");
  scanf("%f %f %f", &notaA,&notaB, &notaC);

  media = (notaA + notaB + notaC)/ 3;

  if (media < 3){
    printf("Reprovado, sem direito a exame!");
  } else if (media < 7){
    printf("Voce esta em exame\n");
    printf("Digite a nota do exame: \n");
    scanf("%f", &notaExame);

    mediaFinal = (media + notaExame)/2;
    if (mediaFinal >= 5){
      printf("Voce foi aprovado no exame!\n");
    } else {
      printf("Reprovado no exame!\n");
    }
    
  } else if (media < 10){
    printf ("Aprovado");
  } else if (media == 10){
    printf("Aprovado com distincao");
  } else {
    printf ("Voce digitou uma nota invalida!");
  }

  return 0;
}