#include <stdio.h>
#include <stdlib.h>

/*
Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a vari�vel �a� e um
para a vari�vel �b�. Em seguida, fa�a os passos que julgar necess�rio para que ao final, a vari�vel
�a� possua o valor que inicialmente estava em �b� e a vari�vel �b� possua o valor que inicialmente
estava em �a�. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main(){
    int a, b, aux;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    printf("\n\nValores lidos A: %d, B: %d\n\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("\n\nValor de A: %d, Valor de B: %d\n\n", a, b);

    return 0;
}
