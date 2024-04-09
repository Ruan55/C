#include <stdio.h>

#define TAM 3

int main(){
	
	// Declarando as variáveis
	float notas[TAM];
	int i;
	
	// Verificando as notas do aluno
	for(i = 0; i < TAM; i++){
		printf("Digite a sua nota: ");
		scanf("%f", &notas[i]);
	}
	
	// Exibindo o resultado na tela
	printf("\nResultado:\n");
	for(i = 0; i < TAM; i++){
		printf("Notas: %.2f\n", notas[i]);
	}	
	
	
}
