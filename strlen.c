#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "Portuguese");
	
	// Declarando as variáveis
	char s[N];
	int i;
	
	// Campo para o usuario preencher
	printf("Digite um texto:\n");
	gets(s);
	// Um size_t (longo inteiro sem sinal) com o valor da quantidade de caracteres daquela string.
	i = strlen(s);
	printf("\nTamanho do texto: %d\n\n", i);
	
	// Imprimindo o resultado na tela
	printf("Impressão de posição a posição:\n");
	for(i = 0; i < strlen(s); i++){
		printf("%c", s[i]);
	}
}
