#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	float media, mediaPar;
	int numero ,numPar = 0, numImpar = 0, soma = 0;
	int i;
	
	// Aplicando a estrutura de repetição while
	while(1){
		
		// Campo para o usuario preencher
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		// Encerrando o programa caso seja inserido o numero 0
		if(numero <= 0){
			break;
		}
		
		soma += numero;
		i++;
		
		// Calculando a quantidade de numeros pares e impares
		if(numero % 2 == 0){
		numPar++;
			}
		else{
		numImpar++;
		}
			
	}
	
	// Calculando a media dos pares
	mediaPar = soma / numPar;	
	
	// Calculando a media geral
	media = soma / i;
	
	// Exibindo o resultado no terminal
	printf("Resultado:\n");
	printf("Quantidade de numeros pares: %d\n", numPar);
	printf("Quantidade de numeros impares: %d\n", numImpar);
	printf("Media dos valores pares: %.2f\n", mediaPar);
	printf("Media dos numeros: %.2f\n", media);

}
	

		

