#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[TAM], par = 0, impar = 0, positivos = 0, negativos = 0, qntdInseridos;
	int maiorNumero = INT_MIN, menorNumero = INT_MAX;
	float mediaPares = 0, mediaImpares = 0, soma = 0, somaPares = 0, somaImpar = 0, mediaTotal;
	int i;
	
	printf("Digite os numeros:\n");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite %i numero: ", i + 1);
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
			somaPares += numeros[i];
			par++;
		}
		
		if(numeros[i] % 2 == 1){
			somaImpar += numeros[i];
			impar++;
		}
		
		if(numeros[i] < 0){
			negativos++;
		}else if(numeros[i] > 0){
			positivos++;
		}
		
		if(numeros[i] > maiorNumero){
			maiorNumero = numeros[i];
		}
		
		if(numeros[i] < menorNumero){
			menorNumero = numeros[i];
		}
		
		qntdInseridos++;
		soma += numeros[i];
		
	}
	
	for(i = TAM - 1; i >= 0; i--){
		printf("Numero %d: %d\n", i + 1, numeros[i]);
	}

	mediaPares = somaPares / par;
	mediaImpares = somaImpar / impar;
	mediaTotal = soma / qntdInseridos;
	
	printf("Quantidade de pares: %d\n", par);
	printf("Quantidade de impares: %d\n", impar);
	printf("Quantidade de numeros inseridos: %d\n", qntdInseridos);
	printf("Quantidade de numeros positivos: %d\n", positivos);
	printf("Quantidade de numeros negativos: %d\n", negativos);
	printf("Maior número: %d\n", maiorNumero);
	printf("Menor número: %d\n", menorNumero);
	printf("Media par: %.2f\n", mediaPares);
	printf("Media impar: %.2f\n", mediaImpares);
	printf("Media total: %.2f\n", mediaTotal);
	
}
