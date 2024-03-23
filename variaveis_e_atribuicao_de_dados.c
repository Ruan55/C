#include <stdio.h>

#define texto "Entrada de dados."

int main(){
	// Exibindo a entrada de dados
	printf("%s\n", texto);
	
	// Declarando as variaveis
	int idade = 0;
	float altura = 0.0;
	char nome [50] = "";
	
	// Campo para o usuario preencher
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a sua altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o seu nome:\n");
	scanf("%s", nome);

	// Imprimindo as informações no terminal
	printf("Dados exibidos: \n");
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Nome: %s\n", nome);
	
	
}
