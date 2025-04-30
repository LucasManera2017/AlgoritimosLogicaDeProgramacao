#include <stdio.h>

int main () {
  int num;
  printf("Digite um numero inteiro entre 1 e 10: \n");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= num; j++)
    {
      printf("%d x %d = %d \n", i, j, i * j);
    }
    printf("\n");
  }
  


  return 0;
}