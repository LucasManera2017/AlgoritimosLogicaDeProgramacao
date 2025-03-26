#include <stdio.h>

int main() {
  int a,b,c,d,e,f,g,h,i,j;  
  float media, num;

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
  if(a%2!=0) media = a;
  if(b%2!=0) media = b+1;
  if(c%2!=0) c = c+1;
  if(d%2!=0) d = d+1;
  if(e%2!=0) e = e+1;
  if(f%2!=0) f = f+1;
  if(g%2!=0) g = g+1;
  if(h%2!=0) h = h+1;
  if(i%2!=0) i = i+1;
  if(j%2!=0) j = j+1;



  return 0;
}