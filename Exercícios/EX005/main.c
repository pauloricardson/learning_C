/*
Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a
fórmula PRESTAÇÃO+-- VALOR+ (VALOR* (TAXA/100) * TEMPO).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, taxa, prestacao;
    int tempo;

    printf("Informe o valor da prestacao: ");
    scanf("%f", &valor);

    printf("Informe a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Quantos dias em atraso? ");
    scanf("%d", &tempo);

    prestacao = valor + (valor * (taxa / 100) * (float)tempo);

    printf("\n\nO valor da sua prestacao: %.2f reais\n\n", prestacao);

    return 0;
}
