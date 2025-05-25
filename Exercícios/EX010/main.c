#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, total, dolar = 5.30;

    printf("Informe o valor (R$): ");
    scanf("%f", &valor);

    total = valor / dolar;

    printf("\nR$ %.2f equivalem a US$ %.2f\n", valor, total);
    printf("Valor do câmbio: US$ %.2f\n\n", dolar);

    return 0;
}
