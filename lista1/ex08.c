
#include <stdio.h>

int main (void){
  int a;

  printf ("Digite um numero inteiro: ");
  scanf ("%d", &a);

  if (a%2 == 0) {
    printf ("O numero %d eh par.\n", a);
  } else {
    printf ("O numero %d eh impar.\n", a);
  }



  return 0;
}