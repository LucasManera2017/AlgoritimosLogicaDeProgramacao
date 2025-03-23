#include <stdio.h>

int main (void) {
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = ((nota1 * 2)+(nota2 * 3)+(nota3*5))/10;    

    printf("Sua media final foi de = %f \n", media);
   
    return 0;
}