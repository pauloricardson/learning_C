#include <stdio.h>
#include <stdlib.h>

/* AULA 4 - Lendo n�meros inteiros */

int main(){

    int valor, valor2; // criei uma variavel para guardar um valor do tipo inteiro

    // atribui��o -> atribuir um valor a uma variavel
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    printf("\n\nPRESSIONE QUALQUER TECLA PARA SAIR...");
    getchar();

    system("pause");

    return 0;
}
