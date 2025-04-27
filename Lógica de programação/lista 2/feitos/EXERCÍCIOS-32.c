/*Escreva um programa que receba três números inteiros distintos e mostre o maior.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, n3;
	
	printf("Digite 3 números inteiros distintos, separados por enter\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if ((n1 > n2) && (n1 > n3)){
		printf("\nO maior número é %d\n",n1);
		}
	if ((n2 > n1) && (n2 > n3)){
		printf("\nO maior número é %d\n",n2);	
		}
	if ((n3 > n1) && (n3 > n2)){
		printf("\nO maior número é %d\n",n3);
		}
						
	return 0;
}