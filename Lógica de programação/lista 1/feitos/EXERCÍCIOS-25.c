/*Escreva um programa para calcular e exibir a �rea de uma circunfer�ncia. A f�rmula para a �rea �:
A= p*R�, onde A � a �rea da circunfer�ncia, p = 3.14 e R � o raio da circunfer�ncia. O raio deve ser
fornecido pelo usu�rio.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float a, pi, r;
	pi = 3.14;
	
	printf("Digige o raio da circunfer�ncia: ");
	scanf("%f",&r);	
	a = pi * pow(r,2.0);
	printf("\nA �rea da circunfer�ncia � %.2f\n",a);
		
	
	return 0;
}