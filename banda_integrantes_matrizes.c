#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char banda[3][200];
	char integrantes[3][5][200];
	int i, j;
	
	// Aplicando a estrutura de repetição for i
	for(i = 0; i < 3; i++){
		
		// Campo para o usuario preencher
		printf("Digite o nome da %dº banda: ", i + 1);
		scanf("%s", &banda[i]);
		fflush(stdin);
		
		// Aplicando a estrutura de repetição for j
		for(j = 0; j < 5; j++){
			
			// Campo para o usuario preencher
			printf("Digite o nome do %dº integrante: ", j + 1);
			scanf("%s", &integrantes[i][j]);
			fflush(stdin);
			
		}
		
	}
	
	// Exibindo o resultado no terminal
	for(i = 0; i < 3; i++){
		
		printf("%dº Banda: %s\n", i + 1, banda[i]);
		
		for(j = 0; j < 5; j++){
			
			printf("%dº Integrante: %s\n", j + 1, integrantes[i][j]);
			
		}
		
	}
	
}
