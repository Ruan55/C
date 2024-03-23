#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	float valor, desconto, valorFinal;

	// Campo para o cliente preencher
	printf("Digite um valor:\n");
	scanf("%f", &valor);

	// Calculando o desconto
	desconto = valor * 0.10;
	valorFinal = valor - desconto;

	// Imprimindo as informações na tela
	printf("Valor: R$ %.2f\n", valor);
	printf("Desconto: R$ %.2f\n", desconto);
	printf("Valor final: R$ %.2f\n", valorFinal);
	
	return 0;
	
}
