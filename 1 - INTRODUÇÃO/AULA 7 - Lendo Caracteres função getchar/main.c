#include <stdio.h>
#include <stdlib.h>

// AULA 7 - Lendo Caracteres Fun��o getchar()

int main(){

    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Caracter lido: %c\n", letra);

    return 0;
}
