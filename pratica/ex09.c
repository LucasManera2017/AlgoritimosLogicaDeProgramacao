#include <stdio.h>

int main (void) {
  int a; 
  printf("Digite um numero qualquer: \n");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    printf("%d refere-se ao mes de janeiro!", a);
    break;
  case 2:
    printf("%d refere-se ao mes de fevereiro!", a);
    break;
  case 3:
    printf("%d refere-se ao mes de marco!", a);
    break;
  case 4:
    printf("%d refere-se ao mes de abril!", a);
    break;
  case 5:
    printf("%d refere-se ao mes de maio!", a);
    break;
  case 6:
    printf("%d refere-se ao mes de junho!", a);
    break;
  case 7:
    printf("%d refere-se ao mes de julho!", a);
    break;
  case 8:
    printf("%d refere-se ao mes de agosto!", a);
    break;
  case 9:
    printf("%d refere-se ao mes de setembro!", a);
    break;
  case 10:
    printf("%d refere-se ao mes de outubro!", a);
    break;
  case 11:
    printf("%d refere-se ao mes de novembro!", a);
    break;
  case 12:
    printf("%d refere-se ao mes de dezembro!", a);
    break;
  
  default:
    printf("%d nao refere-se a nenhum mes do ano!", a);
    break;
  }

  return 0;
}