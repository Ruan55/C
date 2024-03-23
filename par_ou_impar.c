#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Declarando as variáveis
	int numero;

	// Campo para o usuario preencher
	printf("Digite um numero:\n");
	scanf("%d", &numero);

	// Verificando se o número inserido pelo usuario é par ou impar
	switch(numero % 2){
		
		case 0:
			printf("Numero par\n");
		break;
		
		case 1:
			printf("Numero impar\n");
		break;
		
		default:
			printf("Dados invalidos\n");
		
		
	}
	
}
