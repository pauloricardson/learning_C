#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int numDiasTrabalhados;
    float valorDia = 45.0, valorLiquido;

    printf("N�meros de dias trabalhados: ");
    scanf("%d", &numDiasTrabalhados);

    valorLiquido = valorDia * numDiasTrabalhados;

    valorLiquido = valorLiquido - (valorLiquido * ((float)8 / 100));
    printf("Valor L�quido com desconto: R$ %.2f", valorLiquido);


    return 0;
}
