/******************************
BCC-PRE 2024.2 - Avaliacao N1.3
Data: 17/dez/2024
Nome: 
******************************/

// QUESTÃO 01 ------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
	
    int matriz1[2][3];
    int matriz2[2][3];
    double num;
    double matrizresult[2][3];
    
    // Entra com os valores da matriz 1
    
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            printf("Entre com matriz 1 [%d][%d] >>> ", lin, col);
            scanf("%d", &matriz1[lin][col]);
        }
    }
    
    // Entra com os valores da matriz 2
    
    printf("\n");
    
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            printf("Entre com matriz 2 [%d][%d] >>> ", lin, col);
            scanf("%d", &matriz2[lin][col]);
        }
    }
    
    printf("\n");
    
    // Printa os valores da matriz 1
    
    printf("Matriz 1: \n");
    for(int lin=0; lin < 2; lin++){
		for(int col=0; col < 3; col++){
            printf("%4d", matriz1[lin][col]);
        }
    printf("\n");
    }
    
    printf("\n");
    
    printf("Matriz 2: \n");
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            printf("%4d", matriz2[lin][col]);
        }
    printf("\n");
    }

// QUESTÃO 02 -------------------------------------------------------------------------------------------------------------

    printf("\n");
    printf("Agora informe um número real >>> ");
    scanf("%lf", &num);
    
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            matrizresult[lin][col] = (matriz1[lin][col] * num);
        }
    }
    
    printf("\n");
    
    printf("Multiplicação da Matriz 1 por número real: \n");
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            printf("%4.1lf    ", matrizresult[lin][col]);
        }
    printf("\n");
    }
	printf("\n");
	
// QUESTÃO 03 -------------------------------------------------------------------------------------------------------------
    
	int soma[2][3];

    printf("A SOMA entre a matriz 1 e matriz 2: \n");
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            printf("%4d", (matriz1[lin][col] + matriz2[lin][col]));
        }
    printf("\n");
    }
    printf("\n");
    
// QUESTÕES 04 -------------------------------------------------------------------------------------------------------------
    
    printf("A MULTIPLICAÇÃO entre a matriz 1 e matriz 2: \n");
    for(int lin=0; lin < 2; lin++){
        for(int col=0; col < 3; col++){
            printf("%4d", (matriz1[lin][col] * matriz2[lin][col]));
        }
    printf("\n");
    }
    
    return 0;
}