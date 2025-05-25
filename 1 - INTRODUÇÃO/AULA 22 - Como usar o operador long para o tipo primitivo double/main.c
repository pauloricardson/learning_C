#include <stdio.h>
#include <stdlib.h>

// tipo double
/*

operador long para o tipo double
double -> %lf
long double -> %Lf
__mingw__printf();

*/

int main()
{
    float x = 3.1415; // precisão simples

    long double y = 3.1415637738392822; // precisão dupla

    printf("Valor de y: %.10Lf\n", y);

    __mingw_printf("Valor de y: %.25Lf\n", y);

    printf("Um long double precisa de %d bytes de memoria\n", sizeof y);

    // long double tem 8 bytes de memória, ou 64 bits

    return 0;
}
