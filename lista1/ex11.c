
#include <stdio.h>

int main (void){
  float valorProduto, valorFinal;
  int escolha; 

  printf("Condições de pagamento.\n");
  printf("1 - A vista em dinheiro ou cheque, com 10 porcento de desconto: \n");
  printf("2 - A vista com Cartão de credito, com 5 porcento de desconto: \n");
  printf("3 - Em duas vezes, preco normal: \n");
  printf("4 - Em 3 vezes, preco de etiqueta com acrescimo de 10 porcento. \n");
  printf("Escolha uma das condicoes de pagamento.\n");
  scanf("%d", &escolha);
  printf("Digite o valor do produto: \n");
  scanf("%f", &valorProduto);

  switch (escolha)
  {
  case 1:
    valorFinal = valorProduto * 0.90; 
    printf("Voce ganhou 10 porcento de desconto, valor final: %.2f.\n", valorFinal);
    break;
  
  case 2:
    valorFinal = valorProduto * 0.95;
    printf("Voce ganhou 5 porcento de desconto, valor final: %.2f.\n", valorFinal);
    break;

  case 3:
    valorFinal = valorProduto;
    printf("O valor final da compra eh de: %.2f.\n", valorFinal);
    break;

  case 4:
    valorFinal = valorProduto * 1.10;
    printf("Valor com 10 porcento de acrescimo: %.2f.\n", valorFinal);
    break;

  default:
    printf("Opcao invalida.\n");
    break;
  }

  return 0;
}