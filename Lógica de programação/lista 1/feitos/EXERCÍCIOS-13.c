//Escreva um programa em linguagem C que leia dois n�meros inteiros digitados pelo usu�rio.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2;
	
	printf("digite seus n�meros com um enter: \n");
	scanf("%d%d",&n1,&n2);
	printf("\nSeus n�meros s�o: \n%d\n%d\n",n1,n2);
		
	return 0;
} 