#include <stdio.h>

int main(){
	// Declarando as variáveis
	float nota;
	
	// Verificando as notas do aluno
	do{
		
		// Campo para o usuario preencher
		printf("Digite sua nota: ");
		scanf("%f", &nota);
		
		// Verificando se a nota é menor que 0 ou maior que 10
		if(nota < 0 || nota > 10){
			printf("Repetindo...\n");
		}
		else{
			printf("Programa encerrado!");
		}
	// Enquanto
	} while (nota < 0 || nota > 10);
		
		// Exibindo a nota no terminal
		printf("Sua nota: %.2f", nota);
		

}
