#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	// Declarando as vari�vaeis
	int primeiroNumero, segundoNumero;
	int soma, produto, menorValor, maiorValor;
	float media;
	
	// Campo para o usuario preencher
	printf("Digite o primeiro n�mero:\n");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo n�mero:\n");
	scanf("%d", &segundoNumero);
	
	// Realizando os calculos
	soma = primeiroNumero + segundoNumero;
	media = soma / 2;
	produto = primeiroNumero * segundoNumero;
	
	// Verificando qual � o maior e o menor valor
	if(primeiroNumero > segundoNumero){
		
		printf("Primeiro Numero � maior\n");
		
	}
	else{
		
		printf("Segundo numero � maior\n");
		
	}
	
	if(primeiroNumero < segundoNumero){
		
		printf("Primeiro numero � menor\n");
		
	}
	else{
		
		printf("Segundo numero � menor\n");
		
	}
	
	// Verificando se os numero s�o iguais
	if(primeiroNumero == segundoNumero){
		
		printf(" Os valores s�o iguais\n");
		
	}
	else{
		
		printf(" Os valores s�o diferentes\n");
		
	}
	
	// Exibindo o resultado na tela
	printf("Resultado:\n");
	printf("M�dia: %.2f\n", media);
	printf("Soma: %d\n", soma);
	printf("Produto: %d\n", produto);

}
