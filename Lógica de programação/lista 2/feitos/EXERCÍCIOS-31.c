/*Escreva um programa que receba dois n�meros inteiros e mostre o menor.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2;
	
	printf("Digite dois n�meros inteiros separados por enter\n");
	scanf("%d%d",&n1,&n2);
	
	if (n1 < n2){
		printf("\nO menor n�meros � %d.\n",n1);
		}
		else if (n1 > n2){
			printf("\nO menor n�meros � %d.\n",n2);
			}
			else{
				printf("\nOs n�meros s�o iguais.\n");
				}
	return 0;
}
