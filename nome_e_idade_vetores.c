#include <stdio.h>
#include <locale.h>

#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char nome[TAM][200];
	int idade[TAM];
	int i;
	
	// Aplicando a estrutura de repetição for
	for(i = 0; i < TAM; i++){
		// Campo para o usuario preencher
		printf("Digite o seu nome: ",i + 1);
		scanf("%s", &nome[i]);
		
		// Campo para o usuario preencher
		printf("Digite a sua idade: ",i + 1);
		scanf("%d", &idade[i]);
	}

	for(i = 0; i < TAM; i++){
		printf("Nome %d: %s\n", i + 1, nome[i]);
		printf("Idade %d: %d\n", i + 1, idade[i]);
	}
}
