/*

Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um
autom�vel que faz 12 quil�metros por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo
gasto (vari�vel TEMPO) e a velocidade m�dia (vari�vel VELOCIDADE) durante a viagem. Desta
forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DIST�NCIA +-- TEMPO *
VELOCIDADE. A partir do valor da dist�ncia, basta calcular a quantidade de litros de combust�vel
utilizada na viagem com a f�rmula LITROS_USADOS +-- DIST�NCIA/ 12. O programa deve
apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a
quantidade de litros utilizada na viagem.

*/

// faz 12 km po litro


#include <stdio.h>
#include <stdlib.h>

int main(){

    int tempo, velocidade;

    printf("Informe o tempo gasto em na viagem (minutos): ");
    scanf("%d", &tempo);

    printf("Informe a velocidade m�dia (km/h): ");
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
