#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	// Adicionando alguns elementos da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	char loginSalvo [200] = "Ruan";
	char senhaSalvo [200] = "123456";
	char login[200];
	char senha[200];
	
	// Campo para o usuario preencher
	printf("Digite seu nome:\n");
	scanf("%s", &login);
	printf("Digite a sua senha:\n");
	scanf("%s", &senha);
	
	// Verificando a autenticidade da conta
	if(strcmp(login, loginSalvo) == 0 && strcmp(login, loginSalvo) == 0){
		
		printf("Bem vindo!");
		
	}
	else{
		
		printf("Login e senha invalidos!");
		
	}
	
	
}
