#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	float salario, numeroDeSalarios, salarioMinimo = 1412.00;
	
	// Campo para o usuario preencher
	printf("Digite o seu salario:\n");
	scanf("%f", &salario);
	
	// Calculando o salario do usuario
	numeroDeSalarios = salario / salarioMinimo;
	
	// Exibindo no terminal
	printf("O usuario ganha: R$ %.2f\n", salario);
	printf("Este usuario tem pelo menos: %.1f\n", numeroDeSalarios);
	
	
}
