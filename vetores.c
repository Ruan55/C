#include <stdio.h>

int main(){
	
	// Declarando as variáveis
	int v[5];
	float m;
	
	// Declarando os vetores
	v[0] = 50;
	v[1] = 40;
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	// Calculando a media
	m = (v[0] + v[1] + v[2] + v[3] + v[4])/5;
	
	// Exibindo o resultado no terminal
	printf("Resultado: %.2f\n", m);
	
}
