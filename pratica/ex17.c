#include <stdio.h>

int main() {
    int N, primeiro = 1, segundo = 1, proximo;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, insira um numero maior que zero.\n");
        return 1;
    }

    printf("Os %d primeiros numeros da sequencia de Fibonacci sao:\n", N);

    for (int i = 0; i < N; i++) {
        printf("%d ", primeiro);
        proximo = primeiro + segundo; //2 // 3 // 5
        primeiro = segundo; //1 // 2 // 3
        segundo = proximo; // 2 // 3 // 5 
    }

    printf("\n");

    return 0;
}