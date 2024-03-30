#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char origem[N] = {"Olá Mundo!"};
	char destino[N];
	
	// Campo para o usuario preencher
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	// Copia a string fonte para a string de destino, incluindo o caractere terminal de string. 
	strcpy(destino,origem);
	
	// Campo para o usuario preencher
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
	
	
}
