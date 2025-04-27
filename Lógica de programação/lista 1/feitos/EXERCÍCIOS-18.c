/*Altere o programa do item 11 para que a pessoa possa informar os dados 
para as variáveis e depois mostre os valores informados pela mesma.*/

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
	printf("Número real: ");
	scanf("%f",&b);
	printf("letra: ");
	fflush(stdin);
	gets(c);
	printf("\nNúmero inteiro é %d, Número real é %.2f e sua letra é %s\n", a, b, c);
	
	return 0;
}