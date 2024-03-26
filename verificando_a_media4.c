#include <stdio.h>

int main(){
	// Declarando as variáveis
	float notas, media;
	int soma;
	int i;
	
	// Verificando as notas do aluno
	do{
		
		// Zerando a soma
		soma = 0;
	
		// Campo para o usuario preencher
		for(i = 0; i < 2; i++){
			printf("Digite a sua nota: ", i);
			scanf("%f", &notas);
			
			// Calculando a soma 
			soma = soma + notas;
		}
		
		// Verificando as notas do aluno
		if(notas < 0 || notas > 10){
			printf("Repetindo...");
		}
		else{
			printf("Programa encerrado!");
		}
		
		
	} while(notas < 0 || notas > 10);
	
		// Calculando a media do aluno
		media = soma / 2;
	
	// Exibindo o resultado do aluno no terminal
	printf("Sua media e: %.2f", media);
}
