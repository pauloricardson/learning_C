#include <stdio.h>
#include <stdlib.h>

int main(){

    int segundos, h, m, s, resto;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    m = (segundos % 3600) / 60;
    s = segundos % 60;

    printf("\n\n%02d:%02d:%02d\n\n", h, m, s);

    return 0;
}
