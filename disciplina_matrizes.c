#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese")	;
	
	char disciplina[3][200];
	float notas[3][2];
	float media[3];
	int soma = 0;
	int i, j;
	
	printf("Disciplinas:\n");
	for(i = 0; i < 3; i++){
		printf("Digite qual � a %d� disciplina: ", i + 1);
		scanf("%s", &disciplina[i]);
		
		for(j = 0; j < 2; j++){
			printf("Digite a sua %d nota: ", j + 1);
			scanf("%f", &notas[i][j]);
			
			soma += notas[i][j];
		}
		
		media[i] = soma / 2;
		soma = 0;
	}
	
	printf("\n");
	
	for(i = 0; i < 3; i++){
		printf("%d Disciplina: %s\n", i + 1, disciplina[i]);
		
		for(j = 0; j < 2; j++){
			printf("%d nota: %.2f\n", j + 1, notas[i][j]);
		}
		
		printf("Sua m�dia: %.2f\n", media[i]);
		printf("\n");
	}
	
}
