
#include <stdio.h>

int main (void){
  char a; 

  printf("Digite um caractere: \n");
  scanf("%c", &a);

  if (a >= 'a' && a <= 'z') {
    printf("O caractere %c eh uma letra minusculo.\n", a);
  } else if (a >= 'A' && a <= 'Z') {
    printf("O caractere %c eh uma letra maiusculo.\n", a);
  } else if (a >= '0' && a <= '9') { 
    printf("O caractere %c eh um numero.\n", a);
  } else {
    printf("O caractere %c nao eh uma letra, nem um numero.\n", a);
  }


  return 0;
}