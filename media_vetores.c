#include <stdio.h>
#include <locale.h>

#define TAM 3

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	float notas[TAM];
	float media;
	int somaNotas;
	int i;
	
	// Verificando as notas do aluno
	for(i = 0; i < TAM; i++){
		printf("Digite a sua nota: ");
		scanf("%f", &notas[i]);
		
		somaNotas += notas[i];
	}
	
	// Exibindo o resultado na tela
	printf("\nResultado:\n");
	for(i = 0; i < TAM; i++){
		printf("Notas: %.2f\n", notas[i]);
	}	
	
		media = somaNotas / i;
	
		printf("Sua media é: %.2f\n", media);
	
}
