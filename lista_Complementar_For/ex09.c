#include <stdio.h>

int main () {
  int contNotas;
  float somaNotas = 0;

  printf("Digite a quantidade de notas: \n");
  scanf("%d", &contNotas);

  for (int i = 1; i <= contNotas; i++) {
    float nota;
    printf("Digite a nota %d: \n", i);
    scanf("%f", &nota);
    somaNotas += nota;
  }

  printf("Media das notas: %.2f \n", somaNotas / contNotas);


  return 0;
}