#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	// Distribuindo as variáveis
	char aluno[4][200];
	float nota[4][3];
	float media[4];
	int soma = 0;
	int i, j;
	
	printf("Digite suas notas:\n");
	// Aplicando a estutura de repetição for i
	for(i = 0; i < 4; i++){
		// Campo para o usuario preencher
		printf("Digite o nome do %dº aluno: ", i + 1);
		scanf("%s", &aluno[i]);

		// Aplicando a estrutura de repetição for j
		for(j = 0; j < 3; j++){
			// Campo para o usuario preencher
			printf("Digite a %dº nota: ", j + 1);
			scanf("%f", &nota[i][j]);

			// Calculando a soma das notas
			soma += nota[i][j];
		}

		// Calculando a media das notas
		media[i] = soma / 3;
		// Zerando a soma
		soma = 0;
	}
	

	
	printf("\n");

	// Exibindo o resultado no terminal
	for(i = 0; i < 4; i++){
		printf("%dº aluno: %s\n", i + 1, aluno[i]);
	
		for(j = 0; j < 3; j++){
			printf("%dº nota: %.2f \n", j + 1, nota[i][j]);
		}
		
		printf("Sua média é: %.2f\n", media[i]);
		printf("\n");
		
	}
	
	
}
