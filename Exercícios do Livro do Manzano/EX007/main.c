#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/

int main(){
    int a, b;

    printf("Valor de A e B: ");
    scanf("%d%d", &a, &b);

    printf("\n\nValores lidos [%d] e [%d]\n\n", a, b);

    printf("Invertendo o valor fica -> A: %d e B: %d\n\n", (a + b) - a, (a + b) - b);


    return 0;
}
