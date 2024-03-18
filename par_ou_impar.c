#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
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
