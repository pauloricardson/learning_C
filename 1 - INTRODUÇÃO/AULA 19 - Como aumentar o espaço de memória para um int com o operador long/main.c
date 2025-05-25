// https://www.youtube.com/watch?v=_oq-3DS7cz4&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=20

#include <stdio.h>
#include <stdlib.h>

// TAMANHO DE UM INT NA MEM�RIA
// intervalo: -2.147.483.648 a 2.147.483.647
// %hi ou %d
// Para aumentar a mem�ria, podemos usar o operador LONG


int main(){

    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %lld\n", x);
    x++;
    printf("Valor de x: %lli\n", x);

    // um LONG LONG INT � impresso com %li ou %ld
    // s� suporta 2 longs

    // 4 * 8 = 32 bits de mem�ria

    return 0;
}
