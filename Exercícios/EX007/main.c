#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma
vari�vel auxiliar.
*/

int main(){
    int a, b;

    printf("Valor de A e B: ");
    scanf("%d%d", &a, &b);

    printf("\n\nValores lidos [%d] e [%d]\n\n", a, b);

    printf("Invertendo o valor fica -> A: %d e B: %d\n\n", (a + b) - a, (a + b) - b);


    return 0;
}
