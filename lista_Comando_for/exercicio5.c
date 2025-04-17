#include <stdio.h>

int main ()  {

  int idade, anterior = 0, soma = 0; 
  float media; 

  for (int i = 1; i <= 5; i++)
  {
    printf("Pessoa %d digite sua idade: \n", i);
    scanf("%d", &idade);
    soma = idade + anterior; 
    anterior = soma; // Da pra fazer com uma linha apenas de soma += idade; 
  }
  media = soma/5;
  
  printf("A media das idades eh: %.2f\n", media);


  return 0;
}