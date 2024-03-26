#include <stdio.h>

int main(){
	// Declarando as variáveis
	char N;
	float notas, media = 0;
	int soma = 0;
	int i = 0;
	
	do{
	
	// Campo para o usuario preencher
	printf("Insira sua nota: \n");
	scanf("%f", &notas);
	
	// Pedindo ao usuario se ele deseja inserir mais uma nota
	printf("Deseja inserir uma outra nota?: \n");
	scanf(" %c", &N);
	
	// Calculando a soma
	soma += notas;
	i++;
	
	}while(N == 'N' || N == 'n');
	
	// Calculando a media
	media = soma / i;
	
	if(i > 0){
		printf("Esta e sua media:%.2f\n", media);
	}
	else{
		printf("Nota não informada!\n");
	}
	
}
