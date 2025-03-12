#include <stdio.h>

int main(void) {
    //Variavel declarada
    int numA, numB, numC;
    //Mensagem para o usuario
    printf("Digite o numero A:\n");
    scanf("%d", &numA);

    printf("Digite o numero B:\n");
    scanf("%d", &numB);

    printf("Digite o numero C:\n");
    scanf("%d", &numC);

    //processamento
    numA += numB*numC; //equivale-se a = a + b*c

    //Mensagem final para o usuario
    printf("O novo valor de A: %d\n", numA);
    return 0;
}