#include <stdio.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as vari�veis
	int numero [5], soma = 0;
	int i;
	
	// Verificando os numeros
	for(i = 0; i < 5; i++){
		printf("Numero: %d\n", i + 1);
		scanf("%d", &numero[i]);
		
	}
	
	for(i = 0; i < 5; i++){
		soma += numero[i];
	}
	
	// Exibindo o resultado no terminal
	printf("A soma dos numeros � de: %d\n", soma);
	
}
