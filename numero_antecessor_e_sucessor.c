#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");

	// Declarando as variáveis
	int numero, sucessor, antecessor;

	// Campo para o usuario preencher
	printf("Digite um numero:\n");
	scanf("%d", &numero);

	// Declarando os valores as variáveis dos numeros antecessores e sucessores
	sucessor = numero + 1;
	antecessor = numero - 1;

	// Exibindo o resultado no terminal
	printf("Resultado:\n");
	printf("Sucessor deste numero: %d\n", sucessor);
	printf("Antecessor deste numero: %d\n", antecessor);

	
	
}
