#include <stdio.h>
#include <stdlib.h>

/* AULA 6 - Lendo Caracteres */

int main(){
    //tipo nome;

    char sexo = 'K';

    printf("Valor da variável sexo: %c\n", sexo);

    printf("Digite seu sexo (f, F, m ou M): ");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);




/*

    // tipo nome;
    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f\n", numero);

    printf("Digite um valor real: ");
    scanf("%f", &numero);

    printf("O valor informado foi: %.3f", numero);

    /*
    int valor, valor2; // criei uma variavel para guardar um valor do tipo inteiro

    // atribuição -> atribuir um valor a uma variavel
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    */

    return 0;
}
