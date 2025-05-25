#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Informe o seu sexo (M ou F): ");
    sexo = getchar();

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu peso(kg) e altura(cm): ");
    scanf("%f%f", &peso, &altura);

    printf("\n\n Sexo: %c\n idade: %d\n peso: %.1f\n altura: %.1f\n\n", sexo, idade, peso, altura);


    return 0;
}
