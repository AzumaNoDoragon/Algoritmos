/* Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel 
do tipo int chamada a, uma vari�vel chamada b do tipo float e uma vari�vel 
do tipo char chamada c. Usando o operador de atribui��o, escreva uma instru��o
para atribuir um valor qualquer para cada uma delas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int a;
	float b;
	char c[1];
	
	printf("N�mero inteiro: ");
	scanf("%d",&a);
	printf("N�mero inteiro � %d\n",a);
	printf("\nN�mero real: ");
	scanf("%f",&b);
	printf("N�mero real � %.2f\n",b);
	printf("\nletra: ");
	fflush(stdin);
	gets(c);
	printf("A letra � %s\n",c);
	
	return 0;
}