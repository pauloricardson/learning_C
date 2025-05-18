#include <stdio.h>
#include <stdlib.h>

// Qual o tamanho de um float na memória? / %f
// Ocupa o mesmo que o INT, mas ocupa a memória de forma diferente

int main()
{
    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria\n", sizeof(float));

    return 0;
}
