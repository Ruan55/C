#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	// Declarando as vari�veis
	char nome [50];
	int idade;
	
	// Campo para o usuario preencher
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
	if(idade < 18 || idade >= 65){
		
		printf("N�o � obrigado a votar!\n");
		
	}
	else{
		
		printf("� obrigado a votar!\n");
		
	}
	
}
