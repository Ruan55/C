#include <stdio.h>
#include <locale.h>

#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int numeros[TAM], numerosPares = 0, numerosImpares = 0;
	int i, quantidadePositivos, quantidadeNegativos;
	
	// Aplicando a estrutura de repetição for
	for(i = 0; i < TAM; i++){
		// Campo para o usuario preencher
		printf("Digite um número: ");
		scanf("%d", &numeros[i]);
		
		// Verificando os numeros pares e impares
		if(numeros[i] % 2 == 0){
			numerosPares++;
		}else{
			numerosImpares++;
		}
		
		// Verificando a quantidade de numeros positivos e negativos
		if(numeros[i] > 0){
			quantidadePositivos++;
		}
		
		if(numeros[i] < 0){
			quantidadeNegativos++;
		}
	}
	
	// Exibindo os resultados no terminal
	for(i = 0; i < TAM; i++){
		printf("Numeros %d: %d\n", i + 1, numeros[i]);
	}
	
	printf("Quantidade de numeros inseridos: %d\n", i);
	printf("Quantidade de numeros pares: %d\n", numerosPares);
	printf("Quantidade de numeros impares: %d\n", numerosImpares);
	printf("Quantidade de numeros positivos: %d\n", quantidadePositivos);
	printf("Quantidade de numeros negativos: %d\n", quantidadeNegativos);
	
}
