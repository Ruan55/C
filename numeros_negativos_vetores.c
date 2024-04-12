#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 3

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int numeros[TAM];
	int i;
	
	// Aplicando a estrutura de repetição for
	for(i = 0; i < TAM; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
		
		// Verificando se os numeros reais são negativos ou positivos
		if(numeros[i] < 0){
			numeros[i] = 0;
		}
	}
	
	// Exibindo os resultados no terminal
	for(i = 0; i < TAM; i++){
	printf("Numeros %d: %d\n", i + 1, numeros[i]); 
	}
	
	printf("Numeros negativos: %d\n", numeros[i]);
		
}
	
