#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int n, fat = 1; 

  scanf("%d", &n);

  if (n >= 1 && n <= 12)
  {
    for (int i = 1; i <= n; i++)
    {
      fat *= i; 
    }
  } else {
    return 0;
  }
  printf("%d", fat);


  return 0; 
}