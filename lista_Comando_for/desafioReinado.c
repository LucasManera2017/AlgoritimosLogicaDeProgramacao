#include <stdio.h>

int main (){

  double grao = 1;
  double total = 0; 

  for (int i=1; i<=64; i++){
    printf("TOtal de grao na casa %d = %.0lf\n", i, grao);
    total += grao; 
    grao *= 2; 
  }
  printf("Total em graos a pagar: %.0lf\n", total);
  return 0;
}