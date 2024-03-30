#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "Portuguese");
	
	// Declarando as variáveis
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
		
	// Campo para o usuario preencher
	printf("Digite um texto:\n");
	gets(senha_usr);
	
	// Retorna um valor após a comparação character-a-character das duas strings.
	ok = strcmp(hardText, senha_usr);
	
	// Imprimindo o resultado no terminal
	if(ok == 0){
		printf("Texto iguais.\n");
	}
	else{
		printf("Texto diferentes.\n");
	}
		
}
