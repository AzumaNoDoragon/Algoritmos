//Escreva um programa em linguagem C que leia dois números inteiros digitados pelo usuário.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2;
	
	printf("digite seus números com um enter: \n");
	scanf("%d%d",&n1,&n2);
	printf("\nSeus números são: \n%d\n%d\n",n1,n2);
		
	return 0;
} 