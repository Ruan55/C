#include <stdio.h>
#include <string.h>

int main(){
	// Declarando as variáveis
	char resultado[200];
	int notas, soma = 0;
	int i;
	float media;
	
	// Verificando os numeros
	for(i = 1; i <= 3; i++){
		printf("Digite a nota: ", i);
		scanf("%d", &notas);
		
		// Calculando a soma
		soma = soma + notas;
			
	}
	
		// Calculando a media 
		media = soma / 3;
	
		// Verificando a media dos alunos
		if(media >= 7){
			strcpy(resultado, "Aprovado!");
		}
		else if(media < 4){
			strcpy(resultado, "Recuperação!");
		}
		else{
			strcpy(resultado, "Reprovado!");
		}

	// Exibindo o resultado no terminal
	printf("A sua media:%.2f\n", media);
	
}
