#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variaveis
	char sexo;
	int idade, maiorIdade = -100, menorIdade = 100;
	float salario, mediaSalarial = 0, somaSalarial = 0;
	int quantidadeDeMulheres = 0, quantidadeDePessoas;
	int i;
		
	
	// Aplicando a estrutura de repetição do while
	do{
		
		// Menu de opções 
		printf("Codigo | Descrição\n");
		printf("1 | Adicionar pessoa\n");
		printf("2 | Exibir resultado e sair\n");
		scanf(" %d", &quantidadeDePessoas);
		
		switch(quantidadeDePessoas){
			
			case 1:
				// Solicitando a idade do usuario
				printf("Digite a sua idade:\n");
				scanf("%d", &idade);
				
				// Solicitando o sexo do usuario
				printf("Digite o seu sexo:\n");
				scanf(" %s", &sexo);
				
				// Solicitando o salario do usuario
				printf("Digite o seu salario:\n");
				scanf("%f", &salario);

				// Contador de pessoas que responderam a pesquisa
				i++;
				somaSalarial += salario;
				
				
				// Verificando a maior e menor idade do grupo
				if(idade > maiorIdade){
					maiorIdade = idade;
				}
				
				if(idade < menorIdade){
					menorIdade = idade;
				}
		
				// Verificando a quantidade de mulheres com salario a partir de R$ 5.000,00
				if(sexo == 'F' && salario >= 5000){
					quantidadeDeMulheres++;
				}
				
			break;
			
			case 2:		
			// Encerrando o programa
			break;
			
			default:
				printf("Dados invalidos!\n");
		}
		
		
	}while(quantidadeDePessoas != 2);
	
			// Calculando a media salarial
			mediaSalarial = somaSalarial / i;
	
			// Exibindo o resultado no terminal
			printf("A media salarial é de: %.2f\n", mediaSalarial);
			printf("Maior idade do grupo: %d\n", maiorIdade);
			printf("Menor idade do grupo: %d\n", menorIdade);
			printf("Quantidade de mulheres que ganham acima de 5000: %d\n", quantidadeDeMulheres);

}
