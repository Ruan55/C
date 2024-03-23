#include <stdio.h>

int main(){
	// Declarando as variáveis
	int i;

	// Aplicando a estrutura de repetição
	for(i = 1; i <= 10; i++){
		
		if(i == 5){
			// Comando para pular o numero que está sendo comparado e logo em seguida prosseguir com o programa
			continue;
		}
		printf("%d ", i);
		
	}
	
}
