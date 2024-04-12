#include <stdio.h>
#include <locale.h>

#define TAM 6

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int numeros[TAM];
	int i;
	
	// Aplicando a estrutura de repetição for
	for(i = 0; i < TAM; i++){
		do{
			// Campo para o usuario preencher
			printf("Digite um numero %d: ", i + 1);
			scanf("%d", &numeros[i]);
		}while(numeros[i] < 0 || numeros[i] % 2 == 1);
	}
	
	// Exibindo os resultados no terminal
	for(i = TAM - 1; i >= 0; i--){
		printf("Numeros %d: %d\n", i + 1, numeros[i]);
	}
}
