#include <stdio.h>
#include <stdlib.h>

int main(){
	// Declarando as variáveis
	char S, P, N;
	float media = 0;
	int notas[5], soma = 0;
	int i = 0; 
	
	do{
		
		int opcoes;
	
		//Exibindo o menu de opções
		printf("\n---------Menu de Opcoes---------\n");
		// Solicitando do usuario se ele deseja inserir mais uma nota
		printf("S - Deseja inserir mais uma nota?\n");
		// Solicitando do usuario se ele deseja ver quantas notas foram inseridas
		printf("P - Deseja ver quantas notas foram inseridas?\n");
		// Solicitando do usuario se ele deseja calcular a media aritmética das notas informadas
		printf("N - Deseja ver os calculos das media inseridas?\n");
		// Opção para o usuario sair do programa
		printf("E - Sair do programa.\n");
		scanf(" %c", &opcoes);
		
		
	// Verificando as opções escolhidas pelo usuario
	switch(opcoes){
		// Primeira opção do menu
		case 'S':
			if(i < 5){
			printf("Digite a nota:\n");
			scanf("%d", &notas[i]);
			if(notas[i] < 0 || notas[i] > 10){
				printf("Notas invalidas! Programa encerrado!\n");
				printf("Insira notas entre 0 e 10! \n");
				soma += notas[i];
				media = soma / i;
			}
			// Calculando a soma
			soma += notas[i];
			i++;
			}else{
			printf("Dados invalidos! Por favor escreva apenas numeros!\n");
			}
		break;
		// Segunda opção do menu
		case 'P':
			// Exibindo quantas notas foram inseridas
			printf("Estas sao as quantidade de notas inserida: %i\n", i);
		break;
		// Terceira opção do menu
		case 'N':	
			if(i > 0){
			// Calculando a media
			media = (float)soma / i;
			// Exibindo o calculo da media no terminal
			printf("Calculo da media: (%d + %d) / 2 = %.2f\n", notas[0], notas[1],(notas[0] + notas[1]) / 2.0);
		}else{
			printf("Nota invalida!\n");
		}
		break;
		
		case 'E':
			// Limpando o terminal
			system("cls");
			// Encerrando o programa
			 exit(0);
		break;
		
		default:
			printf("Nota invalida!\n");
			exit(0);
		
}
		
	}while(i < 5 && notas[i -1] != -1);

		

}
