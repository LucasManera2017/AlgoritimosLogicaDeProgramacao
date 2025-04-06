#include <stdio.h>

int main (void){
  char a; 

  printf("Digite um caractere: \n");
  scanf("%c", &a);

  if (((int) a >= 65 && (int) a <= 90) || ((int) a >= 97 && (int) a <= 122)) {
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
      printf("Eh uma vogal!\n");
      break;
    default:
      printf("Eh uma consoante!\n");
      break;
    }
  } else {
    printf("Nao eh uma vogal e nem uma consoante");
  }
  


  return 0;
}