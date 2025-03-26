#include <stdio.h>
int main(void)
{
  char letra;

  printf("Digite uma letra: ");
  letra = getchar(); // Let uma unica letra use o getchar()
  printf("Letra: %c\n", letra);

  switch (letra)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("%c eh uma vogal.\n", letra);
    break;

  default:
    printf("%c nao eh uma vogal.\n", letra);
    break;
  }

  return 0;
}
