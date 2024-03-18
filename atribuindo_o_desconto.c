#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int valor, desconto;

	// Campo para o usuario preencher
	printf("Digite um valor:\n");
	scanf("%d", &valor);

	// Calculando o desconto
	desconto = valor * 0.10;

	// Exibindo o resultado na tela
	printf("Resultado: %d\n", desconto);
	
	return 0;
	
}
