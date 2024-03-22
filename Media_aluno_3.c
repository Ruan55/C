#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char nome [50];
	float primeiraNota, segundaNota, media;
		
	// Campo para o aluno preencher
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	printf("Digite a sua primeira nota:\n");
	scanf("%f", &primeiraNota);
	printf("Digite a sua segunda nota:\n");
	scanf("%f", &segundaNota);
	
	// Calculando a media
	media = (primeiraNota + segundaNota)/2;
	
	// Verificando a media do aluno
	if(media >= 9){
		
		printf("A");
		
	}
	else if(media >= 7.5 && media < 9){
		
		printf("B");
		
	}
	else if(media >= 6 && media < 7.5){
		
		printf("C");
		
	}
	else if(media >= 4 && media < 6){
		
		printf("D");
		
	}
	else{
		
		printf("E");
		
	}
	
	
}
