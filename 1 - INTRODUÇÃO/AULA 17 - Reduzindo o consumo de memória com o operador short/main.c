#include <stdio.h>
#include <stdlib.h>

// Operador short para o tipo int intervalo: -32.768 até 32.767


int main(){
    int y = 0;
    short int x = 32767;

    printf("Valor de x: %hi\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    // 4 * 8 = 32 bits de memória

    return 0;
}
