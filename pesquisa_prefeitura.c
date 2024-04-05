#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as vari�veis
	float salario, mediaSalario = 0, maiorSalario = INT_MIN, menorSalario = INT_MAX;
	float mediaFilhos = 0, numeroDeFilhos = 0;
	int i;
	
	// Aplicando o la�o de repeti��o do while
	do{
		
		int totalFamilia;

		// Menu de op��es
		printf("Codigo | Descri��o\n");
		printf("1 | Adicionar familia\n");
		printf("2 | Sair e exibir resultados\n");
		scanf("%d", &totalFamilia);
		
		switch(totalFamilia){
			// Primeira op��o do menu
			case 1:
			// Solicitando o salario do usuario
			printf("Digite o seu s�lario: ");
			scanf("%f", &salario);
			
			// Solicitando o numero de filhos das familias da cidade
			printf("Digite o numero de filhos: ");
			scanf("%f", &numeroDeFilhos);
			
			// Contabilizando o total de familias que responderam a pesquisa
			i++;
	
			// Calculando a media do salario da popula��o
			mediaSalario += salario;
			
			// Calculando a media do numero de filhos
			mediaFilhos += numeroDeFilhos;
			
			// Verificando o grupo do maior e do menor salario
			if(salario > maiorSalario){
				maiorSalario = salario;
			}
			
			if(salario < menorSalario){
				menorSalario = salario;
			}
			
			break;
			
			case 2:
			// Segunda op��o do menu
			printf("Exibindo os resultados:\n") ;
			printf("Total de familias que responderam a pesquisa: %d\n", i);
			printf("Media salarial da popula��o: %.2f\n", mediaSalario / totalFamilia);
			printf("Media do n�mero de filhos: %.2f\n", mediaFilhos / totalFamilia);
			printf("Maior salario da popula��o: %.2f\n", maiorSalario);
			printf("Menor salario da popula��o: %.2f\n", menorSalario);
			
			// Encerrando o programa
			exit(0);
				
		}
		
		
	}while(1);
	
	
}
