#include <stdio.h>
#include <stdlib.h>

/*
Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
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
