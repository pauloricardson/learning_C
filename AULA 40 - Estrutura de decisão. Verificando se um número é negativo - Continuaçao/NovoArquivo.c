#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	
	printf("Digite um valor qualquer: ");
	scanf("%d", &a);
	
	if (a < 0){ // if = se
		printf("\n\tValor negativo!\n");
	}else{
		printf("\n\tO valor é positivo1 ou igual a 0!\n");
	}
	
	printf("\nContinuacao do programa...\n");
	
	return 0;
}