/*
Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula VOLUME <= 3.14159 *Ri 2 * ALTURA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float raio, altura;

    printf("Informe o raio (cm) e a altura (cm), respectivamente: ");
    scanf("%f%f", &raio, &altura);

    float volume = 3.14159 * pow(raio, 2) * altura;

    printf("\n\nVolume: %.2f cm^2\n\n", volume);

    return 0;
}
