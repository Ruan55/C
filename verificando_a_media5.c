#include <stdio.h>
#include <string.h>

int main(){
	// Declarando as variáveis
	char resultado [200];
	float notas, media;
	int soma;
	int i;
	
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
		
		// Verificando a media do aluno
		if(notas < 0 || notas > 10){
			printf("Repetindo...");
		}
		else{
			printf("Programa encerrado!");
		}
		
		
	}while(notas < 0 || notas > 10);
	
	// Calculando a media
	media = soma / i--;
	
	// Verificando se o aluno foi aprovado
	if(media >= 7){
		// Resultado = "Aprovado";
		strcpy(resultado, "Aprovado!\n");
	}	// Resultado = "Recuperação"
	else if(media >= 5){
		strcpy(resultado, "Recuperacao!\n");
	}
	else{
		strcpy(resultado, "Reprovado!\n");
	}
	
	// Exibindo o resultado no terminal
	printf("Resultado:\n");
	printf("Sua media e:%.2f\n", media);
}
