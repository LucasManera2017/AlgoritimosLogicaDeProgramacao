#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int n; 

  scanf("%d", &n);

  if (n >= 1 && n <= 100)
  {
    for (int i = 1; i <= n; i++){
      if (i%3==0)
      {
        printf("%d ", i);
      }
    }
  } else { 
    return 0;
  }
  
  return 0; 
}