#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as vari�veis
	float numerosReais[TAM];
	int quantidadeDeNumerosNegativos,quantidadeDeNumerosPositivos;
	int somaNumerosPositivos = 0;
	int i;
	
	// Aplicando a estrutura de repeti��o for
	for(i = 0; i < TAM; i++){
		printf("Digite um numero: ");
		scanf("%f", &numerosReais[i]);
		
		// Verificando se os numeros reais s�o negativos ou positivos
		if(numerosReais[i] < 0){
			quantidadeDeNumerosNegativos++;
		}else if(numerosReais[i] > 0){
			somaNumerosPositivos += numerosReais[i];
		}
		else{
			printf("Dados invalidos!\n");
		}
	}
	
	// Exibindo os resultados no terminal
	for(i = 0; i < TAM; i++){
	printf("Numeros %d: %.2f\n", i + 1, numerosReais[i]); 
	}
	
	printf("Quantidade de numeros negativos: %d\n", quantidadeDeNumerosNegativos);
	printf("Soma dos numero positivos: %d\n", somaNumerosPositivos);
		
}
	
