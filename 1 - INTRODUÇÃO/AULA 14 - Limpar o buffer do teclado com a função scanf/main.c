#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite uma letras: ");
    scanf("%c", &a);

    scanf("%c"); // método para limpar o buffer do teclado, uma alternativa ao teclado

    printf("Digite outra letras: ");
    scanf("%c", &b);

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
