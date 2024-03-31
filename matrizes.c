#include <stdio.h>

int main(){
	// Declarando as variáveis
	int mat[3][3];
	
	// Exemplo de matrizes
	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	
	mat[1][0] = 4;
	mat[1][1] = 5;
	mat[1][2] = 6;
	
	mat[2][0] = 7;
	mat[2][1] = 8;
	mat[2][2] = 9;
	
	// Imprimindo o resultado no terminal
	printf("Imprimindo a primeira linha:\n");
	printf("%d %d %d", mat[0][0], mat[0][1], mat[0][2]);
	
}
