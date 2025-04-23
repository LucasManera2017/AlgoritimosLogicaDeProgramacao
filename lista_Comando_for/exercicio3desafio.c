#include <stdio.h>

int main () {
  int a,fat = 1; 

  printf ("Digite um numero inteiro positivo: \n");
  scanf("%d", &a);

  for (int i=a; i>=1; i--){
    fat *= i; 

    i == 1 ? printf ("%d = ", i) : printf("%d X ", i);

  }

  printf("%d\n", fat);


  return 0; 
}