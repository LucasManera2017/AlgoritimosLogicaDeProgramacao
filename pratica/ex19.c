#include <stdio.h>

int main() {
  char senha[100];
  int temNumero = 0, temMaiuscula = 0, tamanho = 0;

  printf("Digite sua senha: ");
  scanf("%s", senha);


  for (int i = 0; senha[i] != '\0' && senha[i] != '\n'; i++) {
      char c = senha[i];
      tamanho++;

      if (c >= '0' && c <= '9') {
          temNumero = 1;
      }
      
      if (c >= 'A' && c <= 'Z') {
          temMaiuscula = 1;
      }
  }

  if (tamanho >= 8 && temNumero && temMaiuscula) {
      printf("Senha valida!\n");
  } else {
      printf("Senha invalida! Certifique-se de ter pelo menos 8 caracteres, um numero e uma letra maiuscula.\n");
  }

  


  return 0;
}