#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

int main(){
	
	// Declarando as variáveis
	int valor[TAM];
	int i;
	
	// Declarando a quantidade de vetores
	printf("Digite os elementos do vetor:\n");
	for(i = 0; i < TAM; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d", &valor[i]);
	}
	
	// Exibindo o resultado no terminal
	printf("\nResultado:\n");
	for(i = 0; i < TAM; i++){
		printf("Elemento %d: %d\n", i + 1, valor[i]);
	}	
}
