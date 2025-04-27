/*Escreva um programa para calcular e exibir a área de uma circunferência. A fórmula para a área é:
A= p*R², onde A é a área da circunferência, p = 3.14 e R é o raio da circunferência. O raio deve ser
fornecido pelo usuário.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float a, pi, r;
	pi = 3.14;
	
	printf("Digige o raio da circunferência: ");
	scanf("%f",&r);	
	a = pi * pow(r,2.0);
	printf("\nA área da circunferência é %.2f\n",a);
		
	
	return 0;
}