#include <stdio.h>

int main(){
	// Declarando as variáveis
	int primeiroNumero, segundoNumero, soma, sub, multi, div;
	
	// Campo para o usuario preencher
	printf("Digite o primeiro numero:\n");
	scanf("%d", &primeiroNumero);
	
	printf("Digite o segundo numero:\n");
	scanf("%d", &segundoNumero);
	
	// Calculando as operações para o usuario
	soma = (primeiroNumero + segundoNumero)*5;
	sub = primeiroNumero - segundoNumero;
	multi = primeiroNumero * segundoNumero;
	div = primeiroNumero / segundoNumero;
	
	// Exibindo o resultado no terminal
	printf("Resultado:\n");
	printf("Soma: %d\n", soma);
	printf("Subtra: %d\n", sub);
	printf("Multiplic: %d\n", multi);
	printf("Divisao: %d\n", div);

	
}
