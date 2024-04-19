#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	// Declarando as variáveis
	int numeros[2][2];
	int i, j;
	
	printf("Digite os elementos para matriz:\n");
	// Aplicando a estrutura de repetição for i
	for(i = 0; i < 2; i++){
		// Aplicando a estrutura de repetição for j
		for(j = 0; j < 2; j++){
			// Campo para o usuario preencher
			printf("Elemento de linha %d coluna %d ", i + 1, j + 1);
			scanf("%d", &numeros[i][j]);
		}
	}

	// Exibindo o resultado no terminal
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Elemento da linha %d coluna %d: %d \n", i + 1, j + 1, numeros[i][j]);
		}
	}
	
	
}
