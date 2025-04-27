/*Escreva um programa em linguagem C que contenha a declaração de duas variáveis do tipo int
chamadas a e b. Peça então para a pessoa informar por meio do teclado um valor para estas variáveis.
Se o valor de a for igual ao valor de b exiba a seguinte mensagem “O valor da variável a é igual ao valor 
da variável b.”; caso contrário exiba a mensagem “O valor da variável a não é igual ao valor da variável
b”.*/ 

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int a, b;
	
	printf("Digite dois números para as variáveis(separado por enter)\n");
	scanf("%d%d",&a,&b);
	
	if (a == b){
		printf("\nO valor da variável a é igual ao valor da variável b.\n");
		}
		else{
			printf("\nO valor da variável a não é igual ao valor da variável b.\n");
			}
			
	return 0;
}