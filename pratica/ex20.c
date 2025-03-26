#include <stdio.h>

int main() {
  int a,b,c,d,e,f,g,h,i,j, media, contador;  

  printf("Digite um numero : \n");
  scanf("%d",&a);
  printf("Digite um numero : \n");
  scanf("%d",&b);
  printf("Digite um numero : \n");
  scanf("%d",&c);
  printf("Digite um numero : \n");
  scanf("%d",&d);
  printf("Digite um numero : \n");
  scanf("%d",&e);
  printf("Digite um numero : \n");
  scanf("%d",&f);
  printf("Digite um numero : \n");
  scanf("%d",&g);
  printf("Digite um numero : \n");
  scanf("%d",&h);
  printf("Digite um numero : \n");
  scanf("%d",&i);
  printf("Digite um numero : \n");
  scanf("%d",&j);

  //Validar se é um número par
  if(a%2==0){
    contador++;
    media = a;
  } 
  if(b%2==0) {
    contador++; 
    media += b;
  } 
  if(c%2==0) {
    contador++; 
    media += c;
  } 
  if(d%2==0) {
    contador++; 
    media += d;
  }
  if(e%2==0) {
    contador++; 
    media += e;
  }
  if(f%2==0) {
    contador++; 
    media += f;
  }
  if(g%2==0) {
    contador++; 
    media += g;
  }
  if(h%2==0) {
    contador++; 
    media += h;
  }
  if(i%2==0) {
    contador++; 
    media += i;
  }
  if(j%2==0) {
    contador++; 
    media += j;
  }

  int mediaTotal = media/contador; 

  printf("A media dos numeros pares e: %d \n", mediaTotal);



  return 0;
}