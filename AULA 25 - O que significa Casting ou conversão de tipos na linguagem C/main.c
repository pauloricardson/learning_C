#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10, b = 20;
    float pi = 3.1415;

    a = (int)pi;

    printf("Valor de a: %d\n", a);
    printf("\nSoma: %d\n", a + b);
    printf("\nSubtra��o: %d\n", a - b);
    printf("\nMultiplica��o: %d\n", a * b);
    printf("\nDivisoo: %.1f\n", (float)a / b);

    return 0;
}
