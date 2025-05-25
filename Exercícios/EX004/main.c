/*

Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
automóvel que faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo
gasto (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem. Desta
forma, será possível obter a distância percorrida com a fórmula DISTÂNCIA +-- TEMPO *
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível
utilizada na viagem com a fórmula LITROS_USADOS +-- DISTÂNCIA/ 12. O programa deve
apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem.

*/

// faz 12 km po litro


#include <stdio.h>
#include <stdlib.h>

int main(){

    int tempo, velocidade;

    printf("Informe o tempo gasto em na viagem (minutos): ");
    scanf("%d", &tempo);

    printf("Informe a velocidade média (km/h): ");
    scanf("%d", &velocidade);

    float auxtempo = (float)tempo / 60; // vai converter o tempo em minutos para horas

    float distancia = auxtempo * velocidade;

    float litros_usados = distancia / 12;

    printf("\n\n\nVelocidade media: %d km/h", velocidade);
    printf("\nTempo gasto: %d minutos", tempo);
    printf("\nDistancia percorrida: %.1f km", distancia);
    printf("\nCombustivel consumido: %.1f litros\n\n\n", litros_usados);


    return 0;
}
