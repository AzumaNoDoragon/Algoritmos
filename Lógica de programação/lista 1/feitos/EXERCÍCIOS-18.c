/*Altere o programa do item 11 para que a pessoa possa informar os dados 
para as vari�veis e depois mostre os valores informados pela mesma.*/

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
	printf("N�mero real: ");
	scanf("%f",&b);
	printf("letra: ");
	fflush(stdin);
	gets(c);
	printf("\nN�mero inteiro � %d, N�mero real � %.2f e sua letra � %s\n", a, b, c);
	
	return 0;
}