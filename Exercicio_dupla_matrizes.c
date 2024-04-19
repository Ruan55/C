#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char disciplinas[3][200];
	float notas[3][3], soma = 0;
	int peso[TAM] = {3,3,4};
	int multi;
	float mediaPonderada[3];
	int i, j;
	
		for(i = 0; i < 3; i++){
			
			printf("Digite o nome da %dº disciplina: ", i + 1);
			scanf("%s", &disciplinas[i]);
			
			for(j = 0; j < 3; j++){
				
				do{
				printf("Digite a %dº nota: ", j + 1);
				scanf("%f", &notas[i][j]);
				}while(notas[i][j] < 0 || notas[i][j] > 10);
			
				multi = notas[i][j] * peso[j];
				soma += multi;
				mediaPonderada[i] =  soma / 10; 
				
			}
			
			soma = 0;
			
		}
			
		for(i = 0; i < 3; i++){
		
		printf("%d Disciplina: %s\n", i + 1, disciplinas[i]);
		
		for(j = 0; j < 3; j++){
			
			printf("%d Nota: %.1f peso %d\n", j + 1, notas[i][j], peso[i]);
			
			}
			
			printf("Sua média: %.1f\n", mediaPonderada[i]);
					
		}
			
	
		
		
}

