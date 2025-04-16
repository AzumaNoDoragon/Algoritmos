#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	float raio, area;
	
	printf("Digite o raio da circunferência: ");
	scanf("%f", &raio);
	
	area = 3.1415 * (raio * raio);
	
	printf("A area da circunferência é %0.2f ", area);
	
	return 0;
}