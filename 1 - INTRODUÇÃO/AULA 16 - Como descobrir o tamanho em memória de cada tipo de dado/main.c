#include <stdio.h>
#include <stdlib.h>

// Utilizando o operador sizeof
// sizeof x ou sizeof(int);
// sizeof n�o � fun��o, mas sim operador, constante


int main(){
    float x = 1.0;

    printf("Tamanho de um float na memoria: %d bytes\n", sizeof x);
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));

    // 4 * 8 = 32 bits de mem�ria

    return 0;
}
