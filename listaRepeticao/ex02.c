#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, k;
  int cont = 0; 

  scanf("%d", &n);

  if (n >= 1 && n <= 100){
    for (int i = 1; i <= n; i++)
    {
      scanf("%d", &k);
      if (k >= -1000 && k <= 1000){
        if (k%2 ==0) cont++;
      } else {
        return 0;
      }
    }
  } else {
    return 0;
  }
  printf("%d", cont);
  

}