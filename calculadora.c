#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int primeiroNumero, segundoNumero;
	int soma, subtracao, multiplicacao, divisao;
	
	// Campo para o usuario preencher
	printf("Digite o primeiro numero:\n");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo numero:\n");
	scanf("%d", &segundoNumero);
	
	// Calculando as operações para o usuario
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;

	// Limpa o terminal no windows
	system("cls"); 
	
	// Exibindo os resultados na tela
	printf("Resultado:\n");
	printf("Adicao:%d\n", soma);
	printf("Subtracao:%d\n", subtracao);
	printf("Multiplicacao:%d\n", multiplicacao);
	printf("Divisao:%d\n", divisao);
	
	
	
}
