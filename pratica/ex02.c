#include <stdio.h>

int main (void) {
    float raio, area;
    printf("Digite o raio do circulo: \n");
    scanf("%f", &raio);

    area = raio*raio*3.14;    

    printf("A area do circulo e igual a = %f \n", area);
   
    return 0;
}