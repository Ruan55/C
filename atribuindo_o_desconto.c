#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	float valor, desconto, valorFinal;
	
	printf("Digite um valor:\n");
	scanf("%f", &valor);
	
	desconto = valor * 0.10;
	valorFinal = valor - desconto;
	
	printf("Valor: R$ %.2f\n", valor);
	printf("Desconto: R$ %.2f\n", desconto);
	printf("Valor final: R$ %.2f\n", valorFinal);
	
	return 0;
	
}
