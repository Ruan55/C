#include <stdio.h>
#include <locale.h>

#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int numeros, quantidadeNumeros = 0,numerosPares = 0, numerosImpares = 0;
	int quantidadePositivos, quantidadeNegativos;
	
		// Aplicando a estrutura de repetição for
		do{
		// Campo para o usuario preencher
		printf("Digite um número: ");
		scanf("%d", &numeros);
		
		if(numeros != 0){
			quantidadeNumeros++;
		}
		
		// Verificando os numeros pares e impares
		if(numeros > 0){
			quantidadePositivos++;
		if(numeros % 2 == 0){
			numerosPares++;
		}else{
			numerosImpares++;
		}
	}
		// Verificando a quantidade de numeros positivos e negativos
		if(numeros < 0){
			quantidadeNegativos++;
		}
		
}while(numeros != 0);
		
	printf("Quantidade de numeros inseridos: %d\n", quantidadeNumeros);
	printf("Quantidade de numeros pares: %d\n", numerosPares);
	printf("Quantidade de numeros impares: %d\n", numerosImpares);
	printf("Quantidade de numeros positivos: %d\n", quantidadePositivos);
	printf("Quantidade de numeros negativos: %d\n", quantidadeNegativos);
	
}
