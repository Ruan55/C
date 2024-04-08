#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int usuario;
	char loginSalvo [500]  = "Ruan";
	char senhaSalvo [500] = "123456";
	char login [500];
	char senha [500];

	// Aplicando a estrutura de repetição while
	while(1){

	// Campo para o usuario preencher
	printf("Digite o seu nome de usuario: ");
	scanf("%s", &login);
	
	printf("Digite a seu senha: ");
	scanf("%s", &senha);
	
	// Verificando as credenciais da conta
	if(strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalvo) == 0){
		
		printf("Acesso garantido!\n");
		break;
		
	}else{
		
		printf("Acesso negado!\n");
		break;
		
	}
	
	}
			
}
