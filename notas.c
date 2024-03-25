#include <stdio.h>

int main(){
	// Declarando as variáveis
	int notas, soma;
	float media;
	int i;
	
	// Verificando os resultados na tela
	for(i = 0; i < 4; i++){
		printf("Digite um numero: ", i);
		scanf("%d", &notas);
		
		soma = soma + notas;
	}
	
		media = soma / 4 ;
	
	// Exibindo os resultados na tela
	printf("Resultado:\n");
	printf("Media: %.2f", media);
	
	
}
