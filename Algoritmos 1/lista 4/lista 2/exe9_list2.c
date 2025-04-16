#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float f, c;
	
	printf("Digite a temperatura que deseja descobrir em Celcius: ");
	scanf("%f", &c);
	
	f = (9 * c / 5) + 32;
	
	printf("\nA temperatura em Farenheits é %0.2f!\n ", f);

	return 0;	
}