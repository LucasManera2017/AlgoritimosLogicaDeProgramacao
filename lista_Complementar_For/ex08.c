#include <stdio.h>

int main () {
  int num;
  printf("Digite um numero inteiro: \n");
  scanf("%d", &num);

  for (int i = 10; i >= 1; i--){
    if (i % 2 == 0){
      printf("%d \n", i);
    }
  }


  return 0;
}