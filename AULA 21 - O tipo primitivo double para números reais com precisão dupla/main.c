#include <stdio.h>
#include <stdlib.h>

// tipo double

int main()
{
    float x = 3.1415; // precis�o simples

    long double y = 3.14156377383928227383746882727730912; // precis�o dupla

    printf("Um double precisa de %d bytes de memoria\n", sizeof y);

    return 0;
}
