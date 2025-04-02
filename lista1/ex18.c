#include <stdio.h>

int main (void){
  int a,b,c, maior, menor, mediano;

  printf("Digite os numeros inteiros a, b e c: ");
  scanf("%d %d %d", &a, &b, &c);

  //Calculo ordem crescente maior
  maior = a; 
  if (b > maior) maior = b;
  if (c > maior) maior = c;
  //Calculo ordem menor
  menor = a;
  if (b < menor) menor = b;
  if (c < menor) menor = c;
  //mediano 
  mediano = a;
  if (((a == maior) && (c == menor)) || ((c == maior) && (a == menor))) mediano = b;
  else if (((b == maior) && (c == menor)) || ((c == maior) && (b == menor))) mediano = a;
  else  mediano = c;

  printf("Os numeros em ordem crescente: %d %d %d\n", menor, mediano, maior);

  return 0;
}