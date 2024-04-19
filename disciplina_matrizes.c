#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese")	;

	// Declarando as variáveis
	char disciplina[3][200];
	float notas[3][2];
	float media[3];
	int soma = 0;
	int i, j;
	
	printf("Disciplinas:\n");
	// Aplicando a estrutura de repetição for i
	for(i = 0; i < 3; i++){
		// Campo para o usuario preencher
		printf("Digite qual é a %dº disciplina: ", i + 1);
		scanf("%s", &disciplina[i]);

		// Aplicando a estrutura de repetição for j
		for(j = 0; j < 2; j++){
			// Campo para o usuario preencher
			printf("Digite a sua %d nota: ", j + 1);
			scanf("%f", &notas[i][j]);

			// Calculando a soma das notas
			soma += notas[i][j];
		}

		// Calculando a media das notas
		media[i] = soma / 2;
		// Zerando a soma
		soma = 0;
	}
	
	printf("\n");

	// Exibindo o resultado no terminal
	for(i = 0; i < 3; i++){
		printf("%d Disciplina: %s\n", i + 1, disciplina[i]);
		
		for(j = 0; j < 2; j++){
			printf("%d nota: %.2f\n", j + 1, notas[i][j]);
		}

		// Exibindo a media no terminal
		printf("Sua média: %.2f\n", media[i]);
		printf("\n");
	}
	
}
