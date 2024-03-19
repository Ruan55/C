#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	// Declarando as variáveis
	char nome [50];
	int idade;
	
	// Campo para o usuario preencher
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);

	// Verificando as idades
	if(idade < 18 || idade >= 65){
		
		printf("Não é obrigado a votar!\n");
		
	}
	else{
		
		printf("É obrigado a votar!\n");
		
	}
	
}
