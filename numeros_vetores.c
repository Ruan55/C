#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int numeros[TAM];
	int maiorNumero = INT_MIN, menorNumero = INT_MAX;
	int i;
	
	// Verificando as notas do aluno
	for(i = 0; i < TAM; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
	}
	
	// Exibindo o resultado na tela
	printf("\nResultado:\n");
	for(i = 0; i < TAM; i++){
		printf("Numeros: %d\n", numeros[i]);
		
		
	// Verificando qual é o maior e o menor numero
	if(numeros[i] > maiorNumero){
		maiorNumero = numeros[i];
	}
	
	if(numeros[i] < menorNumero){
		menorNumero = numeros[i];
	}
	}	

	
	// Exibindo o resultado no terminal
	printf("Resultado:\n");
	printf("Maior numero: %d\n", maiorNumero);
	printf("Menor numero: %d\n", menorNumero);
	
	
}
