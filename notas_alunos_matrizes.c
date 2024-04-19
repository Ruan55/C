#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	// Declarando as variáveis
	char aluno[2][200];
	float nota[2][3];
	int i, j;

	printf("Digite suas notas:\n");
	// Aplicando a estrutura de repetição for i
	for(i = 0; i < 2; i++){
		// Campo para o usuario preencher
		printf("Digite o nome do %dº aluno: ", i + 1);
		scanf("%s", &aluno[i]);

		// Aplicando a estrutura de repetição for j
		for(j = 0; j < 3; j++){
			// Campo para o usuario preencher
			printf("Digite a %dº nota: ", j + 1);
			scanf("%f", &nota[i][j]);
		}
	}
	
	printf("\n");

	// Exibindo o resultado no terminal
	for(i = 0; i < 2; i++){
		printf("%dº aluno: %s\n", i + 1, aluno[i]);
		
		for(j = 0; j < 3; j++){
			printf("%dº nota: %.2f \n", j + 1, nota[i][j]);
		}
		
		printf("\n");
		
	}
	
}
