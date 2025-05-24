#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 10, b = 20;
	
	printf("\n\n== Valor fazer a comparação com operadores relacionais ===\nA = 10 e B = 20\nObs.: 1 - SIM, 2 - NAO\n\n");
	
	printf("\n\tA > B?: %d\n", a > b);
	printf("\n\tA < B?: %d\n", a < b);
	printf("\n\tA >= B?: %d\n", a >= b);
	printf("\n\tA <= B?: %d\n", a <= b);
	printf("\n\tA == B?: %d\n", a == b);
	printf("\n\tA != B?: %d\n", a != b);
	
	return 0;
}