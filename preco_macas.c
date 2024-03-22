#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as vari�veis
	int maca;
	float totalDaCompra;
	
	// Campo para o cliente preencher
	printf("Digite a quantidade de ma��s compradas:\n");
	scanf("%d", &maca);
	
	// Definindo o pre�o das ma��s
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
	printf("Ma��s compradas: %d\n", maca);
	printf("Total da compra: R$ %.2f\n", totalDaCompra);
	
	
	
}
