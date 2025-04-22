#include <stdio.h>

int main () {
    double valorInicial, rendimento;
    double valorAtual;

    printf("Digite o valor inicial de aporte:\n");
    scanf("%lf", &valorInicial);

    valorAtual = valorInicial;

    for (int i = 1; i <= 120; i++) {
        rendimento = valorAtual * 0.06; // 6% ao mês
        valorAtual += rendimento; // valorAtual agora inclui o rendimento
        printf("Mes %3d | Rendimento: R$ %.2lf | Total acumulado: R$ %.2lf\n", i, rendimento, valorAtual);
    }

    return 0;
}
