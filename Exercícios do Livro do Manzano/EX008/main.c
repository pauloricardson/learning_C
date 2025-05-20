#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float despesa, gorjeta;
    int qtdpessoa;

    printf("Despesa total (R$): ");
    scanf("%f", &despesa);
    printf("Gorjeta (%%): ");
    scanf("%f", &gorjeta);
    printf("Quantidade de pessoas: ");
    scanf("%d", &qtdpessoa);
    despesa = despesa + (despesa * (gorjeta / 100));
    despesa = despesa / qtdpessoa;
    printf("\n\nCada pessoa pagará: R$ %.2f\n\n", despesa);

    return 0;
}
