
#include <stdio.h>

int main (void){
  int ladoA, ladoB, ladoC; 

  printf("Digite os 3 lados do triangulo: \n");
  scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

  if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
    printf("Os lados formam um triangulo.\n");
    if (ladoA == ladoB && ladoB == ladoC) {
      printf("Triangulo equilatero.\n");
    } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
      printf("Triangulo isosceles.\n");
    } else {
      printf("Triangulo escaleno.\n");
    }
  } else {
    printf("Os lados nao formam um triangulo.\n");
  }
  
  return 0;
}