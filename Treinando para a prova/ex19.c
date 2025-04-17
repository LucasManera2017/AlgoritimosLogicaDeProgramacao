#include <stdio.h>

int main() {
  int a; 

  printf("Digite um numero inteiro entre 1 a 7: \n");
  scanf("%d", &a);

    switch (a)
    {
    case 1:
      printf("Domingo - Nao eh um dia util!\n");
      break;
    case 2:
      printf("Segunda - Eh um dia util!\n");
      break;
    case 3:
      printf("Terca - Eh um dia util!\n");
      break;
    case 4:
      printf("Quarta - Eh um dia util!\n");
      break;
    case 5:
      printf("Quinta - Eh um dia util!\n");
      break;
    case 6:
      printf("Sexta - Eh um dia util!\n");
      break;
    case 7:
      printf("Sabado - Nao eh um dia util!\n");
      break;
    default:
      printf("Numero invalido!");
      break;
    }

  return 0;
}
