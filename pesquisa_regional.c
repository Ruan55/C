#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variaveis
	char sexo;
	int idade, maiorIdade = -100, menorIdade = 100;
	float salario, mediaSalarial = 0;
	int quantidadeDeMulheres = 0;
	int i = 0;
		
	
	// Aplicando a estrutura de repeti��o do while
	do{
		
		int quantidadeDePessoas;
		
		// Menu de op��es 
		printf("Codigo | Descri��o\n");
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
				
				// Calculando a media salarial
				mediaSalarial += salario;
				
				// Verificando a maior e menor idade do grupo
				if(idade > maiorIdade){
					maiorIdade = idade;
				}
				
				if(idade < menorIdade){
					menorIdade = idade;
				}
		
				// Verificando a quantidade de mulheres com salario a partir de R$ 5.000,00
				if(sexo == 'F' && salario >= 5000){
					quantidadeDeMulheres = quantidadeDeMulheres + 1;
				}
				
			break;
			
			case 2:
				// Exibindo o resultado no terminal
				printf("A media salarial � de: %.2f\n", mediaSalarial / quantidadeDePessoas + i);
				printf("Maior idade do grupo: %d\n", maiorIdade);
				printf("Menor idade do grupo: %d\n", menorIdade);
				printf("Quantidade de mulheres que ganham acima de 5000: %d\n", quantidadeDeMulheres);
				
				// Encerrando o programa
				exit(0);
		}
		
		
	}while(1);
	
}
