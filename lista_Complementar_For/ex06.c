#include <stdio.h>

int main(void) {
  int num, soma = 0;
  printf("Digite um valor positivo: \n");
  scanf("%d", &num);

  for (int i = 1; i <= num / 2; i++) {
    //verifico se o número é divisivel por i
    if (num % i == 0) {
      soma = soma + i;
    }
  }
  printf("soma dos divisores exatos: %d \n", soma);

  return 0;
}