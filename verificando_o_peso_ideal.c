#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as vari�veis
	char sexo;
	float pesoIdeal, altura;
	
	// Campo para o usuario preencher
	printf("Digite qual o seu sexo: M ou F\n");
	scanf("%c", &sexo);
	printf("Digite a sua altura:\n");
	scanf("%f", &altura);
	
	// Verificando as informa��es
	switch(sexo){
		
		case 'M':
			pesoIdeal = (72.7 * altura) - 58;
		break;
		
		case 'F':
			pesoIdeal = (62.1 * altura) - 44.7;
		break;
		
		default:
			printf("Dados invalidos!\n");
		
	}
	
	// Exibindo os resultados na tela
	printf("Resultado:\n");
	printf("Sexo: %c\n", sexo);
	printf("Altura: %.2f\n", altura);
	printf("Seu peso ideal �: %.2f\n", pesoIdeal);
	
}
