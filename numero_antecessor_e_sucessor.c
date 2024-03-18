#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int numero, sucessor, antecessor;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	sucessor = numero + 1;
	antecessor = numero - 1;
	
	printf("Resultado:\n");
	printf("Sucessor deste numero: %d\n", sucessor);
	printf("Antecessor deste numero: %d\n", antecessor);

	
	
}
