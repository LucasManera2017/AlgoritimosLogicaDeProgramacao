#include <stdio.h>

int main (void){
  int ladoA, ladoB, ladoC; 

  printf("Digite os tres lados de um triangulo: \n");
  scanf ("%d %d %d", &ladoA, &ladoB, &ladoC);

  if (ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoC + ladoA > ladoB) {
    printf("Eh um triangulo!\n");

    if (ladoA == ladoB && ladoB == ladoC && ladoC == ladoA) {
      printf("Triangulo equilatero\n");
    } else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA) {
      printf("Triangulo escaleno\n");
    } else {
      printf("Triangulo isoceles\n");
    }
  } else {
    printf("Nao forma um triangulo!\n");
  }


  return 0;
}