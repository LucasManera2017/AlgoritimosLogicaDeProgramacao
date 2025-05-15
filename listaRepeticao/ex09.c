#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int a, b; 

  scanf("%d", &a);
  scanf("%d", &b);

  if ((a >= 1 && a <= 1000) && (b >= 1 && b <= 1000))
  {
    while (a!=b)
    {
      if (a > b) {
        a = a - b; 
      } else {
        b = b - a; 
      }
    }
    printf("%d", a);

  } else {
    return 0;
  }
  
  return 0; 
}