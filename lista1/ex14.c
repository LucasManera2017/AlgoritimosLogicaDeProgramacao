#include <stdio.h>

int main() {
    int dia, mes;

    // Entrada de dados
    printf("Digite o dia e o numero do mes (1 a 12): ");
    scanf("%d %d", &dia, &mes);

    // Verifica se o mês e dia são válidos
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Data invalida!\n");
        return 1; // Encerra o programa se a data for inválida
    }

    // Define o nome do mês e a estação correspondente
    char *nomeMes;
    char *estacao;

    switch (mes) {
        case 1:
            nomeMes = "Janeiro";
            estacao = "Verao";
            break;
        case 2:
            nomeMes = "Fevereiro";
            estacao = "Verao";
            break;
        case 3:
            nomeMes = "Marco";
            estacao = (dia < 21) ? "Verao" : "Outono";
            break;
        case 4:
            nomeMes = "Abril";
            estacao = "Outono";
            break;
        case 5:
            nomeMes = "Maio";
            estacao = "Outono";
            break;
        case 6:
            nomeMes = "Junho";
            estacao = (dia < 21) ? "Outono" : "Inverno";
            break;
        case 7:
            nomeMes = "Julho";
            estacao = "Inverno";
            break;
        case 8:
            nomeMes = "Agosto";
            estacao = "Inverno";
            break;
        case 9:
            nomeMes = "Setembro";
            estacao = (dia < 23) ? "Inverno" : "Primavera";
            break;
        case 10:
            nomeMes = "Outubro";
            estacao = "Primavera";
            break;
        case 11:
            nomeMes = "Novembro";
            estacao = "Primavera";
            break;
        case 12:
            nomeMes = "Dezembro";
            estacao = (dia < 21) ? "Primavera" : "Verao";
            break;
        default:
            printf("Mes invalido!\n");
            return 1;
    }

    // Exibir o resultado
    printf("Data: %d de %s\n", dia, nomeMes);
    printf("Estacao do ano: %s\n", estacao);

    return 0;
}
