#include <stdio.h>

int main (){
  
  int valor; 
  printf("Digite um valor inteiro qualquer: \n");
  scanf("%d", &valor);

  for (int i = 1; i <= 10; i++)
  {
    printf("%3d * %3d = %3d\n", valor, i, valor * i);
    printf("\n");
    
  }
  

  return 0;
}