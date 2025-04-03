
#include <stdio.h>

int main (void){
  char a; 

  printf("Digite uma letra: \n");
  scanf("%c", &a);

  if ( ( (int) a >= 65 && (int) a <= 90 ) || ((int) a >= 97 && (int)a <= 122)){ 
    switch (a)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    printf("Eh uma vogal\n");
    break;

  default:
    printf("Eh uma consoante\n");
    break;
  }

  } else {
    printf("Nao eh vogal ou consoante.\n");
  }

  

  return 0;
}