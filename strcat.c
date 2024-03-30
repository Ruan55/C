#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char s1[N] = {"Logica de"};
	char s2[N] = {" Programação!"};
	
	// Campo para o usuario preencher
	printf("Antes do strcpy:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	// String de destino concatenada com a string fonte
	strcat(s1,s2);
	
	// Campo para o usuario preencher
	printf("Depois do strcat:\n");
	puts(s1);
	
	
}
