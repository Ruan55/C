#include <stdio.h>

int main(){
	// Declarando as variáveis
	float kg_morango, kg_maca, desconto;
	float valorMorango, valorMaca, valorTotal;
	
	// Campo para o cliente preencher
	printf("Digite a quantidade de morangos em kg:\n");
	scanf("%f", &kg_morango);
	printf("Digite a quantidade de maçãs em kg:\n");
	scanf("%f", &kg_maca);
	
	// Calculando os preços dos morangos
	if(kg_morango <= 5){
		
		valorMorango = kg_morango * 2.50;
		
	}
	else{
		
		valorMorango = kg_morango * 2.20;
	}
	
	// Calculando os preços das maçãs
	if(kg_maca <= 5){
		
		valorMaca = kg_maca * 1.80;
		
	}
	else{
		
		valorMaca = kg_maca * 1.50;
		
	}
	
	// Calculando o valor total
	valorTotal = valorMorango + valorMaca;
	
	// Calculando os descontos
	if(kg_morango + kg_maca > 8 || valorTotal > 25.00){
		
		desconto = valorTotal * 0.10;
		valorTotal = valorTotal - desconto;
		
	}
	
	// Exibindo o total a ser pago pelo cliente no terminal
	printf("O valor total a ser pago e de: %f\n", valorTotal);
	
	
}
