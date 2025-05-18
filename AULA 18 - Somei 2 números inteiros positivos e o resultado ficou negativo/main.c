#include <stdio.h>
#include <stdlib.h>

// TAMANHO DE UM INT NA MEMÓRIA
// intervalo: -2.147.483.648 a 2.147.483.647
// %hi ou %d


int main(){

    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    // 4 * 8 = 32 bits de memória

    return 0;
}
