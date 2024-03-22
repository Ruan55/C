#include <stdio.h>

int main(){
	
	// Declarando as variáveis
	int v[5];
	int i;
	
	// Solicitando os dados
	for(i = 0; i < 5; i++){
		printf("Insira um dado:\n");
		scanf("%d", &v[i]);		
	}
	
	// Exibindo os dados no terminal
	printf("Dados inseridos:\n");
	for(i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}
	
}
