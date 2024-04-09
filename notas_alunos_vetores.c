#include <stdio.h>
#include <locale.h>

#define TAM 4

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
		
		// Calculando a soma das notas
		somaNotas += notas[i];
	}
	
	// Exibindo o resultado na tela
	printf("\nResultado:\n");
	for(i = 0; i < TAM; i++){
		printf("Notas: %.2f\n", notas[i]);
	}	
	
		// Calculando a media das notas
		media = somaNotas / i;
	
		// Exibindo a media no terminal
		printf("Sua media é: %.2f\n", media);
		
	// Verificando a media do aluno
	if(media >= 7){
		printf("Aprovado!\n");
	}else if(media >= 5){
		printf("Recuperação!\n");
	}else{
		printf("Reprovado!\n");
	}
	
}
