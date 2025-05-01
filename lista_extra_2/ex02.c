#include <stdio.h>

int main () {
  int num, combinacao = 0, x = 1, y = 1, z = 0, w;

  printf("Digite um numero inteiro: \n");
  scanf("%d", &num);

  if (num <= 15) {
    for (int n = 0; n <= num; n++) {
      for (int k = 0; k <= n; k++) {
        x = 0;
        y = n - k;
        z = 0; 
        w = 0;
        for (int i = 0; i <= n; i++) {
          x *= i;
        }

        for (int j = 0; j <= y; j++) {
          z *= j;
        }

        for (int l = 0; l <= k; l++) {
          w *= l;
        }
        int C = x / (z * w);

        printf("C(%d,%d) = %d\n", n, k, C);

        x = 1;
        z = 1;
        w = 1;
      }
      
    }
    
  } 

  return 0;
}