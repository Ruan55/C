#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int valor, desconto;
	
	printf("Digite um valor:\n");
	scanf("%d", &valor);
	
	desconto = valor * 0.10;
	
	printf("Resultado: %d\n", desconto);
	
	return 0;
	
}
