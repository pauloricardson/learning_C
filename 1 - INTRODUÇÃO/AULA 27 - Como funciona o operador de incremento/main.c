#include <stdio.h>
#include <stdlib.h>

int main()
{

    int resultado, contador = 10;

    // sinonimas
    //contador++;
    //contador += 1;
    //contador = contador + 1;

    resultado = ++contador;

    printf("Valor: %d\n", resultado);

    return 0;
}
