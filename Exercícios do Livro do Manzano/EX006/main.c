#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, aux;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("\n\nValor de A: %d, Valor de B: %d\n\n", a, b);


    printf("Hello world!\n");
    return 0;
}
