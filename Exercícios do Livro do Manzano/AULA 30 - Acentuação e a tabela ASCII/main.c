#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

                Aula 30
        tabela ascii e acentua��o
        1 byte (8 bits) -> -128 at� 127
        unsigned 1 byte -> 0 at� 255

        9 � o caractere de tabula��o \t.
        10 � o caractere de nova linha \n (enter).
        65 � a letra A mai�scula.
        66 � a letra B mai�scula.
        90 � a letra Z mai�scula.

        1� = setlocale(LC_ALL, NULL);   // padr�o da linguagem C
        2� = setlocale(LC_ALL, "");     // padr�o do sistema operacional
        3� = setlocale(LC_ALL, "Portuguese"); // portugu�s brasileiro

*/

int main(){

    printf("%s\n", setlocale(LC_ALL, "portuguese"));

    printf("Cora��o\n");

    return 0;
}
