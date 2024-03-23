#include <stdio.h>

int main(){

	// Declarando as variáveis
	float primeiraNota, segundaNota, media;

	// Campo para o aluno preencher
	printf("Digite a primeira nota:\n");
	scanf("%f", &primeiraNota);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &segundaNota);

	// Calculando a média
	media = (primeiraNota + segundaNota)/2;

	// Verificando a média do aluno
	if(media >= 7){
		
		printf("Parabens, voce esta aprovado! %.1f\n", media);	
		
	}
	else if(media >= 4){
	
		printf("Voce esta na recuperacao! %.1f\n", media);	
	}
	else{
		
		printf("Voce esta reprovado! %.1f\n", media);
		
	}
	
}
