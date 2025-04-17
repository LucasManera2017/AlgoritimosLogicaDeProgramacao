#include <stdio.h>

int main (){
  int n;
  printf("Digite o valor desejado: \n");
  scanf("%d", &n);
  for (int cont=1; cont<=10; cont++){
    printf("%3d * %3d = %3d \n", n, cont, n*cont);//%3d limita o numero inteiro a ter no maximo 3 algarimsmos 
  }
  return 0;
}