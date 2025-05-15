#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int n, a = 0; 

  scanf("%d", &n);

  if (n >= 1 && n <= 1000)
  {
    for (int i=1; i<= n; i++){
      
      a += i; 

      if (a >= n) {
        printf("%d", a);
        return 0;
      }
    }
  } else {
    return 0;
  }
  
  return 0; 
}