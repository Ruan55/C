#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// Declarando as variáveis
	char disciplinas[3][200];
	int notas[3][2], soma = 0;
	float media[3];
	int i, j;
	
	// Aplicando a estrutura de repetição for i
	for(i = 0; i < 3; i++){
		
		// Campo para o usuario preencher
		printf("Digite a %dº disciplina: ", i + 1);
		scanf("%s", &disciplinas[i]);
		
		// Aplicando a estrutura de repetição for j
		for(j = 0; j < 2; j++){
			
			// Campo para o usuario preencher
			printf("Digite a %dº nota: ", j + 1);
			scanf("%d", &notas[i][j]);
			
			// Calculando a soma das notas
			soma += notas[i][j];
			
		}
		
		// Calculando a media
		media[i] = soma / 2;
		// Zerando a soma
		soma = 0;
		
		
	}

	
	// Exibindo o resultado no terminal
	for(i = 0; i < 3; i++){
		
		printf("%d Disciplinas: %s\n", i + 1, disciplinas[i]);
		
		for(j = 0; j < 2; j++){
			
			printf("%d Notas: %d\n", j + 1, notas[i][j]);
			
		}
		
		// Exibindo a media no terminal
		printf("Sua média: %.2f\n", media[i]);
		
				
		// Verificando a media do aluno
		if(media[i] >= 7){
			printf("Aprovado!\n");
		}else if(media[i] >= 5 && media[i] < 7){
			printf("Recuperação!\n");
		}else{
			printf("Reprovado!\n");
		}
		
	}
	
	
}
