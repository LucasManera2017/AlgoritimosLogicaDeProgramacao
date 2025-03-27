
#include <stdio.h>

int main (void){
  float nota1, nota2, nota3, media, notaExame, mediaFinal;

  printf("Digite as tres notas: \n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3)/3;

  if (media < 3){
    printf("Reprovado sem direito para exame! Media: %.2f\n", media);
  } else if (media < 7) {
    printf("Exame! Media: %.2f\n", media);
    printf("Digite a nota do exame: \n");
    scanf("%f", &notaExame);
    mediaFinal = (media + notaExame)/2;
      if (mediaFinal >= 5){
        printf("Aprovado no exame!\n");
      } else {
        printf("Reprovado no exame!");
      }
  } else {
    printf("Aprovado! Media: %.2f\n", media);
  }

  return 0;
}