#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int maca;
	float totalDaCompra;
	
	// Campo para o cliente preencher
	printf("Digite a quantidade de maçãs compradas:\n");
	scanf("%d", &maca);
	
	// Definindo o preço das maçãs
	if(maca < 12){
		
		totalDaCompra = maca * 1.30;
		
	}
	else if(maca >= 12){
		
		totalDaCompra = maca * 1.00;
	}
	
	else{
		
		printf("Dados invalidos!\n");
		
	}
	
	// Exibindo os resultados na tela
	printf("Resultado:\n");
	printf("Maçãs compradas: %d\n", maca);
	printf("Total da compra: R$ %.2f\n", totalDaCompra);
	
	
	
}
