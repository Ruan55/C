#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char nome [50];
	int idade;
	float media;
	
	// Campo para o usuario preencher
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	printf("Digite a sua media:\n");
	scanf("%f", &media);
	
	// Verificando a media do aluno
	if(media >= 7){
		
		printf("Aluno está aprovado!");
		
	}
	else{
		
		printf("Aluno está reprovado!");
		
	}
	
	
}
