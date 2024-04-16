#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char aluno[4][200];
	float nota[4][3];
	float media[4];
	int soma = 0;
	int i, j;
	
	printf("Digite suas notas:\n");
	for(i = 0; i < 4; i++){
		printf("Digite o nome do %dº aluno: ", i + 1);
		scanf("%s", &aluno[i]);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %dº nota: ", j + 1);
			scanf("%f", &nota[i][j]);
			
			soma += nota[i][j];
		}
		
		media[i] = soma / 3;
		soma = 0;
	}
	

	
	printf("\n");
	
	for(i = 0; i < 4; i++){
		printf("%dº aluno: %s\n", i + 1, aluno[i]);
	
		for(j = 0; j < 3; j++){
			printf("%dº nota: %.2f \n", j + 1, nota[i][j]);
		}
		
		printf("Sua média é: %.2f\n", media[i]);
		printf("\n");
		
	}
	
	
}
