#include <stdio.h>

int main(){
	// Declarando as variáveis
	char s[10];
	
	// Campo para o usuario preencher
	printf("Digite algo (leitura pelo gets):\n");
	// Lê caracteres da entrada padrão (stdin) e os armazena como uma string C em str até que um caractere de nova linha ou o final do arquivo seja alcançado.
	gets(s);
	fflush(stdin);
	
	// Imprimindo o resultado no terminal
	puts("Resultado:");
	puts(s);
	puts("");
	
	// Campo para o usuario preencher
	printf("Digite algo (leitura pelo fgets):\n");
	// O fgets() lê uma linha do fluxo especificado e a armazena na string apontada por str.
	fgets(s, 10, stdin);
	fflush(stdin);
	
	// Imprimindo o resultado no terminal
	puts("Resultado:");
	puts(s);
}
