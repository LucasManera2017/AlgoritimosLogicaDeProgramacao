#include <stdio.h>

int main(void) {
    //Variavel declarada
    int qtd_maxima, qtd_minima;
    float est_medio;

    //Mensagem para o usuario
    printf("Digite a quantidade maxima do estoque:\n");
    scanf("%d", &qtd_maxima);
    //Mensagem para o usuario
    printf("Digite a quantidade minima do estoque:\n");
    scanf("%d", &qtd_minima);
    //Calculo estoque medio
    //Colocar 2.0 para o resultado contar como flutante
    //Se colocar apenas 2, o resultado não dara após a virgula
    est_medio = (qtd_maxima + qtd_minima) / 2.0;
    //Mensagem final para o usuario
    //%d para numero inteiro e %f para float(flutuante)
    printf("Estoque medio : %f\n", est_medio);
    return 0;
}