#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char nome [50];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	// Campo para o aluno preencher
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("Digite a sua idade:\n");
	scanf("%i", &idade);
	
	// Campo para o aluno digitar suas notas
	printf("Digite a primeira nota:\n");
	scanf("%f", &primeiraNota);
	printf("Digite a segunda nota:\n");
	scanf("%f", &segundaNota);
	printf("Digite a terceira nota:\n");
	scanf("%f", &terceiraNota);
	printf("Digite a quarta nota:\n");
	scanf("%f", &quartaNota);
	
	// Calculando a media do aluno
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota)/4;

	// Libera o terminal no windows
	system("cls");
	
	// Exibindo a media do aluno no terminal
	printf("Resultado:\n");
	printf("Nome: %s\n", nome);
	printf("Idade: %i\n", idade);
	printf("Primeira nota: %.2f\n", primeiraNota);
	printf("Segunda nota: %.2f\n", segundaNota);
	printf("Terceira nota: %.2f\n", terceiraNota);
	printf("Quarta nota: %.2f\n", quartaNota);
	printf("Media: %.2f\n", media);

	
}
