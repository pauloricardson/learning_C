/*
Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula
de conversão é C <- ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    float F, C;

    printf("Informe a temperatura (Fahrenheit): ");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9;

    printf("Atemperatura em Celsius: %.1f", C);

    return 0;

}
