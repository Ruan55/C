#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	// Declarando as variáveis
	int numeros[2][2];

	// Atribuindo os valores das matrizes
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	// Imprimindo resultado no terminal
	printf("Elemento 1: %d\n", numeros[0][0]);
	printf("Elemento 2: %d\n", numeros[0][1]);
	printf("Elemento 3: %d\n", numeros[1][0]);
	printf("Elemento 4: %d\n", numeros[1][1]);
	
}
