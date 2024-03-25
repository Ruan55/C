#include <stdio.h>

int main(){
	// Declarando as variáveis
	int numeros, pares = 0, impares = 0;
	int i;
		
	// Verificando os numeros
	for(i = 0; i < 5; i++){
		printf("Digite o numero: ", i);
		scanf("%d", &numeros);
		
	if(numeros % 2 == 0){
		pares++;					
    }
    else{
    	impares++;
	}
		
	}
	
	// Exibindo o resultado na tela
	printf("Resultado:\n")	;
	printf("Pares: %d\n", pares);
	printf("Impares: %d\n", impares);
	
	
}
