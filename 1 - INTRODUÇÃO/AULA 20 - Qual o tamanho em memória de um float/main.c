#include <stdio.h>
#include <stdlib.h>

// Qual o tamanho de um float na mem�ria? / %f
// Ocupa o mesmo que o INT, mas ocupa a mem�ria de forma diferente

int main()
{
    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria\n", sizeof(float));

    return 0;
}
