#include <stdio.h>

int main (void){
  float valorProduto;
  int codigo; 

  printf("Condicoes de pagamento\n");
  printf("1 - A vista em dinheiro ou cheque, com 10 porcento de desconto\n");
  printf("2 - A vista com cartao de credito, com 5 porcento de desconto\n");
  printf("3 - Em duas vezes com preco normal\n");
  printf("4 - Em 3 vezes com preco de etiqueta com acrescimo de 10 porcento\n");
 
  printf("Digite o valor do produto: \n");
  scanf("%f", &valorProduto);

  printf("Escolha a condicao de pagamento: \n");
  scanf("%d", &codigo);

  switch (codigo)
  {
  case 1:
    valorProduto *= 0.90;
    printf ("O valor final do produto com desconto eh de %.2f\n", valorProduto);
    break;
  case 2:
    valorProduto *= 0.95;
    printf ("O valor final do produto com desconto eh de %.2f\n", valorProduto);
    break;
  case 3:
    printf ("O valor final do produto eh de %.2f\n", valorProduto);
    break;
  case 4:
    valorProduto *= 1.10;
    printf ("O valor final do produto com acrescimo eh de %.2f\n", valorProduto);
    break;
  default:
    printf ("Codigo Invalido!");
    break;
  }

  return 0;
}