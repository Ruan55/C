#include <stdio.h>
#include <locale.h>

#define TAM 6

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int numeros[TAM];
	int numerosPares = 0, numerosImpares = 0;
	int i;
	
	// Verificando as notas do aluno
	for(i = 0; i < TAM; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
}
	
	// Exibindo o resultado na tela
	printf("\nResultado:\n");
	for(i = 0; i < TAM; i++){
		printf("Numeros: %d\n", numeros[i]);
		
	// Verificando quantos numeros pares e impares o codigo possui
	if(numeros[i] % 2 == 0){
		numerosPares++;
	}else{
		numerosImpares++;
	}
	
}	
	
	// Exibindo o resultado no terminal
	printf("Resultado:\n");
	printf("Numeros pares: %d\n", numerosPares);
	printf("Numeros impares: %d\n", numerosImpares);
	
	
}
