/*Escreva um programa que receba dois números inteiros e mostre o menor.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2;
	
	printf("Digite dois números inteiros separados por enter\n");
	scanf("%d%d",&n1,&n2);
	
	if (n1 < n2){
		printf("\nO menor números é %d.\n",n1);
		}
		else if (n1 > n2){
			printf("\nO menor números é %d.\n",n2);
			}
			else{
				printf("\nOs números são iguais.\n");
				}
	return 0;
}
