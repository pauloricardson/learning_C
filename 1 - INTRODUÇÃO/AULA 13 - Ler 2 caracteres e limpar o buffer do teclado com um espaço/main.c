#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite dua letras: ");
    scanf("%c %c", &a, &b);

    // espaço entre o %c => é o comando para o computador desconsiderar o enter o tab e espaço.
    // fflush(); => não usar, pois só funciona no windows. Também nçao funciona em todos os casos.

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
