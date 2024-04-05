#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	float salario, mediaSalario, maiorSalario = INT_MIN, menorSalario = INT_MAX;
	float mediaFilhos , numeroDeFilhos;
	int i, totalFamilia;
	int somaSalarial, somaDeFilhos;
	
	// Aplicando o laço de repetição do while
	do{

		// Menu de opções
		printf("Codigo | Descrição\n");
		printf("1 | Adicionar familia\n");
		printf("2 | Sair e exibir resultados\n");
		scanf("%d", &totalFamilia);
		
		switch(totalFamilia){
			// Primeira opção do menu
			case 1:
			// Solicitando o salario do usuario
			printf("Digite o seu sálario: ");
			scanf("%f", &salario);
			
			// Solicitando o numero de filhos das familias da cidade
			printf("Digite o numero de filhos: ");
			scanf("%f", &numeroDeFilhos);
			
			// Contabilizando o total de familias que responderam a pesquisa
			i++;
			somaSalarial += salario;
			somaDeFilhos += numeroDeFilhos;
			
			// Verificando o grupo do maior e do menor salario
			if(salario > maiorSalario){
				maiorSalario = salario;
			}
			
			if(salario < menorSalario){
				menorSalario = salario;
			}
			
			break;
			
			case 2:
			// Segunda opção do menu
			// Encerrando o programa
		    break;
		    
		    default:
		        printf("Dados invalidos!\n");
		}
		
		
	}while(totalFamilia != 2);
	
		    // Calculando a media do salario da população
			mediaSalario = somaSalarial / i;
			// Calculando a media do numero de filhos
			mediaFilhos = somaDeFilhos / i;
			printf("Exibindo os resultados:\n") ;
			printf("Total de familias que responderam a pesquisa: %d\n", i);
			printf("Media salarial da população: %.2f\n", mediaSalario);
			printf("Media do número de filhos: %.2f\n", mediaFilhos);
			printf("Maior salario da população: %.2f\n", maiorSalario);
			printf("Menor salario da população: %.2f\n", menorSalario);
	
}
