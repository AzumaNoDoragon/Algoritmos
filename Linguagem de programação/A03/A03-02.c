/*Gabriel Santos Afini da Silva
RA 2267284

A03-02
Crie uma string e faça a leitura do teclado de uma frase digitada pelo usuário.
A frase deve conter apenas letras (não deve ser digitados caracteres especiais, números etc).
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char frase[100];
	int i, count=0, soma;

	printf("Digite uma frase:\n");	
	fgets(frase, 100, stdin);
		strupr(frase);
			
	for(i=0;i<strlen(frase);i++){
		if((frase[i]=='A')||(frase[i]=='E')||(frase[i]=='I')||(frase[i]=='O')||
		(frase[i]=='U')||(frase[i]==' ')){
			count++;
		}	
	}	
	
	soma = i - count;
	
	printf("\nO número de consoantes é: %d\n", soma);
		
	return(0);
}