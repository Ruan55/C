#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
   
    int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0, maiorNum, menorNum;
    int pares = 0, impares = 0;
    float mediaGeral, mediaPares;
   
    printf("Digite um n�mero: ");
    scanf("%i",&valor);
    
    maiorNum = valor;
    menorNum = valor;
   
    while (valor != 0) {
        if (valor > 0) {
            contadorGeral++;
            somaGeral += valor;
           
            if (valor % 2 == 0) {
                // pares = pares + 1;
                pares++;
               
                //somaPares = somaPares + valor;
                somaPares += valor;
            } else {
                impares++;
            }
        }        
            printf("Digite um n�mero: ");
            scanf("%i",&valor);
            
            // Verificando qual � o maior e o menor numero
            if(valor > maiorNum){
            	maiorNum = valor;
			}
			
			if(valor > 0 && valor < menorNum){
				menorNum = valor;
			}
    }
   
    if (contadorGeral == 0) {
        printf("N�o foi informado um n�mero positivo.");
    } else {
        // cast
        // 2 -> 2.0
        mediaGeral = somaGeral / (float) contadorGeral;
        mediaPares = somaPares / (float) pares;
       
        printf("Quantidade de pares: %i \n", pares);
        printf("Quantidade de �mpares: %i \n", impares);
        printf("M�dia geral: %.1f \n", mediaGeral);
        printf("M�dia de n�meros pares: %.1f \n", mediaPares);
        printf("O maior numero �: %d\n", maiorNum);
        printf("O menor numero �: %d\n", menorNum);
    }
   
    return 0;
}
