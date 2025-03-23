#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0.0, valor;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar Saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
          printf("Digite o valor de deposito: \n");
          scanf("%f", &valor);

          if(valor > 0) {
            saldo += valor; 
            printf("Deposito realizado com sucesso!\n");
          } else {
            printf("Valor invalido!\n");
          }
          break;
        
        case 2:
          printf("Digite o valor do saque: \n");
          scanf("%f", &valor);

          if(valor > 0 && valor <=saldo) {
            saldo -= valor; 
            printf("Saque realizado com sucesso!\n");
          } else {
            printf("Saldo insuficiente ou valor invalido!\n");
          }
          break;

        case 3:
          printf("Saldo atual: %.2f\n", saldo);
          break;

        case 4:
          printf("Encerrando o programa...\n");
          break;
        
        default:
          printf("Opcao invalida! Escolha novamente.\n");
        }
    }while (opcao != 4);

    return 0;
}
