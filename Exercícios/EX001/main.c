/*
Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
de conversão é F <- (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float F, C;

    printf("Informe a temperatura (Celcius): ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("Atemperatura em Fahrenheit: %.1f", F);

    return 0;

}
