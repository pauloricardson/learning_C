#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // PARA COMPATIBILIDADE COM PORTUGUES

int main(){
	
	setlocale(LC_ALL, "portuguese"); // SEMPRE QUE PUDER É BOM COLOCAR
	
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