#include <stdio.h>

int main(){
	// Declarando as variáveis
	int i;
	
	// Calculando a tabuada de 5
	printf("Tabuada de 5\n");
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 5, i, i*5);
	}
	
	// Calculando a tabuada de 3
	printf("Tabuada de 3\n");
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 3, i , i*3);
	}
	
	// Calculando a tabuada de 2
	printf("Tabuada de 2\n");
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 2, i, i*2);
	}

}
