/* Escreva um programa em linguagem C que contenha a declaração de uma variável 
do tipo int chamada a, uma variável chamada b do tipo float e uma variável 
do tipo char chamada c. Usando o operador de atribuição, escreva uma instrução
para atribuir um valor qualquer para cada uma delas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int a;
	float b;
	char c[1];
	
	printf("Número inteiro: ");
	scanf("%d",&a);
	printf("Número inteiro é %d\n",a);
	printf("\nNúmero real: ");
	scanf("%f",&b);
	printf("Número real é %.2f\n",b);
	printf("\nletra: ");
	fflush(stdin);
	gets(c);
	printf("A letra é %s\n",c);
	
	return 0;
}