#include <stdio.h>

int main(){

	// Declarando as variáveis
	float media;

	// Campo para o aluno preencher
	printf("Insira a nota:\n");
	scanf("%f", &media);

	// Verificando a média
	if(media >= 4 && media < 7){
		
		printf("Tem direito a exame!\n");
		
	}
	
}
