#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float f, c;
	
	printf("Digite a temperatura que deseja descobrir em Farenheits: ");
	scanf("%f", &f);
	
	c = (f - 32) * 5 / 9;
	
	printf("\nA temperatura em Celcius é %0.2f!\n ", c);
	
	return 0;	
}