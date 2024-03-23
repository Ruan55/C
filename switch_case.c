#include <stdio.h>

int main(){
	// Declarando as variáveis
	int diaUtil;

	// Campo para o usuario preencher
	printf("Escolha entre dia util (1) ou fim de semana (2):\n");
	scanf("%d", &diaUtil);

	// Programa para exibir na tela baseado na escolha do usuario
	switch(diaUtil){
		
		case 1:
			printf("Segunda-feira\n");
			printf("Terca-feira\n");
			printf("Quarta-feira\n");
			printf("Quinta-feira\n");
			printf("Sexta-feira\n");
		break;
		
		case 2:
			printf("Sabado\n");
			printf("Domingo\n");
		break;
		
		default:
			printf("Dados invalidos!\n");
		
	}
	
}
