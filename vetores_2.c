#include <stdio.h>

int main(){
	// Declarando as variáveis
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	// Calculando os vetores
	for(i=0; i<5; i++){
		s += v[i];
	}
	// Exibindo o resultado no terminal
	printf("Resultado: %.2f\n", s/5);
}
