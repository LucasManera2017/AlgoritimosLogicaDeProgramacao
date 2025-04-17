#include <stdio.h>

int main() {
  int a,b,c, menor, meio, maior; 

  printf("Digite tres numeros inteiros: \n");
  scanf("%d %d %d", &a, &b, &c);

  menor = a; 
  if (b < menor) menor = b;
  if (c < menor) menor = c;

  maior = a; 
  if (b > maior) maior = b; 
  if (c > maior) maior = c; 

  meio = a;
  if (((a == maior) && (c == menor)) || ((c == maior) && (a == menor))) meio = b;
  else if (((b == maior) && (c == menor)) || ((c == maior) && (b == menor))) meio = a;
  else  meio = c;
  
  printf ("%d %d %d", menor, meio, maior); 
  
  return 0;
}
