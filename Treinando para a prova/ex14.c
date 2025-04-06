#include <stdio.h>

int main (void){
  int mes; 

  printf("Digite um mes do ano de 1 a 12: \n");
  scanf ("%d", &mes);

  if (mes < 1 || mes >12) {
    printf("Mes digitado invalido!");
  } else {
    switch (mes)
    {
    case 1:
      printf("Mes de janeiro, estacao Verao\n");
      break;
    case 2:
      printf("Mes de fevereiro, estacao Verao\n");
      break;
    case 3:
      printf("Mes de marco, estacao Verao/Outono\n");
      break;
    case 4:
      printf("Mes de abril, estacao Outono\n");
      break;
    case 5:
      printf("Mes de maio, estacao Outono\n");
      break;
    case 6:
      printf("Mes de junho, estacao Outono/Inverno\n");
      break;
    case 7:
      printf("Mes de julho, estacao Inverno\n");
      break;
    case 8:
      printf("Mes de agosto, estacao Inverno\n");
      break;
    case 9:
      printf("Mes de setembro, estacao Inverno/Primavera\n");
      break;
    case 10:
      printf("Mes de Outubro, estacao Primavera\n");
      break;
    case 11:
      printf("Mes de Novembro, estacao Primavera\n");
      break;
    case 12:
      printf("Mes de Dezembro, estacao Primavera/Verao\n");
      break;

    default:
      break;
    }
  }

  


  return 0;
}