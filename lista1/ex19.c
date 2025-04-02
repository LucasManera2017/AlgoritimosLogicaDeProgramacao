
#include <stdio.h>

int main (void){
  int a; 

  printf ("Digite um numero inteiro: ");
  scanf ("%d", &a);

  if (a < 0 || a > 7) {
    printf ("O numero %d nao corresponde a um dia da semana.\n", a);
  } else if (a <= 5) {
        switch (a)
        {
        case 2:
          printf ("Dia da semana: %d - Segunda (Dia util)\n", a);
          break;
        case 3:
          printf ("Dia da semana: %d - Terca (Dia util)\n", a);
          break;
        case 4:
          printf ("Dia da semana: %d - Quarta (Dia util)\n", a);
          break;
        case 5:
          printf ("Dia da semana: %d - Quinta (Dia util)\n", a);
          break;
        case 6:
          printf ("Dia da semana: %d - Sexta (Dia util)\n", a);
          break;
        } 
    } else {
        switch (a)
        {
        case 1:
        printf ("Dia da semana: %d - Domingo (Nao eh um dia util)\n", a);
          break;
        case 7: 
        printf ("Dia da semana: %d - Sabado (Nao eh um dia util)\n", a);
          break;  
        }
    }


  return 0;
}