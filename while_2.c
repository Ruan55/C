#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char continua = 's';
	float media;
	int soma = 0, nota;
	int i = 0;

	// Aplicando o laço de repetição while
	while(1){
		
	printf("Digite a sua nota: ", i + 1);
	scanf("%d", &nota);

	if(nota < 0){
	break;
	}
	
	soma += nota;
	i++;
		
	}

	if(nota != 0){
		media = soma / i;
		printf("Sua media é: %.2f", media);
	}else{
		printf("Nota invalida!\n");
	}

}
