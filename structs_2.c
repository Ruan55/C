#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3
// Uma struct � uma vari�vel especial que cont�m diversas outras vari�veis normalmente de tipos diferentes.
struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

// O comando typedef permite ao programador definir um novo nome para um determinado tipo. 
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	tipo_pessoa lista[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Insira os dados (%d):\n", i+1);
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
	}
	system("cls");
	
	puts("Seus dados:\n");
	for(i = 0; i < TAM; i++){
		printf("---------------- Pessoa %d ----------------", i + 1);
		printf("\tNome: %s\n", lista[i].nome);
		printf("\tIdade: %d\n", lista[i].idade);
		printf("\tPeso: %.2f\n", lista[i].peso);
	}
	printf("--------------------------------------");
	
}
