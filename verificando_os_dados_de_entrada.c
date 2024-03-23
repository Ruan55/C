#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "");
	
	// Declarando as variávaeis
	int primeiroNumero, segundoNumero;
	int soma, produto, menorValor, maiorValor;
	float media;
	
	// Campo para o usuario preencher
	printf("Digite o primeiro número:\n");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo número:\n");
	scanf("%d", &segundoNumero);
	
	// Realizando os calculos
	soma = primeiroNumero + segundoNumero;
	media = soma / (float) 2;
	produto = primeiroNumero * segundoNumero;
	
	// Verificando qual é o maior e o menor valor
	if(primeiroNumero > segundoNumero){
		
		printf("Primeiro Numero é maior\n");
		
	}
	else{
		
		printf("Segundo numero é maior\n");
		
	}
	
	if(primeiroNumero < segundoNumero){
		
		printf("Primeiro numero é menor\n");
		
	}
	else{
		
		printf("Segundo numero é menor\n");
		
	}
	
	// Verificando se os numero são iguais
	if(primeiroNumero == segundoNumero){
		
		printf(" Os valores são iguais\n");
		
	}
	else{
		
		printf(" Os valores são diferentes\n");
		
	}
	
	// Exibindo o resultado na tela
	printf("Resultado:\n");
	printf("Média: %.2f\n", media);
	printf("Soma: %d\n", soma);
	printf("Produto: %d\n", produto);

}
