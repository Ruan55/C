#include <stdio.h>

int main(){
	// Declarando as vari�veis
	int idade = 0;
	float peso = 0.0;
	
	// Campo para o usuario preencher
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	
	printf("Digite o ano: \n");
	scanf("%f", &peso);
	
	// Exibindo as informa��es no terminal
	printf("Idade informada: %d \n", idade);
	printf("Peso informado: %f \n", peso);
	
}
