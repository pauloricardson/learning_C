#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite dua letras: ");
    scanf("%c %c", &a, &b);

    // espa�o entre o %c => � o comando para o computador desconsiderar o enter o tab e espa�o.
    // fflush(); => n�o usar, pois s� funciona no windows. Tamb�m n�ao funciona em todos os casos.

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
