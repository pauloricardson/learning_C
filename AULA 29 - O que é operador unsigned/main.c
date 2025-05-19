#include <stdio.h>
#include <stdlib.h>

/*
                Operador unsigned
                trocar o %d por %u
                limite para o tipo int: 2.147.483.247
                short int -> %d ou %hi
                unsigned short int %hu ou %d
                unsigned long int %lu
*/

int main(){

    unsigned int x = 2147483647; // tira a parte negativa, recebe apenas valores positivos, o que aumenta consideravelmente. Útil quando não precisa-se ter numeros negativos

    unsigned short int y = 55000;

    x++;

    printf("\n\t%hu\n\n", y);
    return 0;
}
