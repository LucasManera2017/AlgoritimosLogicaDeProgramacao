#include <stdio.h>

int main(void)
{
  int a, b;

  printf("Digite o primeiro valor inteiro: \n");
  scanf("%d", &a);
  printf("Digite o segundo valor inteiro: \n");
  scanf("%d", &b);

  int maior = a;

  if (b > a) {
    maior = b;
  }

  for (int i = maior; i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      printf("O MDC de %d e %d eh %d\n", a, b, i);
      break;
    }
  }
  return 0;
}