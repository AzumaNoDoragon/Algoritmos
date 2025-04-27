/*Gabriel Santos Afini da Silva
RA 2267284

A01-04 Crie um vetor com 5 elementos do tipo inteiro.
Cada valor deve ser digitado pelo usuário e armazenado no vetor.
O programa deve ler o vetor, somar os elementos e apresentar o resultado na tela.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	int num [5], i, soma;
	soma=0;
	
	for (i=0;i<5;i++){
		printf("Digite um valor para que seja somado\n"); 
		scanf("%d",&num[i]);
		soma = soma + num[i];
	}
		printf("\nA soma é %d\n", soma);
		
	return (0);
}