/*Escreva um programa em linguagem C que contenha a declara��o de duas vari�veis do tipo int
chamadas a e b. Pe�a ent�o para a pessoa informar por meio do teclado um valor para estas vari�veis.
Se o valor de a for igual ao valor de b exiba a seguinte mensagem �O valor da vari�vel a � igual ao valor 
da vari�vel b.�; caso contr�rio exiba a mensagem �O valor da vari�vel a n�o � igual ao valor da vari�vel
b�.*/ 

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int a, b;
	
	printf("Digite dois n�meros para as vari�veis(separado por enter)\n");
	scanf("%d%d",&a,&b);
	
	if (a == b){
		printf("\nO valor da vari�vel a � igual ao valor da vari�vel b.\n");
		}
		else{
			printf("\nO valor da vari�vel a n�o � igual ao valor da vari�vel b.\n");
			}
			
	return 0;
}