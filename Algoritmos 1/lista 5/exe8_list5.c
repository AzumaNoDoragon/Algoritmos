#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias. */


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int dias, anos, meses, dias_restantes;
    
    printf("Digite sua idade expressa em dias: ");
    scanf("%d", &dias);
    
    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias_restantes = (dias % 365) % 30;
    
    printf("\nA idade expressa de %d dias, representa %d anos, %d meses e %d dias!\n", dias, anos, meses, dias_restantes); 
    
	return 0;
}