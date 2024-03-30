#include <stdio.h>

int main(){
	// Declarando as variáveis
	char s[50];
	
	// Campo para o usuario preencher
	printf("Digite algo (scanf convencional):\n");
	scanf("%s", s);
	fflush(stdin);
	
	// Imprimindo o resultado no terminal
	printf("Resultado: %s\n\n", s);
	
	// Campo para o usuario preencher
	printf("Digite algo (scanf aprimorado):\n");
	scanf("%50[^\n]s", s);
	fflush(stdin);
	
	// Imprimindo o resultado no terminal
	printf("Resultado: %s\n\n", s);
}
